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

	int getX() { return x; }
	int getY() { return y; }
};


#endif // !GLOBALS_H
