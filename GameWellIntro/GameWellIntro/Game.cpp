#include "Game.h"
#include <iostream>

void Game::StartUp()
{
	m_screenOpen = m_screen.CreateScreen("Gamescreen");
	m_obj.Init("assets/archer.bmp", 300, 300, 50, 50, true);

	m_player.Init();

	if(!m_screenOpen) // checks if screen opens successfuly
	{
		std::cout << "Screen Error!!!" << std::endl;
	}
}

void Game::Update()
{
	

		if (m_player.GetMesh().IsOverlapping(m_obj))
		{
			m_screen.SetBackgroundRGB(255, 0, 0);
		}
		else
		{
			m_screen.SetBackgroundRGB(m_r, m_g, m_b);
		}


		switch (rand() % 3)
		{
		case(0):
			if (m_flipR)
			{
				m_r--;
			}
			else
			{
				m_r++;
			}
			break;
		case(1):
			if (m_flipG)
			{
				m_g--;
			}
			else
			{
				m_g++;
			}
			break;
		case(2):
			if (m_flipB)
			{
				m_b--;
			}
			else
			{
				m_b++;
			}
			break;
		default:
			break;
		}

		if (m_r == 255)
		{
			m_flipR = true;
		}
		else if (m_g == 255)
		{
			m_flipG = true;
		}
		else if (m_b == 255)
		{
			m_flipB = true;
		}
		else if (m_r == 0)
		{
			m_flipR = false;
		}
		else if (m_g == 0)
		{
			m_flipG = false;
		}
		else if (m_b == 0)
		{
			m_flipB = false;
		}

	m_player.Update();
	m_screen.Update();
	
	
}



bool Game::GetIsOpen()
{
	return m_screenOpen;
}

Game::Game() : m_screen(), m_screenOpen(false), m_player(), m_obj()
{
	
}

Game::~Game()
{
}
