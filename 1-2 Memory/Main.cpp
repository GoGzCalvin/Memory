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
	for (b; b < 5; ++b)
	{
		int a[] = {3, 5, 7, 9, 11};

		cout << a[b] << endl;
	}
}


int numInput()
{
	// Heap-Allocated Array of Numbers
	int qty = 0;
	int even = 0;
	int odd = qty - even;

	cout << "Howdy! How many numbers would you like to provide? ";
	cin >> qty;

	int *inputs = new int[qty];

	for (int i = 0; i < qty; ++i)
	{
		cout << "Okay, what's number " << i + 1 << "?" << endl;
		int input = -1;
		cin >> input;

		if (input % 2 == 0)
		{
			even++;
		}
	}

	if(even > odd) 
	{
		cout << "Wow you like even numbers a lot." << endl; 
	}
	else
	{
		cout << "Wow you like odd numbers a lot." << endl; 
	}

	return 0;
}

// Adding Up To 21
int addition()
{
	int qty = 0;

	cout << "Howdy! Let's try gathering up some numbers that you can use to add up to 21." << endl;

	cout << "How many numbers do you think you'll need. ";
	cin >> qty;
	int sum = 0;
	int *inputs = new int[qty];

	for(int i = 0; i < qty; ++i)
	{
		cout << "Okay, what's number " << i + 1 << "?" << endl;
		int input = -1;
		cin >> input;
		sum += input;
	}

	if (sum == 21)
	{
		cout << "Wow, that adds up to 21! You sure can count." << endl;
	}

	else
	{
		cout << "I think you need to redo your math." << endl;
	}

	return 0;
}

int main()
{
	addition();




	//intArray(0, 0);

	//numInput();


	/* int * multiple = new int[100];
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
	*/
	system("pause");

	return 0;
}