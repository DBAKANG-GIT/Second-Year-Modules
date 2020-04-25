

//#include <iostream>
//using namespace std;
//
//int array1[100] = {}; // [0 - 100]
//
//
//int main()
//{
//
//	for (int i = 1; i < 101; i++)
//	{
//		array1[i-1] = i;
//		cout << array1[i-1] << "  ";
//
//	}
//
//	return 0;
//}
//
//#include <iostream>
//#include <iomanip> //sets to nearest decimal place//
//
//using namespace std;
//
//double arraySize[30] = { 1.0 }; //creating an array//
//
//int main()
//{
//	cout << arraySize[0] <<endl;
//
//	int x;
//	x = arraySize[3];
//	cout << x << endl;
//
//	arraySize[7] = 1.667;
//	arraySize[6] = 3.333;
//	cout << arraySize[7] << " " << arraySize[6] << endl;
//
//	cout << setprecision(2) << arraySize[5] << " " << arraySize [7] << endl; //Set precision sets it to the nearest decimal places as specified//
//
//	for (int j = 0; j < 31; j++)
//	{
//		cout << " The contents of the array is : " << arraySize[j] << endl;
//	}
//	cout << " This is the end!";
//
//
//
//
//
//	return 0;
//	 
//}

//
//# include <iostream>
//
//using namespace std;
//
//int main()
//{
//	char myArray[6] = { 'A', 'E', 'I', 'O', 'U', '\0' };     //In order for the whole string to be printed, we need to add one more to the size of the array, the 0 is a null value//
//	cout << myArray << endl;
//
//	char myArray2[5] = { 'A', 'E' };
//	cout << myArray2 << endl;
//
//	char myCString[] = "Hello World!";
//	cout << myCString << endl;
//
//
//	return 0;
//}

# include <iostream>
# include <iomanip>

using namespace std;

int main()
{
	int multisquare[11][11];
	
	for (int i = 0; i < 11; i++)
	{
		for (int j = 0; j < 11; j++)
		{
			multisquare[i][j] = (i + 1) * (j + 1);
			cout <<setw(6)<< multisquare[i][j];
		}
		cout<<endl;
	
	}
	
}






//
//for (int i = 0; i < 11; i++)
//{
//	for (int j = 0; j < 11; j++)
//	{
//		cout << i * j ;
//	}
//	//cout << i << endl;
//}
//return 0;
//}