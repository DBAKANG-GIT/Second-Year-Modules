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
	if (num_1 > num_2) 
	{
		cout << "The first number is greater than the second";
	}
	else {
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
