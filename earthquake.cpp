/*
* earthquake.cpp
*
* Khademul Haque
*/

#include "earthquake.h"

const Date& Earthquake::getDate() const {
return date;
}
void Earthquake::setDate(const Date& date) {
this->date = date;
}
const std::string& Earthquake::getEarthquakeName() const {
return earthquakeName;
}
void Earthquake::setEarthquakeName(const std::string& earthquakeName) {
this->earthquakeName = earthquakeName;
}
const Epicenter& Earthquake::getEpicenter() const {
return epicenter;
}
void Earthquake::setEpicenter(const Epicenter& epicenter) {
this->epicenter = epicenter;
}
const std::string& Earthquake::getId() const {
return id;
}
void Earthquake::setId(const std::string& id) {
this->id = id;
}
double Earthquake::getMagnitudeSize() const {
return magnitudeSize;
}
void Earthquake::setMagnitudeSize(double magnitudeSize) {
this->magnitudeSize = magnitudeSize;
}
MagnitudeType Earthquake::getMagnitudeType() const {
return magnitudeType;
}
const char *Earthquake::getMagnitudeTypeString() const {
switch(this->magnitudeType) {
case Ml:
return "Ml";
break;
case Ms:
return "Ms";
break;
case Mb:
return "Mb";
break;
case Mw:
return "Mw";
break;
}
return "";
}

void Earthquake::setMagnitudeType(MagnitudeType magnitudeType) {
this->magnitudeType = magnitudeType;
}
const Time& Earthquake::getTime() const {
return time;
}
void Earthquake::setTime(const Time& time) {
this->time = time;
}
const std::string& Earthquake::getTimezone() const {
return timezone;
}
void Earthquake::setTimezone(const std::string& timezone) {
this->timezone = timezone;
}