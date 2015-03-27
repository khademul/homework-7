/*
 * StationInfo.h
 *
 * Khademul Haque
 */

#ifndef STATIONINFO_H_
#define STATIONINFO_H_

#include <string>

enum NetworkCode {CE, CI, FA, NP, WR};
enum TypeOfBand {LongPeriod='L', ShortPeriod='B', Broadband='H'};
enum TypeOfInstrument {HighGain='H', LowGain='L', Accelerometer='N'};

class Station {
private:
	NetworkCode networkCode;
	std::string stationCode;
	TypeOfBand typeOfBand;
	TypeOfInstrument typeOfInstrument;
	char orientation;

public:
	NetworkCode getNetworkCode() const;
	const char *getNetworkCodeString() const;
	void setNetworkCode(NetworkCode networkCode);
	char getOrientation() const;
	void setOrientation(char orientation);
	std::string getStationCode() const;
	void setStationCode(std::string stationCode);
	TypeOfBand getTypeOfBand() const;
	void setTypeOfBand(TypeOfBand typeOfBand);
	TypeOfInstrument getTypeOfInstrument() const;
	void setTypeOfInstrument(TypeOfInstrument typeOfInstrument);
};

#endif /* STATIONINFO_H_ */