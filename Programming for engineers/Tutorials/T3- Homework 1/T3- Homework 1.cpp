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
# include <iostream>
# include <iostream>
using namespace std;
int main()
{
	float principal_A = 1000;
	float prinicipal_B = 500;
	float year = 0;

	do
	{

	} while (principal_A <= prinicipal_B);
}

// I = P*R*T/100