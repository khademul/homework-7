
all: khademul

khademul: date.o earthquake.o epicenter.o station.o time.o khademul.o 
	g++ -o khademul date.o earthquake.o epicenter.o station.o time.o khademul.o
	
date.o: date.cpp
	g++ -c date.cpp
	
earthquake.o: earthquake.cpp
	g++ -c earthquake.cpp
	
epicenter.o: epicenter.cpp
	g++ -c epicenter.cpp
	
station.o: station.cpp
	g++ -c station.cpp

time.o: time.cpp
	g++ -c time.cpp	
	
clean:
	rm khademul *.o