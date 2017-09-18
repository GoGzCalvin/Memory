#include <iostream>
#include <fstream>
#include <string>
#include "entity.h"


using std::string;

using std::fstream;		

using namespace std;	

						
void info()
{
	string inputBuffer;

	cout << "Where would you like to save this?" << endl;
	cin >> inputBuffer;

	fstream profileData;
	profileData.open(inputBuffer.c_str(), ios_base::out);

	if (profileData.fail())
	{
		cout << "Sorry, doesn't seem like we can save there. :(" << endl;
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

	cout << "Thank you that's all he info we need! Check your file for your information." << endl;
}

int main()
{
	fstream file;

	file.open("text.txt");

	if (file.fail())
	{
		cout << "File not found. :(" << endl;
		return -1;
	}

	// Reading from a File
	string buffer;
	while (getline(file, buffer))
	{
		// print the line!
		cout << buffer << endl;
	}

	file.clear();	// reset the error flags

	file.seekp(0, ios_base::end);	// move my cursor to the end

										// Writing to a File
										// write a message! :D
	file << endl << "Today is always the present! :)";

	file.flush();
	file.close();

	// let's make another thingie

	fstream autoCreate;

	autoCreate.open("createme.txt", ios::out | ios::in);

	if (autoCreate.fail())
	{
		cout << "Something went wrong." << endl;
		return -1;
	}

	autoCreate.close();


	while (true)
	{
		cout << "What file would you like to open?" << endl;
		string inputBuffer;

		cin >> inputBuffer;
		fstream printer;

		printer.open(inputBuffer);
		if (printer.fail())
		{
			cout << "The file you have requested could not be found." << endl;
			continue;
		}

		string fileContents;
		while (getline(printer, fileContents))
		{
			cout << fileContents << endl;
		}

		file.close();
	}

	info();

	fstream entityStream;
	entityStream.open("entityManifest.txt");

	if (entityStream.fail())
	{
		cout << "Can't open the file." << endl;
	}

	int entityCount = 0;
	Entity entities[100];

	while (true)
	{
		string buf;
		bool entityFound = false;

		// seek to the next entity
		while (getline(entityStream, buf))
		{
			if (buf[0] == '@')
			{
				entityFound = true;
				break;
			}
		}

		// exit if no entity found
		if (!entityFound) { break; }

		// load data into the array of entities
		Entity& curEntity = entities[entityCount];

		getline(entityStream, buf);
		curEntity.hitpoints = stof(buf);
		getline(entityStream, buf);
		curEntity.armor = stof(buf);
		getline(entityStream, buf);
		curEntity.strength = stof(buf);
		getline(entityStream, buf);
		curEntity.defense = stof(buf);
		getline(entityStream, buf);
		curEntity.agility = stof(buf);
		getline(entityStream, buf);
		curEntity.luck = stof(buf);

		entityCount++;

		// exit if no entity found
		if (entityCount >= 100) { break; }
	}

	system("pause");
	while (true) {}	// keep the program going
}