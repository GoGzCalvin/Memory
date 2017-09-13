#include "mixtape.h"
#include "AussiGotchi.h"
#include <string>
#include <iostream>
#include <random>
#include <ctime>

using namespace std;

void product(float a, float b, float &c) 
{
	c = a * b; 
}


void swap(float &a, float &b)
{
	float temp = a;
	a = b;
	b = temp;
}


void main()
{
	Aussiegochi aussie = { 100.0f, 50.0f, 30.0f, 90.0f };

	abuseAussi(aussie);


	float a = 4;
	float b = 7;
	product(a, b, b);
	cout << a << endl;
	cout << b << endl;

	//cout << product() << endl;

	// variables
	int num = 0;
	float dec = 0.0f;
	bool tf = false;
	char letter = 'a';

	// references to said variables
	int& numRef = num;
	float& decRef = dec;
	bool& tfRef = tf;
	char& letterRef = letter;

	Track songs[4];
	songs[0].trackName = "Blackbear";
	songs[0].playtime = 4.0f;
	songs[1].trackName = "G-Eazy";
	songs[1].playtime = 3.0f;
	songs[2].trackName = "Abstract";
	songs[2].playtime = 2.0f;
	songs[3].trackName = "Hoodie Allen";
	songs[3].playtime = 4.5f;
	Playlist rap = { "Rap", songs, 4 };
	dedupePlaylist(rap);
	printPlaylist(rap);
	//shufflePlaylist(rap);

	system("pause");
}