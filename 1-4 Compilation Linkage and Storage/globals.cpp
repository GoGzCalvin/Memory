#include "globals.h"

int globalChange = 0;
int counter = 0;

void changeTwo()
{
	globalChange = 2;
}

void changeOne()
{
	globalChange = 1;
}

void increment()
{
	counter++;
}

void decrement()
{
	counter--;
}