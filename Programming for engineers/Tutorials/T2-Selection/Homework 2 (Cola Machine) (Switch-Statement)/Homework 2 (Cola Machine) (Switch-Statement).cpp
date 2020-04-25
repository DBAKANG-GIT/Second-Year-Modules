# include <iostream>
# include <string>
using namespace std;
int main() {
	int beverage_num;

	cout << "You have 5 beverages to chose. They are Coke, Water, Sprite, Tango and Vimto" << endl;
	cout << " In order to pick one, kindly enter a number from 1-5 " << endl;//This works the same way as the new line function//
	cin >> beverage_num;

	switch (beverage_num) {
	case 1: cout << " You get Coke ";
		break;
	case 2: cout << " You get Water";
		break;
	case 3: cout << " You get Sprite";
		break;
	case 4:  cout << " You get Tango";
		break;
	case 5:  cout << " You get vimto";
		break;
	default:  cout << " You have inputted an invalid entry";

	}

return 0;

}