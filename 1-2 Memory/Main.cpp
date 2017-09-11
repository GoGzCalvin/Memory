#include <iostream>
using namespace std;


int subTwoIntPointers(int *a, int *b)
{
	return *a - *b;
}

// Populating An Array from 1 to X (Function)
void populatingArray(int *array, int b)
{
	for ( b; b < 100; ++b)
	{
		array[b] = (b + 1) * 3;

		cout << array[b] << endl;
	}
}

// Printing A Heap-Allocated Integer Array
void intArray(int *a, int b)
{
	for (b; b < 6; ++b)
	{
		int a[b] = {3, 5, 7, 9, 11};

		cout << a[b] << endl;
	}
}



int main()
{
	intArray(0, 0);

	// Heap-Allocated Array of NUmbers
	int qty = 0;
	cout << "Howdy! How many numbers would you like to provide? ";
	cin >> qty;

	for(int i =0; i < qty; ++i)
	{
		cout << "Okay, what's number 1? ";
		int *inputs = new int[qty];
	}





	int * multiple = new int[100];
	populatingArray(multiple, 0);

	// A Heap-Allocated Integer Array
	int * numbers = new int[100];

	for (int i = 0; i < 100; ++i)
	{
		numbers[i] = i + 1;

		cout << numbers[i] << endl;
	}
	

	//Subtract
	int *a = new int(5);
	int *b = new int(1);


	cout << "Number A: " << *a << endl;
	cout << "Number B: " << *b << endl;

	// Subtract Int
	int sub = subTwoIntPointers(a, b);
	cout << "Difference: " << sub << endl;



	// A Heap-Allocated Object
	int *intNum = new int(1);
	float *floatNum = new float(1.0f);
	bool *aBool = new bool(true);

	int *intNums = new int[5];
	float *floatNums = new float[5];
	bool *aBools = new bool[5];

	cout << "Number: " << *intNum << endl;
	cout << "Float: " << *floatNum << endl;
	cout << "Bool: " << *aBool << endl;


	cout << "NumberArray: " << *intNums << endl;
	cout << "FloatArray: " << *floatNums << endl;
	cout << "BoolArray: " << *aBools << endl;

	delete intNum;
	delete floatNum;
	delete aBool;

	delete[] numbers;
	delete[] intNums;
	delete[] floatNums;
	delete[] aBools;

	system("pause");

	return 0;
}