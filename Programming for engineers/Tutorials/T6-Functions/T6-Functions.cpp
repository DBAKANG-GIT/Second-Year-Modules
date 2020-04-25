
/*nclude <iostream>
# include <string>
using namespace std;
void myHelloWorldProgramme();
int main()
{
	myHelloWorldProgramme();
	return 0;
}
 void myHelloWorldProgramme() {
	cout << " Hello World!" << endl;
}*/
//
//#include <iostream>
//#include  <string>
//using namespace std;
//
//int myFavoriteInt(int num); // funtion prototype - declare
//
//int main()
//{
//	int ans = myFavoriteInt(7);
//	cout << ans << endl;
//
//	return 0;
//}
//
// int myFavoriteInt(int num) {
//	cout << " Enter your favourite Integer: ";
//	cin >> num;
//	return num;
//}

//# include <iostream>;
//# include <string>;
//using namespace std;
//int addFunction(int num_1, int num_2); //define//
//int main()
//{
//	int input1;
//	int input2;
//	cout << "Enter the first input:  \n";
//	cin >> input1;
//	cout << "Enter the second input:  \n";
//	cin >> input2;
//
//	int total = addFunction(input1, input2); //call//
//	cout << "The answer is : " << total << endl;
//
//	return 0;
//}
//int addFunction(int input_1,  int input_2) //declaration//
//{
//	int total = input_1 + input_2;
//	return total;
//}

# include <iostream>
# include <string>
using namespace std;
float surfaceArea(float length, float width, float height); //define//
int main()
{
	//Call//
	float ans_1 = surfaceArea(9.7, 5.8, 4.2);
	float ans_2 = surfaceArea(1.1, 3.1, 7.4);
	float ans_3 = surfaceArea(3.3, 8.6, 2.9);

	cout << " The answer is : " << ans_1 << "\n " << ans_2 << "\n" << ans_3 << endl;
}
float surfaceArea(float length, float width, float height) //declare//
{
	float TSA = 2 * ((length * width) + (width * height) + (height * length));
	return TSA;
}
