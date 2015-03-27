/*
 * Time.h
 *
 * 
 * Khademul Haque
 */

#ifndef TIME_H_
#define TIME_H_

class Time {
private:
	int hour;
	int minute;
	int second;
	int milisecond;
public:
	bool isValidTime();
	int getHour() const;
	void setHour(int hour);
	int getMilisecond() const;
	void setMilisecond(int milisecond);
	int getMinute() const;
	void setMinute(int minute);
	int getSecond() const;
	void setSecond(int second);
};
#endif /* TIME_H_ */
