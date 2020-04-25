/*Homework 1 Easy

# include <iostream>
# include <string>
using namespace std;
int main()
{
int user_num;
int counter = 0;
do
{
 cout << "Enter any number other than five : " << endl;
 cin >> user_num;
 counter++;

 // The break statement goes in the do block code and not the while, the while just specifies the loop//

 if (user_num == 5)
 {
  cout << "Hey!, you werent supposed to enter five !";
 }

 if (counter == 10)
 {
  cout << "Wow you are more patient than I am, well done " << endl;
  break;

 }




} while (user_num != 5);





return 0;
}

*/
/*
#include <iostream>
#include <string>
using namespace std;
int main() {
int iteration_counter = 0;
int user_inputs;
do
{
 ++iteration_counter;
 cout << " Please enter any number other than " << iteration_counter << ":" << endl;
 cin >> user_inputs;

 if (user_inputs == iteration_counter)
 {
  break;

 }
 if (user_inputs != iteration_counter)
 {

  //cout << iteration_counter;//
 }

} while (iteration_counter != user_inputs);




return 0;
} */

/*Homework 2 */
/*
# include <iostream>
# include <iostream>
using namespace std;
int main()
{
	float principal_A = 1000;
	float principal_B = 500;
	float year = 1;
	float rate_A = 0.015;
	float rate_B = 0.045;
	float sum_A;
	float sum_B;
	float interest_A;
	float interest_B;

		do

		{
			year++;


			interest_A = (principal_A * rate_A) ;
			sum_A = interest_A + principal_A;
			principal_A = sum_A;
			cout << " The prinicpal for saver  A is : " << principal_A << endl;

			interest_B = (principal_B * rate_B );
			sum_B = interest_B + principal_B;
			principal_B = sum_B;
			cout << " The principal for saver B is " << principal_B << endl;


		} while (principal_A >= principal_B);{

		}
return 0;
}

// I = P*R*T/100
 */

#include <iostream>
#include <string>
using namespace std;

int main()
{
	double initalA_amount = 25000;
	double initalB_amount = 25000;
	double depreciation_A = 0.02; //Depreciation
	double appreciation_B = 0.08; //Appreciation//
	double sum_A = 0;
	double sum_B = 0;
	int year = 1;

	do
	{
		cout << year << endl;
		initalA_amount = initalA_amount - (depreciation_A * initalA_amount);

		

		initalB_amount = initalB_amount + (appreciation_B * initalB_amount);
		
		
		cout << initalA_amount << endl;
		cout << initalB_amount << endl;

		year++;

		if (initalB_amount == (2 * initalA_amount))
		{
			cout << year;
		break;
		}

	} while (initalB_amount >= initalA_amount);


	return 0;
}
