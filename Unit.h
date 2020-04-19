#ifndef UNIT_H
#define UNIT_H

#include "Globals.h"
#include "Sprite.h"
#include "Grid.h"

using namespace Globals;
class Sprite;

/* class Unit
	Holds all of the logic in common for characters (units) that can be drawn and interact on a battlemap
*/
class Unit
{
public:
	//Default, should not be used
	Unit();
	// Constructor which attaches a sprite and a location 2d vector
	Unit(Sprite* sprite, Vec2 BMloc);
	//Constructor which attaches a sprite and a grid
	Unit(Sprite* sprite, Grid* grid);
	//Constructor which attaches only a sprite
	Unit(Sprite* sprite);

	//Uses the Unit's attributes to draw in onto the screen
	void drawToBM();

	//Setter for Grid class
	void setGrid(Grid* grid);

	//Setter for the BMloc
	void setBMloc(Vec2 loc);

	enum Faction
	{
		player,
		church,
		kaleva
	};

private:

	//Updates the Unit's location on the battlemap (BMloc) based on what grid it is occupying
	void updateBMloc();

	//Sprite attached to this unit, used when drawing the unit
	Sprite* sprite;

	//Grid attached to this unit, used when determining the BMloc
	Grid* grid = NULL;

	// Location on the battlemap
	Vec2 BMloc;

	// How far it can move in a turn
	//TODO this and other stats relevant
	int speed = 0;

	//List of available abilities
	//TODO skills
	//Skill[] skills;
};


#endif // !UNIT_H
