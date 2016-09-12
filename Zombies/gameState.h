#pragma once


#include "zombie.h"

class GameState
{
	const int Z_count = 5;
	Zombie zombies[5];

public:
	void init();
	void update();
	void start();

	void drawStatus() const;
	void drawRound()  const;
	bool isGameOver() const;
};