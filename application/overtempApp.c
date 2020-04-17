/**
*
* @file overtempApp.c
* @brief Creates a file and adds 3 lines of text to it
*  There are two arguments 1) File Path and 2) A string to put in file
*
* @author Kyle Bryan
* @date April 2020
*
*/

#include <stdint.h>
#include <stdio.h>
#include <string.h>
//#include <sys/types.h>
//#include <sys/stat.h>
//#include <fcntl.h>
#include <unistd.h>
//#include <time.h>
//#include <syslog.h>
#include <pthread.h>
#include <wiringPiI2C.h>
#include <wiringPi.h>

int fd;
ssize_t nr;

/***********
* function checks if write() was succesfull
*
* @param ssize_t nr number of bytes written(or -1 for error)
*
* @return int whether result is pass[0] or fail(-1)
*************/

int main (int argc, char *argv[])
{
  uint16_t lowTemp;
  uint16_t highTemp;
  fd = wiringPiI2CSetup(0x48);
  while(1)
  {

    lowTemp = wiringPiI2CReadReg16(fd,2);
    highTemp = wiringPiI2CReadReg16(fd,2);
    printf("High Temp is: %d", highTemp);
    printf("Low Temp is: %d", lowTemp);
    sleep(1);
  }
  return 1;
}
