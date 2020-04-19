#include "Grid.h"

Grid::Grid()
{
}

Grid::Grid(Vec2 location)
{
	this->location = location;
}

Grid::Grid(Vec2 location, Sprite* sprite)
{
	this->location = location;
	this->sprite = sprite;
}

void Grid::drawToGraphics()
{
	this->sprite->draw(this->location);
}

Vec2 Grid::getLocation()
{
	return this->location;
}

bool Grid::isMovable()
{
	return this->movable;
}
