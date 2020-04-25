/*
// T2-Variables.cpp : This file contains the 'main' function. Program execution begins and ends there.
// In order to use strings we have to define in it in the header like Modules in python
# include <iostream>
#include <string>
using namespace std;
int main()
{
	int a, b, c, d, e, f;
	a = 10, b = 34, c = 54, d = 36, e = 54, f = 42;
	a = a - b;
	b = a * b;
	c = c / b;
	d = d - c;/*The modulus sign in C++ is just (%)*//*
	e = e - d;
	f = f - e;
	string answer = "The answer is : \n";
		cout << answer;
	cout << f;
	return 0;

} 
*/
// Activity 2 Input

/*#include <iostream>
#include <string>
using namespace std;
int main() {
	string prompt = "Enter an Integer: ";
	cout << prompt;
	cin >> prompt;
	cout << prompt;
	return 0;


}*/
/*#include <iostream>
#include <string>
using namespace std;
int main()
{
	int prompt_1, prompt_2, prompt_3, total;
	cout << "Enter first integer: ";
	cin >> prompt_1;
	cout << "Enter second integer: ";
	cin >> prompt_2;
	cout << "Enter third integer: ";
	cin >> prompt_3;
	total = prompt_1 * prompt_2 * prompt_3;
	cout << total;
	return 0;
}
*/
#include <iostream>
#include <string>
using namespace std;
int main()
{
	int num_1;
	int num_2;
	cout << "Enter the first integer: \n";
	cin >> num_1;
	cout << "Enter the second integer: \n";
	cin >> num_2;
	if (num_1 > num_2) {
		cout << "The first number is greater than the second";
	} else {
		if (num_2 > num_1) {
			cout << "The second number is greater than the first";
		}
		else {
			cout << "The two numbers are equivalent";
		}
	}
	
	
	if (num_1 != num_2) {
		cout << "\nThe two numbers are not equivalent";
	}

	return 0;
}


