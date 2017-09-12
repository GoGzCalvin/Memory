#include "AussiGotchi.h"

void feedAussi(Aussiegochi & aus)
{
	aus.hunger -= 10;
	aus.happiness += 10;
}

void waterAussi(Aussiegochi & aus)
{
	aus.thirst -= 10;
	aus.happiness += 5;
}

void abuseAussi(Aussiegochi & aus)
{
	aus.sanity -= 20;
	aus.happiness -= 50;
}

void cuddleAussi(Aussiegochi & aus)
{
	aus.happiness += 50;
	aus.sanity += 25;
}




