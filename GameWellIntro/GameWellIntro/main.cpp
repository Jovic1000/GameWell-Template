#include "gamewell_v0_4/gamewell_v0_4/include/Gamewell_api.h"
#include <iostream>
#include <chrono>

int main()
{
	

	screenOpen = screen.CreateScreen("hello");
	if (!screenOpen)
	{
		std::cout << "screen error!" << std::endl;
	}
	else
	{
		int r = 100;
		int g = 50;
		int b = 200;

		bool flipR = false;
		bool flipG = false;
		bool flipB = false;

		
		Object obj2("assets/spearman.bmp", 500, 500, 50, 50, true);

		while (screenOpen)
		{
			if (obj.IsOverlapping(obj2))
			{
				screen.SetBackgroundRGB(255, 0, 0);
			}
			else
			{
				screen.SetBackgroundRGB(r, g, b);
			}
			

			switch (rand() % 3)
			{
			case(0):
				if (flipR)
				{
					r--;
				}
				else
				{
					r++;
				}
				break;
			case(1):
				if (flipG)
				{
					g--;
				}
				else
				{
					g++;
				}
				break;
			case(2):
				if (flipB)
				{
					b--;
				}
				else
				{
					b++;
				}
				break;
			default:
				break;
			}

			if (r == 255)
			{
				flipR = true;
			}
			else if (g == 255)
			{
				flipG = true;
			}
			else if (b == 255)
			{
				flipB = true;
			}
			else if (r == 0)
			{
				flipR = false;
			}
			else if (g == 0)
			{
				flipG = false;
			}
			else if (b == 0)
			{
				flipB = false;
			}

			obj.Update();
			obj2.Update();
			screen.Update();
		}
	}

	return 0;
}