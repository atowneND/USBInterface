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
	int diditwork = -1;	
// open serial device
	printf("Congratulations, it has compiled and run.\n");
	system("lsusb");
	char *busno = "001";
	char *devno = "003";

	printf("Bus: %s; Dev: %s\n",busno,devno);

// TODO figure out how to determine device path
	const char *device = "/dev/sdb1";
	printf("Path: %s\n",device);
	system("sudo su");
	int fd = open(device,O_RDWR|O_NOCTTY|O_NDELAY);
	system("exit");
	if (fd==-1){
		printf("fail: %s\n",strerror(errno));
	}

// configure all termios parameters/properties

// read, wait; write, wait

// close serial device

	diditwork = close(fd);
	if (diditwork<0){
		printf("failed to close: %s\n",strerror(errno));
	}

// return value
	return 0;
}

