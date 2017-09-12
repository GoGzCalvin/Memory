#include <iostream>

using namespace std;

// Find Count
int findCount(int target, int *array, int size)
{
	int freq = 0;

	for (int i = 0; i < size; ++i)
	{
		if (*(array + i) == target) {freq++;}
	}

	return freq;
}

//Array Copy
void arrayCopy(int *srcArr, int srcSize, int *dstArr, int dstSize)
{
	for (int i = 0; i < srcSize; ++i)
	{
		*(dstArr + i) = *(srcArr + i);
	}
}

// Array Reversal
void cstrReversal(int *arr, int size)
{
	for (int i = 0; i < size / 2; ++i)
	{
		char temp = *(arr + i);

		//swap
		*(arr + i) = *(arr + size - 1 - i);
		*(arr + size - 1 - i) = temp;
	}
}


// String Reversal
void cstrReversal(char * arr, int size)
{

}

void printInts(int * arr, int size)
{
	for (int i = 0; i < size; ++i)
	{
		std::cout << *(arr + i) << std::endl;
	}
}

void printFloats(float *array, int size)
{
	for (int i = 0; i < size; ++i)
	{
		cout << *(array + i) << endl;
	}
}

int arraySum(int *array, int size)
{
	int total = 0;

	for (int i = 0; i < size; ++i)
	{
		total += *(array + i);
	}

	return total;
}

float arrayAverage(int *array, int size)
{
	int total = arraySum(array, size);

	return total / (float)size;
}

int main()
{
	// Pointer Arithmetic
	int a = 0;
	int b = 1;

	struct
	{
		int hello;
		int goodbye;
		int brb;
	} thing;

	thing.hello = 2;
	thing.goodbye = 3;
	thing.brb = 4;

	cout << thing.hello << endl;
	cout << thing.goodbye << endl;
	cout << thing.brb << endl;
	cout << endl;

	cout << *((&thing.hello) + 0) << endl;
	cout << *((&thing.hello) + 1) << endl;
	cout << *((&thing.hello) + 2) << endl;
	cout << endl;


	for (int i = 0; i < 3; ++i)
	{
		std::cout << *((&thing.hello) + i) << std::endl;
	}

	// Pointer Arithmetic 2: Electric Boogaloo (arrays)
	int * newArr = new int[2];

	newArr[0] = 1;
	newArr[1] = 2;

	cout << newArr[0] << endl;
	cout << newArr[1] << endl;

	cout << newArr[0] << endl;
	cout << *(newArr + 1) << endl;

	int * arrLarge = new int[100];
	int arrLargeStack[100];

	// iteration w/ subscript operator
	for (int i = 0; i < 100; ++i)
	{
		arrLarge[i] = i;
		arrLargeStack[i] = i;
	}

	// iteration w/ pointer arithmetic
	for (int i = 0; i < 100; ++i)
	{
		cout << *(arrLargeStack + i) << std::endl;
	}

	delete[] newArr;
	delete[] arrLarge;

	// Type Casting
	float dollars = 1.80f;

	cout << dollars << endl;
	cout << (int)dollars << endl;	// use the float as an int

											//======
											// OPEN
											//======

	float * arr = new float[10];
	for (int i = 0; i < 10; ++i) { arr[i] = i; }

	printFloats(arr, 10);

	int * iArr = new int[10];
	for (int i = 0; i < 10; ++i) { iArr[i] = i; }

	int sum = arraySum(iArr, 10);
	cout << "The sum of the array is..." << sum << endl;

	float avg = arrayAverage(iArr, 10);
	cout << "The AVG of the array is..." << avg << endl;

	// Find Count
	int * fcArr = new int[8];
	for (int i = 0; i < 8; ++i) { *(fcArr + i) = i; }

	int freq = findCount(4, fcArr, 8);

	int * cpArr = new int[8];
	arrayCopy(fcArr, 8, cpArr, 8);

	cout << "BEFORE" << endl;
	printInts(fcArr, 7);
	cstrReversal(fcArr, 7);
	cout << "AFTER" << endl;
	printInts(fcArr, 7);

	char * name = new char[7];
	name[0] = 'C';
	name[1] = 'a';
	name[2] = 'l';
	name[3] = 'v';
	name[4] = 'i';
	name[5] = 'n';
	name[6] = '\0';

	cstrReversal(name, 7);

	cout << name << endl;

	while (true) {} // keep open

	delete[] fcArr;
	delete[] cpArr;
}