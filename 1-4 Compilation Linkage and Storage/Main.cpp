#include <iostream>
#include "globals.h"
#include <cassert>


using namespace std;
static int counter = 0;


// ReleaseHalfLove
void releaseHalfLove()
{
	

	cout << "The game, Half-Love "<< counter + 1 << ", was released!" << endl;

	
	counter = ++counter % 2 ;
}


// StepFizzBuzz
void stepFizzBuzz()
{
	for (int i = 0; i <= 16; ++i)
	{
		if (i % 5 == 0 && i % 3 == 0)
		{
			

			cout << "FizzBuzz" << endl;
		}

		else if (i % 5 == 0)
		{
			cout << "Buzz" << endl;
		}

		else if (i % 3 == 0)
		{
			cout << "Fizz" << endl;
		}

		else
		{
			cout << i << endl;
		}
	}
}


// Divide
float divide(float lhs, float rhs)
{
	assert(rhs != 0.0f && "Division by zero detected!");

	return lhs / rhs;
}


// Call Me Maybe
void callMeMaybe()
{
	static int counter = 0;

	if (counter == 0)
	{
		cout << "Howdy!" << endl;
	}
	else if (counter == 1)
	{
		cout << "I'm a savage!" << endl;
	}
	else if (counter == 2)
	{
		cout << "WOW" << endl;
	}
	else if (counter == 3)
	{
		cout << "Hello?" << endl;
	}


	counter = ++counter % 4;
}

int& picker(int& optA, int& optB, int& optC)
{
	static int counter = 0;

	switch (counter++ % 3)
	{
	case 0:
		return optA;
	case 1:
		return optB;
	case 2:
		return optC;
	default:
		return optA;
	}
}

void diffArrays(int * arrA, size_t arrASize,
	int * arrB, size_t arrBSize)
{
	assert(arrBSize <= arrASize);

	for (int i = 0; i < arrBSize; ++i)
	{
		arrA[i] -= arrB[i];
	}
}

void arrayCopy(int * srcArr, size_t srcSize,
	int * dstArr, size_t dstSize)
{
	assert(dstSize >= srcSize);
}

void gridGen(int width, int height)
{
	assert(width > -1 &&
		height > -1);
}

void counterValue()
{
	static int ct = 0;
	ct++;

	cout << ct << endl;
}

int main()
{
	stepFizzBuzz();


	for (int i = 0; i < 20; i++)
	{
		releaseHalfLove();
		cout << counter << endl;
	}


	cout << counter << endl;
	increment();
	cout << counter << endl;
	decrement();
	cout << counter << endl;
	increment();
	cout << counter << endl;

	cout << divide(5.0f, 1.0f) << endl;

	// Global Variables
	cout << globalChange << endl;
	changeOne();
	cout << globalChange << endl;
	changeTwo();
	cout << globalChange << endl;

	for (int i = 0; i < 4; ++i)
	{
		callMeMaybe();
	}


	int a = 2;
	int b = 4;
	int c = 6;

	cout << picker(a, b, c) << endl;
	cout << picker(a, b, c) << endl;
	cout << picker(a, b, c) << endl;
	cout << picker(a, b, c) << endl;
	cout << picker(a, b, c) << endl;
	cout << picker(a, b, c) << endl;


	// Preprocessor Directives
	int numA[] = { 3, 2, 1 };
	int numB[] = { 3, 2, 1, 10, 12 };

	//diffArrays(numA, 3, numB, 5);

	for (int i = 0; i < 3; ++i)
	{
		cout << numA[i] << endl;
	}

	// Static Local Variables
	for (int i = 0; i < 50; ++i)
	{
		counterValue();
	}

	system("pause");
}