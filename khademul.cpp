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