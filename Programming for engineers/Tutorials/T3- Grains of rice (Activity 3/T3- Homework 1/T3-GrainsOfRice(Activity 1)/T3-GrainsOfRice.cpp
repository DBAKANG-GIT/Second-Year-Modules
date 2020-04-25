# include <iostream>
#include <string>
using namespace std;

//

int main() {
	int sum;
	int counter;
	sum = 0;
	counter = 0;
	//Local variable assignment//
	while (counter < 11)  {
		cout << "The value now is : " << sum << endl;
		counter++;
		sum = sum + counter;// The sum is initally set at 0 and as the counter increases it adds it to the sum and then prints it//

	}
return 0;

		


}