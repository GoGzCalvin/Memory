#include <iostream>
#include <fstream>
#include <string>

using namespace std;




// My Information
void myInformation()
{
	string inputBuffer;

	cout << "Where would you like to save this?" << endl;
	cin >> inputBuffer;

	fstream profileData;
	profileData.open(inputBuffer.c_str(), ios_base::out);

	if (profileData.fail())
	{
		cout << "Sorry, doesn't seem like we can save here." << endl;
		return;
	}


	cin.ignore(1000, '\n');
	cout << "Who are you?" << endl;
	getline(cin, inputBuffer);
	profileData << inputBuffer << endl;

	cout << "How old are you?" << endl;
	getline(cin, inputBuffer);
	profileData << inputBuffer << endl;

	cout << "What's your favorite color?" << endl;
	getline(cin, inputBuffer);
	profileData << inputBuffer << endl;

	profileData.flush();
	profileData.close();

	cout << "That's all the info we need! :) \n Check your file for your results." << endl;
}




int main()
{
	
	fstream file;

	while (true)
	{
		cout << "What file would you like to open?" << endl;
		string inputBuffer;

		cin >> inputBuffer;

		fstream digiPrinter;

		digiPrinter.open(inputBuffer);
		if (digiPrinter.fail())
		{
			cout << "The file you have requested could not be found." << endl;
			continue;
		}

		string fileContents;
		while (getline(digiPrinter, fileContents))
		{
			cout << fileContents << endl;
		}


		myInformation();

		file.close();
	}



	return 0;

	system("pause");
}