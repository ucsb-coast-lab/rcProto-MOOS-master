// $Header: /home/cvs/repository/project-plusnet/src/iMOOS2Serial/CiMOOS2SerialMain.cpp,v 1.1 2006/08/22 16:45:39 cvs Exp $
// (c) 2005

#include "CiMOOS2Serial.h"

int main(int argc, char *argv[])
{
	const char *sMissionFile = "iMOOS2Serial.moos";
	
	if(argc > 1) {
		sMissionFile = argv[1];
	}
	
	CiMOOS2Serial iMOOS2Serial;
	
	iMOOS2Serial.Run("iMOOS2Serial", sMissionFile);

	return 0;
}

