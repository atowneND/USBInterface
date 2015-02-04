#include <termios.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>
#include <string.h>

#include "myfun.h"

int main(){
	
// open serial device
	printf("Congratulations, it has compiled and run.\n");
	system("lsusb");
	char *busno = "001";
	char *devno = "003";

	printf("Bus: %s; Dev: %s\n",busno,devno);

//	const char *device = "/dev/bus/usb/001/003";
//	const char *device = "/dev/sdb";
	const char *device = "/dev/sdb1";
	printf("Path: %s\n",device);
	system("sudo su");
	int fd = open(device,O_RDWR|O_NOCTTY|O_NDELAY);
	system("exit");
	if (fd==-1){
		printf("fail: %s\n",strerror(errno));
	}
	close(fd);

// configure all termios parameters/properties

// read, wait; write, wait

// close serial device

	return 0;
}

