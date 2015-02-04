#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "myfun.h"

char *mystrcat(char *str1, char *str2){
	int size1 = sizeof(str1);
	int size2 = sizeof(str2);

	char *newstr = (char *)malloc(size1 + size2);
	strcat(newstr,str1);
	strcat(newstr,str2);
	
	return newstr;
}
