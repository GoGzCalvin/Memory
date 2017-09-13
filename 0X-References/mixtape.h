#include <iostream>
#include <random>
#include <ctime>
#include <string>
using namespace std; 

struct Track
{
	string trackName; // name of track
	float playtime;        // track runtime

};

struct Playlist
{
	string playlistName; // name of playlist
	Track * trackList;        // pointer to array of tracks
	int trackCount;           // number of tracks
};

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




