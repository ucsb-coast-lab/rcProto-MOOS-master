APPS="pAntler pHelmIvP pMarinePID MOOSDB iMOOS2Serial pEchoVar iGPSd pNodeReporter pLogger"

printf "Killing all processes ... \n"
killall -9 ${APPS}      
printf "Done killing processes.   \n"
