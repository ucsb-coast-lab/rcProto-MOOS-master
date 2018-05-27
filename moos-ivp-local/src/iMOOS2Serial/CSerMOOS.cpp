#include "CSerMOOS.h"
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/socket.h>
#include "byteorder.h"
#include "binary2hex.h"
#include <poll.h>
#include "sutil.h"

CSerMOOS::CSerMOOS(string serport, int baud)
{
  port = new CnSerialPort(serport);
  printf("iMOOS2Serial starting wih Baud: %i\n", baud);
  port->SetBaudRate(baud);

  running = false;
  pthread_create(&thr, NULL, &tramp, this);
}

CSerMOOS::~CSerMOOS()
{
  running = false;
  pthread_join(thr, NULL);
  delete port;
}

void CSerMOOS::NonBlockingWrite()
{
  port->NonBlockingWrite();
}

void CSerMOOS::WriteQueueFlush()
{
  port->WriteQueueFlush();
}

void CSerMOOS::AppendWriteQueue(char* buf, int len)
{
  port->AppendWriteQueue(buf, len);
}

void CSerMOOS::Thread()
{
  // From AIS script
  running = true;
  while (running) {
    port->BlockingRead();
    while(port->FindCharIndex('\r') != -1 ||
          port->FindCharIndex('\n') != -1) {
      int pos = port->FindCharIndex('\n');
      if(pos == -1) {
        pos = port->FindCharIndex('\r');
        if(pos == -1) {
          port->ReadQueueFlush();
          continue;
        }
      }
      
      bom mem = port->Read(pos+1).c_str();
      strzero_space(mem.c());
      
      // Look for good message identifiers
      char *p = strchr(mem.c(), '#');
//      printf(p); // This prints the inbound message
      if(p == NULL) {
	//p = strchr(mem.c(), '!');
	//if(p == NULL) {
	//printf("Got an invalid message...\n");
	continue;
      	//}
      }
      
      if(cb) {
	cb(up, p);
      }
    }
  }
}
