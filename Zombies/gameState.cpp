#include "gameState.h"
#include <iostream>

void GameState::init()
{
	zombies[0].init("Sally", "Librarian");
	zombies[1].init("Milly", "Butcher");
	zombies[2].init("Sam", "Tailor");
	zombies[3].init("Spot", "T-Rex");
	zombies[4].init("Fred", "Giant Spider");
}

void GameState::start()
{
	printf("The contestants are:\n");
	drawStatus();
	printf("\nLet the battle Begin! Who will emerge victorious!\n");
}

void GameState::drawStatus() const
{
	for (int i = 0; i < Z_count; ++i)
		zombies[i].draw(false);
}

void GameState::drawRound() const
{
	printf("\nCombat Round: \n");
	for (int i = 0; i < Z_count; ++i)
		zombies[i].draw(false);
}


void GameState::update()
{
	for (int i = 0; i < Z_count; ++i)
		if (zombies[i].isAlive())
			zombies[rand() % Z_count].takeDamage(zombies[i].rollAttack());

}

bool GameState::isGameOver() const
{
	int livingZombies = 0;
	for (int i = 0; i < Z_count; ++i)
		if (zombies[i].isAlive())
			livingZombies++;

	return livingZombies == 1;
}