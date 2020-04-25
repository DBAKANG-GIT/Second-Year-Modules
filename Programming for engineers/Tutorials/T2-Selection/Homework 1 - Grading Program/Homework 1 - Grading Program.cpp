#include <iostream>
#include <string>
using namespace std;
int main() {
	int grade;
	string user_name;
	cout << " Enter your Full name: ";
	getline(cin, user_name);
	cout << "Enter your grade:  ";
	cin >> grade;
	if (grade == 100)
	{
		cout << (" Mr/ Mrs ") << user_name << " You have a perfect score ";
	}
	else if (grade >= 90 && grade < 100)
	{
		cout << (" Mr/ Mrs ") << user_name << " You have an A ";
	}
	else if (grade >= 80 && grade < 90)
	{
		cout << (" Mr/ Mrs ") << user_name << " You have a B ";
	}
	else if (grade >= 70 && grade < 80)
	{
		cout << (" Mr/ Mrs ") << user_name << " You have a C ";

	}
	else if (grade >= 60 && grade < 70)
	{cout << (" Mr/ Mrs ") << user_name << " You have a D ";
	}
	else 
	{
		cout << ("You failed, sorry ");
	}
	return 0;


}