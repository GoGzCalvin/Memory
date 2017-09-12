#include <iostream>

using namespace std;


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
	// allocate an array of 100 ints on the heap
	float *numbers = new float[10];

	// initialize array elements
	for (int i = 0; i < 10; ++i) { *(numbers + i) = 0; }

	// print elements using function
	printFloats(numbers, 10);

	system("pause");

	// deallocate the array
	delete[] numbers;

}