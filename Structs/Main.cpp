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
#include <iostream>

struct Dino
{
	char name[80];
	float age;
	float powerlvl;
};
Dino makeDino()
{
	Dino dino;
	dino.age = 100;
	dino.powerlvl = 9000;
	printf("What is dino's name?: ");
	scanf_s("%s", dino.name, 80);
	getchar();
	return dino;
}
void printDino(Dino dino)
{
	printf("Your dino name %s has an age of %f and has a power level %f \n", dino.name, dino.age, dino.powerlvl);
}
void modifyDino(Dino &dino)
{
	printf("Please enter a new level that you would like your dino to be at : ");
	scanf_s("%f", &dino.powerlvl);
	getchar();
}
void main()
{
	Dino dino = makeDino();
	printDino(dino);
	modifyDino(dino);
	printDino(dino);
	getchar();
}