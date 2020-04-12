#include "Unit.h"
#include "Sprite.h"

Unit::Unit()
{
}

Unit::Unit(Sprite* sprite, Vec2 BMloc)
{
	this->sprite = sprite;
	this->BMloc = BMloc;
}

void Unit::drawToBM()
{
	this->sprite->draw(this->BMloc);
}
