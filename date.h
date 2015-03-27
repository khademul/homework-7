/*
* Date.h
*
* Khademul Haque
*/

#ifndef DATE_H_
#define DATE_H_

enum Month {January, February, March, April, May, June, July, August, September, October, November, December};

class Date {
private:
int day;
Month month;
int year;

public:

bool isValidDate();
bool isLeapYear();
int getDay() const;
void setDay(int day);
Month getMonth() const;
void setMonth(Month month);
bool setMonth(int month);
int getYear() const;
void setYear(int year);
};

#endif /* DATE_H_ */
