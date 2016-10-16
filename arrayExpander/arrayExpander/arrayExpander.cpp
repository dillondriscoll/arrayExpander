//Dillon Driscoll
//October 15, 2016
//Array Expander

#include <iostream>
int *arrayExpander(int arr[], int size);


using namespace std;


int main() {          //Test data
	int test[] = { 3,4,5,6,7 };
	int testSize = 5;
	int *boop = arrayExpander(test, testSize);
	for (int i = 0; i < 10; i++)
	{
		cout << *(boop + i) << endl;
	}

	system("pause");
	return 0;
}


int *arrayExpander(int arr[], int size) {    //ARRAY EXPANDER FUNCTION

	int newSize = size * 2;    //Double size of original array
	int *newArr = nullptr;   //Initialize a pointer
	newArr = new int[newSize];  //allocate memory for new array based on original size (multiplied by 2)

	for (int i = 0; i < newSize; i++)
	{
		if (i >(size - 1)) {   //Check point where original array is finished and add 0's to empty parts of new array
			*(newArr + i) = 0;
		}
		else {
			*(newArr + i) = *(arr + i);  //Add old array elements to new array
		}
	}

	return newArr;   //return pointer of the new array
}