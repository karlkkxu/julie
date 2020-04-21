#include "Unit.h"

Unit::Unit()
{
}

Unit::Unit(Sprite* sprite, Vec2 BMloc)
{
	this->sprite = sprite;
	this->BMloc = BMloc;
}

Unit::Unit(Sprite* sprite, Grid* grid)
{
	this->sprite = sprite;
	this->grid = grid;
}

Unit::Unit(Sprite* sprite)
{
	this->sprite = sprite;
}

void Unit::drawToBM()
{
	if (this->grid != NULL)
		 this->updateBMloc();
	this->sprite->draw(this->BMloc);
}

void Unit::updateBMloc()
{
	this->BMloc = this->grid->getLocation();
}

void Unit::setGrid(Grid* grid)
{
	this->grid = grid;
}

void Unit::setBMloc(Vec2 loc)
{
	this->BMloc = loc;
}
