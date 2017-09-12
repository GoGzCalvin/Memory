#include "mixtape.h"
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

void printPlaylist(const Playlist& pl)
{
	cout << pl.playlistName << endl;

	for (int i = 0; i < pl.trackCount; i++)
	{
		if (pl.trackList[i].trackName != "")
		{
			cout << pl.trackList[i].trackName << endl;
			cout << (int)pl.trackList[i].playtime << (pl.trackList[i].playtime - (int)pl.trackList[i].playtime) << endl;
		}

	}
}
void shufflePlaylist(Playlist& pl)
{
	srand(time(NULL));
	int counter = 40;
	Track temp;
	while (counter > 0)
	{
		int bogo = rand() % (pl.trackCount - 1);

		temp = pl.trackList[bogo];

		pl.trackList[bogo] = pl.trackList[bogo + 1];
		pl.trackList[bogo + 1] = temp;

		counter--;
	}


}
void dedupePlaylist(Playlist& pl)
{
	for (int i = 0; i < pl.trackCount; i++)
	{

		for (int j = i + 1; j < pl.trackCount; j++)
		{
			if (pl.trackList[i].trackName == pl.trackList[j].trackName)
			{
				pl.trackList[i].trackName = "";
			}
		}

	}
}

void main()
{
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