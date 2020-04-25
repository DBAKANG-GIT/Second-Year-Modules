#pragma once
#ifndef CANDLE_H
#define CANDLE_H

#include <iostream>
#include <vector>
#include <sstream>
#include <fstream>
#include <math.h> 

using namespace std;
class Candle //Class declaration//
{
private:
	int  formattedDate;   
	double open;
	double high;
	double low;
	double close;
	long long volume;
	double marketCap;

public:
	Candle(); //Constructor//
	Candle(int formattedDate ,double open, double high, double low, double close, long long volume, double market_cap); //Constructor//
	~Candle(); //Destructor

	double getHigh();
	double getLow();
	int getformattedDate();
	void getFormattedDateToPrint();
	double getOpen();
	double getClose();
	long long getVolume();
	char getCharToPrint(int upperVal, int lowerVal);
	char getBarToPrint(long long max);
	string getSmaCharToPrint( double upperVal, double lowerVal, double sma);
};
#endif  !CANDLE_H