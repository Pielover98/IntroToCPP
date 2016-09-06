#pragma once
struct Dino
{
	char name[80];
	float age;
	float powerlvl;
	float dangerlvl;
	char KillFeed;
};
Dino makeDino();
void printDino(Dino dino);
void modifyDino(Dino &dino);
void petDino(Dino &dino);
