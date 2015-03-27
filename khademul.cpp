/* Homework 7
CIVL 8903
Khademul Haque
URL:https://github.com/khademul/homework-7
*/

#include <iostream>
#include <algorithm>
#include <string.h>
#include <stdlib.h>
#include <fstream>

#include "earthquake.h"
#include "station.h"

using namespace std;

FILE *fpLog = NULL;

void printLog(const char *strLog) {
	printf("%s\n", strLog);
	fprintf(fpLog, "%s\r\n", strLog);
}
int isIntegerString(char *str) {
	for(unsigned int i=0; i<strlen(str); i++) {
		if((str[i]>='0' && str[i]<='9') || str[i]=='-' || str[i]=='+') {
		} else {
			return 0;
		}
	}
	return 1;
}
int atoi_h(char *str) {
	if(!isIntegerString(str)) {
		printLog("Error: Integer Expected");
		exit(1);
	}
	return atoi(str);
}