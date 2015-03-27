/*
* epicenter.cpp
*
*
* Khademul Haque
*/

#include "epicenter.h"

double Epicenter::getDepth() const {
return depth;
}
void Epicenter::setDepth(double depth) {
this->depth = depth;
}
double Epicenter::getLatitude() const {
return latitude;
}
void Epicenter::setLatitude(double latitude) {
this->latitude = latitude;
}
double Epicenter::getLongitude() const {
return longitude;
}
void Epicenter::setLongitude(double longitude) {
this->longitude = longitude;
}