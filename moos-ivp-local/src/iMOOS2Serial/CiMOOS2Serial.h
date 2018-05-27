// $Header: /home/cvs/repository/project-plusnet/src/iMOOS2Serial/CiMOOS2Serial.h,v 1.1 2006/08/22 16:45:39 cvs Exp $
// (c) 2005 
// CiMOOS2Serial.h: interface for the CiMOOS2Serial class.
////////////////////////////////////////////////

#ifndef __CiMOOS2Serial_h__
#define __CiMOOS2Serial_h__

#include "MOOS/libMOOS/MOOSLib.h"
#include "CSerMOOS.h"

#define MAXBUFLEN 120 // Needs to match the arduino receive max

class CiMOOS2Serial : public CMOOSApp
{
public:
	CiMOOS2Serial();
	virtual ~CiMOOS2Serial();

	bool OnConnectToServer();
	bool OnNewMail(MOOSMSG_LIST &NewMail);
	bool Iterate();
	bool OnStartUp();

protected:
	// insert local vars here
	CSerMOOS *bbb;

        static bool tramp(void *arg, std::string s) {
                return ((CiMOOS2Serial *)arg)->handle(s);
        }
        bool handle(std::string s);

	std::string invar;
};

#endif /* __CiMOOS2Serial_h__ */
