#pragma once
#include "Candle.h"
#include <string>
#include <algorithm>

using namespace std;

Candle::Candle() //defining  default constructor
{
	open = 0.0;
	formattedDate = 0;
	high = 0.0;
	close = 0.0;
	marketCap = 0.0;
	volume = 0;
	low = 0.0;
}
Candle::~Candle()
{
	
}

Candle::Candle(int  formattedDate, double open, double high, double low, double close, long long  volume, double marketCap)
{
	this -> formattedDate = formattedDate;
	this->open = open;
	this->high = high;
	this->low = low;
	this->close = close;
	this->volume = volume;
	this->marketCap = marketCap;
}

double Candle::getHigh()
{
	return high;
}

double Candle::getLow()
{
	return low;
}

int Candle::getformattedDate() 
{
	return formattedDate;
}

double Candle::getOpen()
{
	return open;
}

double Candle::getClose()
{
	return close;
}

long long Candle::getVolume()
{
	return volume;
}

char Candle::getCharToPrint(int upperVal, int lowerVal )
{
	const char BULLISH_CANDLE = char(178);
	const char BEARISH_CANDLE = char(176);
	const char V_BAR = char(179);
	const char SPACE = (' ');
  
	if (close >= lowerVal && upperVal >= open)
	{
	         return BULLISH_CANDLE;
	}
	else if (open >= lowerVal && upperVal >= close)
	{
		return BEARISH_CANDLE;
	}
	else if (lowerVal <= high && low <= upperVal)
	{
		return V_BAR;
	}
	else if (upperVal >= high && low >= lowerVal)
	{
		return  V_BAR;
	}
	else
	{
		return  SPACE;
	}
}

char Candle::getBarToPrint(long long max)
{
	const char INCREMENT_BAR = char(176);
	const char DECREMENT_BAR = char(219);
	const char SPACE = ' ';

	if (volume >= max && open > close)
	{
		return INCREMENT_BAR;
	}
	else if (volume >= max && open < close)
	{
		return DECREMENT_BAR;
	}
	else
	{
		return  SPACE;
	}
}

void Candle::getFormattedDateToPrint()
{
	if (formattedDate >= 10)
	{
		cout << " " << formattedDate;
	}
	else
	{
		cout << " " << '0' << formattedDate;
	}
}

string Candle::getSmaCharToPrint(  double upperVal, double lowerVal, double sma)
{
	const string CROSS =  "x" ;
	const string SPACE = "  ";
	if (  upperVal > sma && sma >  lowerVal)
	{
		return  CROSS;
	}
	else
	{
		return SPACE;
	}


}


