#pragma once
#ifndef CANDLESTICKMANAGER_H
#define CANDLESTICKMANAGER_H

#include <iostream>
#include <string>
#include <vector>
#include  "Candle.h"
#include <fstream>
#include <sstream>
#include <limits>
#include <math.h>

using namespace std;

class CandleStickManager
{

private:
	string file_name;
	vector <Candle> myCandle; // declaring a vector of objects // 

public:

	CandleStickManager(); //Declaring constructor//
	~CandleStickManager(); //Defining Destructor//
	CandleStickManager(string fileName); //Declaring  overloaded constructor//
	void openMessage(); 
	void openFile();
	void plotCandleStick(); 
	void candleYAxis();
	void xAxis();
	void xAxisValues();
	void volumeYAxis();
	void plotVolumeBar();
	void smaYAxis();
	void plotSmaChart();
};
#endif  !CANDLESTICKMANGER_H