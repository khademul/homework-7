/*
 * Epicenter.h
 *
 *
 * Khademul Haque
 */

#ifndef EPICENTER_H_
#define EPICENTER_H_

class Epicenter {
private:
	double latitude;
	double longitude;
	double depth;

public:
	double getDepth() const;
	void setDepth(double depth);
	double getLatitude() const;
	void setLatitude(double latitude);
	double getLongitude() const;
	void setLongitude(double longitude);
};
#endif /* EPICENTER_H_ */
