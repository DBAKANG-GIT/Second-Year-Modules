#pragma once
#ifndef FINANCEPROGRAM_H
#define FINANCEPROGRAM_H



#include "CandleStickManger.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <sstream>
#include "Candle.h"
#include <fstream>

using namespace std;


	class FinanceProgram
	{
	private:
		string NameOfFile;
		string userResponse;
	public: 
		FinanceProgram(); //Constructort
		FinanceProgram(string FileName); //Constructor//
		~FinanceProgram(); //Destructor
		void reRun();
		void saveFile(string, string);
		void graphToSave();


	};

#endif  !FINANCEPROGRAM_H
