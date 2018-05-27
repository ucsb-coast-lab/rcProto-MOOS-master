#!/bin/bash 
COMMUNITY="ram"
APPS="pAntler pHelmIvP pMarinePID MOOSDB iMOOS2Serial pEchoVar iGPSd pNodeReporter pLogger"
#-------------------------------------------------------
#  Part 1: Check for and handle command-line arguments
#-------------------------------------------------------
TIME_WARP=1
for ARGI; do
    if [ "${ARGI}" = "--help" -o "${ARGI}" = "-h" ] ; then
        printf "%s [SWITCHES] [time_warp]   \n" $0
        printf "  --help, -h         \n" 
        exit 0;
    elif [ "${ARGI//[^0-9]/}" = "$ARGI" -a "$TIME_WARP" = 1 ]; then 
        TIME_WARP=$ARGI
    else 
        printf "Bad Argument: %s \n" $ARGI
        exit 0
    fi
done


#-------------------------------------------------------
#  Part 2: Launch the processes
#-------------------------------------------------------
printf "Launching the %s MOOS Community (WARP=%s) \n"  $COMMUNITY $TIME_WARP
launchStatus=FAILED
try=0
while [ "${try}" -lt "10" ]; do
  pAntler $COMMUNITY.moos --MOOSTimeWarp=$TIME_WARP >& /dev/null &
  sleep 10
  launchStatus=`alogcheck --pass "(IVPHELM_ITER > 0)" LOG_ram/LOG_ram.alog`
  echo $launchStatus
  if [ "${launchStatus}" = "PASSED" ]; then
      printf "MOOS LAUNCHED!\n"
      exit 1;
  else
      printf "Launch attempt %s failed. Trying again.\n" $try
      killall -9 ${APPS}
      try=$(( ${try} + 1 ))
  fi
done



#uXMS $COMMUNITY.moos NAV_HEADING NAV_SPEED NAV_X NAV_Y


