
//We can use capacity to check the total amount of allocated memeory//
// Extra memory can be returned to the system via a call to shrink_to_fit()//
// The size function returns the number iof elements in the vector, if the size is greater than capacity then all the interations after the limit would be invalidated//
// the erase function removes the elemensts at a certain position, we can also declare a range to remove//
//  the clear function erases all elements from the array//
//	the insert function helps to add elements at a particular range, if the capacity is exceeded then the new iterations would be invalid//
// push back functions adds the elements to the end of the container//
// pop back removes the elements at the last position in the container//
// resize - resizes the containers//


# include <iostream>
# include <vector>
# include <string>

using namespace std;

int main()
{
	int size_vector;
	cout << " What size of vector do you want to see : ? \n ";
	cin >> size_vector;

std:vector<int> myVector;

	for (int i = 0; i <= size_vector; i++)
	{
		myVector.push_back(i);
		cout << "The size of the array contains : " << myVector.size() << " elements" << endl;
		cout << "The capactity of the vector is : " << myVector.capacity() << endl;
	}
	for (int n : myVector)
	{
		cout << n << endl;
	}




}


