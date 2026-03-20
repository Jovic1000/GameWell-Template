#pragma once
#include "Player.h"
#include "Gamewell_api.h"

class Game
{
public:

	void StartUp();

	void Update();

	bool GetIsOpen();

	Game();
	~Game();

private:

	GameScreen m_screen;
	Object m_obj;
	Player m_player;

	bool m_screenOpen;

	int m_r = 100;
	int m_g = 50;
	int m_b = 200;

	bool m_flipR = false;
	bool m_flipG = false;
	bool m_flipB = false;

};

