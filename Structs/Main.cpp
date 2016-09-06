/*
#include <iostream>
struct vec2 
{
	float x, y;
};
struct Player
{
	char name[80];
	float health;
	int score;
	vec2 position, velocity;
};
Player makePlayerC()
{
	Player player;
	printf("Input name and score: ");
	scanf_s("%s %d", &player.name, 80, &player.score);
	getchar();
	return player;
}
struct rectangle
{
	points angle[4];
};
void printPlayer(Player player)
{

	printf("%s %d \n", player.name, player.score);
}
void main()
{
	Player player[5];
	for (int i = 0; i < 5; ++i)
	{
		players[i] = makePlayerC();
	}
	for (int i = 0; i < 5; ++i)
	{
		printPlayer(players[i]);
	}
	getchar();
}
*/

// After Reference Lecture Problem
#include "Dino.h"
#include <iostream>



void main()
{
	const int array_size = 5;
	Dino dino[array_size];
	for (int i = 0; i < array_size; ++i)
	{
		dino[i] = makeDino();
		printDino(dino[i]);
		modifyDino(dino[i]);
		if (dino[i].powerlvl && dino[i].dangerlvl)
		{
			petDino(dino[i]);
		}

	}
	getchar();
}