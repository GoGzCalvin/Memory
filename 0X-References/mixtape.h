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

void printPlaylist(const Playlist& pl);

void shufflePlaylist(Playlist& pl);

void dedupePlaylist(Playlist& pl);





