//// T5- Roman Numerals.cpp : This file contains the 'main' function. Program execution begins and ends there.
////
//
//#include <iostream>
//using namespace std;
//
//
//int main()
//{
//	int User_Int;
//	cout << "Enter your intger: \n";
//	cin >> User_Int;
//
//	switch (User_Int) {
//	case 1:
//		cout << "The roman numeral is i " <<endl;
//		break;
//	case 2:
//		cout << "The roman numeral is ii " << endl;
//		break;
//	case 3:
//		cout << "The roman numeral is iii " << endl;
//		break;
//	case 4:
//		cout << "The roman numeral is iv " << endl;
//		break;
//	case 5:
//		cout << "The roman numeral is v " << endl;
//		break;
//	case 6:
//		cout << "The roman numeral is vi " << endl;
//		break;
//	case 7:
//		cout << "The roman numeral is vii " << endl;
//		break;
//	case 8:
//		cout << "The roman numeral is viii " << endl;
//		break;
//	case 9:
//		cout << "The roman numeral is ix " << endl;
//		break;
//	case 10:
//		cout << "The roman numeral is x " << endl;
//		break;
//
//
//	default:
//		cout << "Value Entered is unknown";
//	}
//	return 0;
//}
//

//Activity 2

#include <iostream>
#include <string>
using namespace std;


int main()
{
	int user_Int;
	int remainder = 1;



	cout << "Please enter an integer between 1 and 3999: \n";
	cin >> user_Int;


	while (remainder != 0)
	{
		if (user_Int > 1000)
		{
			remainder = user_Int % 1000;
			if (remainder == 1)
			{
				cout << "M ";
				user_Int = user_Int - 1000;
				break;
			}
		}

		if (user_Int > 500)
		{
			remainder = user_Int % 500;
			if (remainder == 1)
			{
				cout << " " << "D ";
				user_Int = user_Int - 500;
				break;
			}
		}


		if (user_Int > 100)
		{
			remainder = user_Int % 100;
			if (remainder == 1)
			{
				cout << "C ";
				user_Int = user_Int - 100;
				break;
			}
		}

		if (user_Int > 50)
		{
			remainder = user_Int % 50;
			if (remainder == 1)
			{
				cout << "L ";
				user_Int = user_Int - 50;
				break;
			}
		}

		if (user_Int > 10)
		{
			remainder = user_Int % 10;
			if (remainder == 1)
			{
				cout << "X ";
				user_Int = user_Int - 10;
				break;
			}
		}

		if (user_Int > 3)
		{
			remainder = user_Int % 3;
			if (remainder == 1)
			{
				cout << "i ";
				user_Int = user_Int - 1;
				break;
			}
		}
	}
	return 0;
}