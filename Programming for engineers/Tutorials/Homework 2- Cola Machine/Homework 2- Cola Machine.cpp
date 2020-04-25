//Homework 2 Cola Machine Program//
#include <iostream>
#include <string>
using namespace std;


int main() {
	int Choices;
	cout << "You have five choices \n"; 
	cout << "They are Coke, Water, Sprite, Vimto and Tango \n"; 
	cout << "For Coke, Enter 1:  \n";
	cout << " For Water, Enter 2:  \n";
	cout << "  For Sprite, Enter 3:  \n";
	cout << "   For Vimto, Enter 4:  \n";
	cout << "    For Tango, Enter 5:  \n";
	cin >> Choices;

	if (Choices == 1) 
	{
		cout << "You will recieve a Coke";
	}
	else if (Choices == 2)
	{
		cout << "You will recieve Water";
	}
	else if (Choices == 3) 
	{
		cout << "You will recieve Sprite";
	}
	else if (Choices == 4) 
	{
		cout << "You will recieve Vimto";
	}
	else if (Choices == 5) 
	{
		cout << "You will recieve Tango";
	}
	else  
	{
		cout << "Error, Choice was invalid here is your money back";
	}



	 

	





}