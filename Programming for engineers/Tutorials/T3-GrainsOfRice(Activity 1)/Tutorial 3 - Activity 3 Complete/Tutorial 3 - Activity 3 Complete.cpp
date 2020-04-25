#include <iostream>
#include <string>
using namespace std;
int main()
{
	char user_input;
	do
	{
		cout << "Enter the input 'y' :  ";
		cin >> user_input;
		if (user_input == 'y' || user_input == 'Y') {
			cout << "Successful, you did well " << endl;
		}
		else {
			cout << "Incorrect Value  " << endl;

		}
	} while (true);
	return 0;
}


