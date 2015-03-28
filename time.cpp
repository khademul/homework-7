/*
* time.cpp
*
* Khademul Haque
*/

#include "time.h"

bool Time::isValidTime() {
if(hour<0 || hour>=24) {
return false;
} else if(minute<0 || minute>59) {
return false;
} else if(second<0 || second>59) {
return false;
} else if(milisecond<0 || milisecond>999) {
return false;
}
return true;
}

int Time::getHour() const {
return hour;
}
void Time::setHour(int hour) {
this->hour = hour;
}
int Time::getMilisecond() const {
return milisecond;
}
void Time::setMilisecond(int milisecond) {
this->milisecond = milisecond;
}
int Time::getMinute() const {
return minute;
}
void Time::setMinute(int minute) {
this->minute = minute;
}
int Time::getSecond() const {
return second;
}
void Time::setSecond(int second) {
this->second = second;
}