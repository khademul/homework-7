/*
* station.cpp
*
* 
* Khademul Haque
*/

#include "station.h"

NetworkCode Station::getNetworkCode() const {
	return networkCode;
}
const char *Station::getNetworkCodeString() const {
switch(networkCode) {
case CE:
	return "CE";
case CI:
	return "CI";
case FA:
	return "FA";
case NP:
	return "NP";
case WR:
	return "WR";
}
return NULL;
}
void Station::setNetworkCode(NetworkCode networkCode) {
	this->networkCode = networkCode;
}
char Station::getOrientation() const {
	return orientation;
}
void Station::setOrientation(char orientation) {
	this->orientation = orientation;
}
std::string Station::getStationCode() const {
	return stationCode;
}
void Station::setStationCode(std::string stationCode) {
	this->stationCode = stationCode;
}
TypeOfBand Station::getTypeOfBand() const {
	return typeOfBand;
}
void Station::setTypeOfBand(TypeOfBand typeOfBand) {
	this->typeOfBand = typeOfBand;
}
TypeOfInstrument Station::getTypeOfInstrument() const {
	return typeOfInstrument;
}
void Station::setTypeOfInstrument(TypeOfInstrument typeOfInstrument) {
	this->typeOfInstrument = typeOfInstrument;
}