#pragma once

#include "FinanceProgram.h"
#include "CandleStickManger.h"
#include "Candle.h"
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <math.h>

using namespace std;

vector<Candle>myCandle;

CandleStickManager::CandleStickManager()
{
	
}
CandleStickManager::~CandleStickManager()
{
	
}

CandleStickManager::CandleStickManager(string FileName)
{
	file_name = FileName;
	cout << "Inside constructor for " << file_name << endl;
}
void CandleStickManager::openMessage() // Welcome Message//
{
	cout << " CandleStick Charting Program Title!" << endl;;
	cout << " Author: David Basil Akang" << endl;
	cout << " SID : 8251628" << endl << endl;
}
void CandleStickManager::openFile()
{
	while (true) //Loop till user puts in the right value//
	{ 
		ifstream inputFileStream;
		string fileName;
		cout << "Please enter the name of the file you want to open without the extension .csv: \n";
		cin >> fileName;
		fileName = fileName + ".csv"; //added the csv extension to the filename//
		inputFileStream.open(fileName);// Have replaced the hardcoded name with a prompt//

		if (inputFileStream.fail()) // has a previous extraction failed?
		{
			std::cin.clear(); // put us back in 'normal' operation mode
			std::cin.ignore(32767, '\n'); // and remove the bad input
			std::cout << "Whoa bad data, try again\n";
		}

		else if (inputFileStream.good())
		{
			cout << "Input file is good start processing..." << endl << endl;

			string line;
			getline(inputFileStream, line); // read 1st line, skip 1st line (headers), might fail!
			getline(inputFileStream, line); // read 2nd line, might fail!

			long long volume;
			double  open, high, low, close, marketCap;
			string  openField, highField, lowField, closeField, volumeField, marketCapField;
			int formattedDate;

			while (!inputFileStream.fail()) // check for failbit
			{
				//lopps through the entire file and adds each value to each row//
				stringstream ss(line);
				string date1;
				string date2;

				getline(ss, date1, ','); // read first field from line, might fail
				getline(ss, date2, ','); // read second field from line, might fail
				string date = date1 + date2;
				string trimmedDate = date.substr(1, date.size() - 2);

				stringstream fss(date1);
				string day;
				getline(fss, day, ' ');
				string day1;
				getline(fss, day1, ' ');
				formattedDate = stoi(day1);  // Converting the string to an integer//
				getline(ss, openField, ',');
				open = stod(openField);       // Converting the string to a double//
				getline(ss, highField, ',');
				high = stod(highField);
				getline(ss, lowField, ',');
				low = stod(lowField);
				getline(ss, closeField, ',');
				close = stod(closeField);
				getline(ss, volumeField, ',');
				double vol = stod(volumeField);
				volume = long long(vol);

				getline(ss, marketCapField, ',');
				marketCap = stod(marketCapField);

				Candle candleObject(formattedDate, open, high, low, close, volume, marketCap);

				myCandle.push_back(candleObject);

				getline(inputFileStream, line);

			}
			reverse(myCandle.begin(), myCandle.end());

			if (inputFileStream.eof())
			{
				cout << endl;
				cout << "Reached the end of file marker.  File data read sucessfully." << endl;
				cout << endl;
				break;

			}
			else
			{
				cout << "Error in input file." << endl;
			}
		}
		else
		{
			cout << "Error opening input file, ";
			cout << "Check " << fileName << " exists in correct directory." << endl;


		}

		inputFileStream.close();
	}
}


void CandleStickManager::plotCandleStick()
{
	candleYAxis();
	cout << setw(13) << char(192);
	xAxis();
	cout << endl;
	cout << setfill(' ');
	cout << std::string(13, ' ');
	xAxisValues();
	
	cout << endl;

	
}

void CandleStickManager::candleYAxis()
{
	double max = 0;
	double min = numeric_limits<double>::max();

	for (int i = 0; i < myCandle.size(); i++)
	{
		if (myCandle.at(i).getHigh() > max)
		{
			max = myCandle.at(i).getHigh();
		}
	}
	for (int i = 0; i < myCandle.size(); i++)
	{
		if (myCandle[i].getLow() < min)
		{
			min = myCandle.at(i).getLow();
		}
	}
	int YAxisDifference = int(max - min);

	cout << endl;

	const int Y_AXIS_VALUES = 30;
	int diff = YAxisDifference / Y_AXIS_VALUES;
	cout << setw(10) << setfill(' ') << " - Price - "  << std::string(13, ' ') <<" Candlestick chart showing the last " << myCandle.size() << " days data "<<  endl;

	
	for (int j = 0; j < Y_AXIS_VALUES; j++)
	{
		cout << setw(10) << setfill(' ') << int(max) << " -" << char(179);
		max = max - diff;
		int upperVal = int((max + diff / 2));
		int lowerVal = int((max - diff / 2));

		for (int i = 0; i < myCandle.size(); i++)
		{
			if (myCandle.size() < 91)
			{
				char output = myCandle.at(i).getCharToPrint(upperVal, lowerVal);
				cout << setw(5) << output ;
			}

			else if (myCandle.size() >= 91 && myCandle.size() <= 92)
			{

				char output = myCandle.at(i).getCharToPrint(upperVal, lowerVal);
				cout << setw(1) << output;
				//i -= 2;
				

			}
			else if (myCandle.size() > 93 && myCandle.size() < 366)
			{

				char output = myCandle.at(i).getCharToPrint(upperVal, lowerVal);
				cout << setw(0) << output;
				i += 2;

			}
			else
			{

				char output = myCandle.at(i).getCharToPrint(upperVal, lowerVal);
				cout << setw(0) << output;
				i += 8;

			}

		}
		cout << endl;
	}
}

void CandleStickManager::xAxis()

{
	const char xAxisScale = char(191);


		for (int i = 0; i < myCandle.size(); i++) 
		{

			if (myCandle.size() < 91)
			{
				cout << setw(5) << xAxisScale;
			}

			else if (myCandle.size() >= 91 && myCandle.size() <= 92)
			{
				
				cout << setw(1) << xAxisScale;
				//i += 2;
			}
			else if (myCandle.size() > 93 && myCandle.size() < 366)
			{
				
				cout << setw(0) << xAxisScale;
				i += 2;
			}
			else
			{
				
				cout << setw(0) << xAxisScale;	
				i += 8;
			}
		}
	
	
}

void CandleStickManager::xAxisValues()
{
	const int HALF_SCREEN_WIDTH = 60;
	int vectorSize = int(myCandle.size());
	for (int i = vectorSize- 1; i >= 0; i--)
	{
		

		if (myCandle.size() < 91)
		{
			setw(10);
			 myCandle.at(i).getFormattedDateToPrint();
			//i; 
			
		}

		else if (myCandle.size() >= 91 && myCandle.size() <= 92)
		{

			setw(0);
			myCandle.at(i).getFormattedDateToPrint();
			i -= 2;
			
		}
		else if (myCandle.size() > 93 && myCandle.size() < 366)
		{
			setw(0);
			myCandle.at(i).getFormattedDateToPrint();
			i -= 8;
		}
		else
		{
			setw(0);
			myCandle.at(i).getFormattedDateToPrint();
			i -= 8;
		}
	}
	cout << endl;
	cout << std::string(HALF_SCREEN_WIDTH, ' ') << "- Date - " << endl;
	
}

void CandleStickManager::volumeYAxis()
{
	long long max = 0;
	long long min = numeric_limits<long long>::max();

	for (int i = 0; i < myCandle.size(); i++)
	{
		if (myCandle.at(i).getVolume() > max)
		{
			max = myCandle.at(i).getVolume();
		}
		
	}

	for (int i = 0; i < myCandle.size(); i++)
	{
		if (myCandle[i].getVolume() < min)
		{
			min = myCandle.at(i).getVolume();
		}
	}

	cout << setw(10) << setfill(' ') << " - Volume - " << std::string(20, ' ') << " Bargraph showing trading volume: " << endl;


	const long long YAXISDVISOR = long long(pow(10, 9));
	long long yAxisstep;
	const int DIVISIONS = 30;
	long long yAxisDifference = max - min;
	yAxisstep = yAxisDifference / DIVISIONS;

	for (int j = 0; j < DIVISIONS; j++)
	{
	
	
		cout << setw(5) << setfill(' ') << (max / YAXISDVISOR)  << " Bil " << " -" << char(179);
		max = max - yAxisstep;
		

		for (int i = 0; i < myCandle.size(); i++)
		{
			if (myCandle.size() < 91)
			{
				char output = myCandle.at(i).getBarToPrint(max);
				cout << setw(5) << output;
			}

			else if (myCandle.size() >= 91 && myCandle.size() <= 92)
			{

				char output = myCandle.at(i).getBarToPrint(max);
				cout << setw(1) << output;
		
			}
			else if (myCandle.size() > 93 && myCandle.size() < 366)
			{

				char output = myCandle.at(i).getBarToPrint(max);
				cout << setw(0) << output;
				i += 2;

			}
			else
			{

				char output = myCandle.at(i).getBarToPrint(max);
				cout << setw(0) << output;
				i += 8;

			}

		}
		cout << endl;
	}
}

void CandleStickManager::plotVolumeBar()
{
	volumeYAxis();
	cout << setw(13) << char(192);
	xAxis();
	cout << endl;
	cout << setfill(' ');
	cout << std::string(13, ' ');
	xAxisValues();
	cout << endl;
}

void CandleStickManager::smaYAxis()
{
	double max = 0;
	double min = numeric_limits<double>::max();

	for (int i = 0; i < myCandle.size(); i++)
	{
		if (myCandle.at(i).getHigh() > max)
		{
			max = myCandle.at(i).getHigh();
		}
	}

	for (int i = 0; i < myCandle.size(); i++)
	{
		if (myCandle[i].getLow() < min)
		{
			min = myCandle.at(i).getLow();
		}
	}

	cout << endl;

	cout << setw(5) << setfill(' ') << "-Price -" << std::string(30, ' ') << " Period-9 MA chart " << endl;
	double sma = 0.0;
	
	double yAxisStep = ((max - min)/30);

	for (int j = 0; j < 30; j++)
	{
		max = max - yAxisStep;
		double upperVal = max + (yAxisStep / 2);
		double lowerVal = max - (yAxisStep / 2);
		cout << setw(5) << setfill(' ') << int(max) << " -" << char(179);
		
		for (int k = 0; k < myCandle.size(); k++)
		{
			if (k >9)
			{
				for (int x = 0; x < 9; x++)
				{
					int range = k - x;

					sma = myCandle.at(range).getClose() + sma;
				}
				sma = sma / 9;
			}


			if (myCandle.size() < 91)
			{
				string output = myCandle.at(k).getSmaCharToPrint(upperVal, lowerVal, sma);
				
				cout << setw(5) << output;
			}

			else if (myCandle.size() >= 91 && myCandle.size() <= 92)
			{

				string output = myCandle.at(k).getSmaCharToPrint(upperVal, lowerVal, sma);
			
				cout << setw(3) << output;
				k += 2;
			}
			else if (myCandle.size() > 93 && myCandle.size() < 366)
			{

				string output = myCandle.at(k).getSmaCharToPrint(upperVal, lowerVal, sma);
				
				cout << setw(0) << output;
				k += 5;
			}
			else
			{

				string output = myCandle.at(k).getSmaCharToPrint(upperVal, lowerVal, sma);
				cout << setw(0) << output;
				k += 8;
			}
		}
		cout << endl;
	}
}

void CandleStickManager::plotSmaChart()
{
	smaYAxis();
	cout << setw(8) << char(192);
	xAxis();
	cout << endl;
	cout << setfill(' ');
	cout << std::string(8, ' ');
	xAxisValues();
	cout << endl;
}












