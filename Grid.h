#ifndef GRID_H
#define GRID_H

#include "Globals.h"
#include "Sprite.h"

class BattleMap;

class Grid 
{
public:
	//Default, not used
	Grid();
	//Constructor with only location, no background
	Grid(Vec2 location);
	//Constructor with location and background sprite
	Grid(Vec2 location, Sprite* sprite);

	void drawToGraphics();

	Vec2 getLocation();

	bool isMovable();
private:
	BattleMap* battlemap;

	Sprite* sprite;

	Vec2 location;

	bool movable = true;
};


#endif // !GRID_H
