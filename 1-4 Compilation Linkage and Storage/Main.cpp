#include <iostream>

using namespace std;
static int counter = 0;

void releaseHalfLove()
{
	

	cout << "The game, Half-Love "<< counter + 1 << ", was released!" << endl;

	
	counter = ++counter % 2 ;

	// counter == even = 1
	// counter == odd = 2


	/*for (int i = 0; i < counter; i++)
	{
	
	}

	if (counter < 3)
	{
		cout << "The game, Half-Love " << ", was released!" << endl;
	}*/
}

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
int main()
{
	stepFizzBuzz();


	for (int i = 0; i < 20; i++)
	{
		releaseHalfLove();
		cout << counter << endl;
	}

	system("pause");
}