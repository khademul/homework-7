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
int isFloatString(char *str) {
for(unsigned int i=0; i<strlen(str); i++) {
	if((str[i]>='0' && str[i]<='9') || str[i]=='.' || str[i]=='-' || str[i]=='+') {

	} else {
		return 0;
	}
}
return 1;
}

float atof_h(char *str) {
if(!isFloatString(str)) {
	printLog("Error: Real Number Expected");
	printLog(str);
	exit(1);
}
return atof(str);
}
int isEqual(char *s1, const char *s2) {
return strcmp(s1,s2)==0;
}

int isEqualCI(char *s1, const char *s2) {
if(strlen(s1)!=strlen(s2)) {
	return 0;
}
for(unsigned int i=0; i<strlen(s1); i++) {
	if(tolower(s1[i])!=tolower(s2[i])) {
		return 0;
	}
}
return 1;
}
void trimLastNewLines(char *str) {
for(int i=strlen(str)-1; i>=0; i++) {
	if(str[i]=='\r' || str[i]=='\n') {
		str[i] = 0;
	} else {
		break;
	}
}
}
static inline std::string &ltrim(std::string &s) {
s.erase(s.begin(), std::find_if(s.begin(), s.end(), std::not1(std::ptr_fun<int, int>(std::isspace))));
return s;
}
static inline std::string &rtrim(std::string &s) {
s.erase(std::find_if(s.rbegin(), s.rend(), std::not1(std::ptr_fun<int, int>(std::isspace))).base(), s.end());
return s;
}
static inline std::string &trim(std::string &s) {
return ltrim(rtrim(s));
}
FILE* openFileWriteMode(const char *filePath) {
FILE *fp = fopen(filePath, "w");
if(fp==NULL) {
	printf("Unable to open %s. Check permission\n", filePath);
	exit(1);
}
return fp;
}
char* stringToCharPtr(const std::string &str) {
char * writable = new char[str.size() + 1];
std::copy(str.begin(), str.end(), writable);
writable[str.size()] = '\0';
return writable;
}

int main() {
	string line;
	char strTmp[256];
	char inputFilePath[1024];
	//size_t len = 0;
	//ssize_t read;
    printf("Input File: ");
	std::cin>>inputFilePath;
	//strcpy(inputFilePath,"in2.txt");


	/*fpLog = fopen("earthquake.log", "w");
	if(fpLog==NULL) {
		printf("Unable to open earthquake.log. Check permission\n");
		exit(1);
	}*/
	fpLog = openFileWriteMode("earthquake.log");


	sprintf(strTmp, "Opening file:%s",inputFilePath);
	printLog(strTmp);

	//FILE *fp = fopen(inputFilePath, "r");
	std::ifstream fp(inputFilePath);
	if (!fp.is_open()) {
		printLog("Input file not exist");
		exit(1);
	}
