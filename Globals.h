#ifndef GLOBALS_H
#define GLOBALS_H

namespace Globals 
{
	const int SCREEN_WIDTH = 1280;
	const int SCREEN_HEIGHT = 680;

}

struct Vec2
{
	int x, y;

	//default constructor, should never be used
	Vec2()
	{
		this->x = 0;
		this->y = 0;
	}

	// Constructor that takes the initial x and y coords
	Vec2(int x, int y)
	{
		this->x = x;
		this->y = y;
	};

	int getX() { return x; }
	int getY() { return y; }
};


#endif // !GLOBALS_H
