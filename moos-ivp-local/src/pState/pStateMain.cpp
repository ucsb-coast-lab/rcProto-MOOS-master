// pState consumes raw IMU and GPS data and produces a state estimate 
// of NAV_HEADING, _SPEED, _X, and _Y.
// 
//


#include "CpState.h"

int main(int argc, char *argv[])
{
	const char *sMissionFile = "pState.moos";
	
	if(argc > 1) {
		sMissionFile = argv[1];
	}
	
	CpState pState;
	
	pState.Run("pState", sMissionFile);

	return 0;
}

