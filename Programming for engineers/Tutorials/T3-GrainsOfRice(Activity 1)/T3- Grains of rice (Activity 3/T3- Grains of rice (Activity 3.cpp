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
		if (user_input =='y' || 'Y') {
			cout << "Successful"<< endl;
		}
		else {
			cout << "Incorrect Value";
		}
	} while (true);
return 0;
}


