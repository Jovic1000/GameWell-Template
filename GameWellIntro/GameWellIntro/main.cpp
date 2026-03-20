#include "Game.h"

int main()
{
	Game game;

	game.StartUp();

	while (game.GetIsOpen())
	{
		game.Update();
	}
		
	return 0;
}