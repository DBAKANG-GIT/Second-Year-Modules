#include "FinanceProgram.h"
#include "CandleStickManger.h"
#include "candle.h"
#include <iostream>
#include <vector>
#include <vector>
#include <fstream>
#include <iomanip>
#include <sstream>
#include <string>
using namespace std;
CandleStickManager object;

FinanceProgram::FinanceProgram()// defining default constructor
{
	string outputFilePrompt;
	string fileName;
	string input2;
	string input3;
	string input;
	object.openMessage();
	object.openFile();



	while (true) // Loop until user enters a valid input
	{

		cout << " Please enter the graph you would like to see? " << endl;
		cout << " For CandleStick, enter 'Candlestick', For Baragraph enter 'Baragraph', For SMA enter 'sma', For all charts enter 'all' " << endl;
		cin >> input;


		// Check for failed extraction
		if (cin.fail()) // has a previous extraction failed?
		{
			std::cin.clear(); // put us back in 'normal' operation mode
			std::cin.ignore(32767, '\n'); // and remove the bad input
			std::cout << "Whoa bad data, try again\n";
		}
		else if (cin.good())
		{
			std::cin.ignore(32767, '\n'); // remove any extraneous input

			if (input == "Candle " || input == "k" || input == "candlestick" || input == "candle")
			{
				object.plotCandleStick();
				break;
			}
			else if (input == "Baragraph " || input == "bar" || input == "baragraph" || input == "BARAGRAPH")
			{
				object.plotVolumeBar();
				break;

			}
			else if (input == "SMA " || input == "simplemovingaverage" || input == "sma" || input == "s")
			{
				object.plotSmaChart();
				break;


			}
			else if (input == "all" || input == " ALL" || input == "All")
			{
				object.plotCandleStick();
				object.plotVolumeBar();
				object.plotSmaChart();
				break;
			}
			else
			{
				cout << "Oops, that input is invalid.  Please try again.\n";
				cout << endl;
			}
		}
		
	}




	cout << " Would you like to output the charts to a file?" << endl;

	cout << " Please type Y or y to output to text file" << endl;
	cin >> outputFilePrompt;

	if (outputFilePrompt == " Y" || outputFilePrompt == "y" || outputFilePrompt == "yes" || outputFilePrompt == "YES")
	{

		cout << " Please enter the name of the file you would like it saved to without .txt ? " << endl;
		cin >> fileName;
		fileName = fileName + ".txt";
		
		saveFile(fileName, outputFilePrompt);
	}
	cout << "Would you want to re-run the program?" << endl;
	cin >> input2;
		if (input2 == "yes" || input2 == "Y" || input2 == "YES" || input == "y")
		{
			reRun();
			return;
		}
		cout << "Thank you for using the financial candlestick charting program. Goodbye!";
}
		
FinanceProgram::FinanceProgram(string FileName)
{
	NameOfFile = FileName;
	cout << "Inside constructor for " << NameOfFile << endl;
}

FinanceProgram::~FinanceProgram()
{
	
}

void FinanceProgram::reRun()
{
	FinanceProgram();
}

void FinanceProgram::saveFile(string fileName, string outputFilePrompt)
{
	ofstream os(fileName);
	streambuf* outBuff = cout.rdbuf();
	cout.rdbuf(os.rdbuf());
	object.plotCandleStick();
	object.plotVolumeBar();
	object.plotSmaChart();
	cout.rdbuf(outBuff);
	cout << fileName << " saved successfully." << endl;

	
	
}










