/*
* Earthquake.h
*
* Khademul Haque
*/

#ifndef EARTHQUAKE_H_
#define EARTHQUAKE_H_

#include <string>
#include "epicenter.h"
#include "date.h"
#include "time.h"

enum MagnitudeType {Ml, Ms, Mb, Mw};

class Earthquake {

public:
const Date& getDate() const;
void setDate(const Date& date);

const std::string& getEarthquakeName() const;
void setEarthquakeName(const std::string& earthquakeName);

const Epicenter& getEpicenter() const;
void setEpicenter(const Epicenter& epicenter);

const std::string& getId() const;
void setId(const std::string& id);

double getMagnitudeSize() const;
void setMagnitudeSize(double magnitudeSize);
MagnitudeType getMagnitudeType() const;

const char *getMagnitudeTypeString() const;
void setMagnitudeType(MagnitudeType magnitudeType);

const Time& getTime() const;
void setTime(const Time& time);

const std::string& getTimezone() const;
void setTimezone(const std::string& timezone);

private:
std::string id;
Date date;
Time time;
std::string timezone;
std::string earthquakeName;
Epicenter epicenter;
MagnitudeType magnitudeType;
double magnitudeSize;
};

#endif /* EARTHQUAKE_H_ */
