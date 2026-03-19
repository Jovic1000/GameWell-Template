#pragma once
#include "Player.h"
#include "gamewell_v0_4/gamewell_v0_4/include/GameScreen.h"

class Game
{
public:

	void StartUp();

	void Update();
	void Render();

	Game();
	~Game();

private:

	GameScreen screen;
	bool screenOpen;
};

