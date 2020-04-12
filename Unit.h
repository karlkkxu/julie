#ifndef UNIT_H
#define UNIT_H

#include "Globals.h"

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

	void drawToBM();

	enum Faction
	{
		player,
		church,
		kaleva
	};

private:

	//Sprite attached to this unit
	Sprite* sprite;

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
