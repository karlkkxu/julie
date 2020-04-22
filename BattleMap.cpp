#include "BattleMap.h"

BattleMap::BattleMap()
{
}

BattleMap::BattleMap(Graphics* graphics)
{
	this->graphics = graphics;
}

BattleMap::~BattleMap()
{
}

void BattleMap::generateBlankMap()
{
	int xCOORD = 0;
	int yCOORD = 0;

	Sprite sprite = Sprite(this->graphics, "sprites/testDot.png", 0, 0, 16, 16);
	this->sprites[0] = sprite;

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			Vec2 loc = Vec2(xCOORD, yCOORD);
			this->battlemap[i][j] = Grid(loc, &this->sprites[0]);
			xCOORD += 100;
		}
		yCOORD += 100;
		xCOORD = 0;
	}
}

void BattleMap::drawMap()
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			this->battlemap[i][j].drawToGraphics();
		}
	}
}