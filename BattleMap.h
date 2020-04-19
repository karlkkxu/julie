#ifndef BATTLEMAP_H
#define BATTLEMAP_H

#include "Grid.h"
#include "Graphics.h"

//TODO: Scalable size for the map grid
//TODO: Magic numbers
class BattleMap
{
public:
	BattleMap();
	BattleMap(Graphics* graphics);
	~BattleMap();

	void generateBlankMap();

	void drawMap();
private:
	Sprite sprites[20];
	Graphics* graphics;
	Grid battlemap[10][10];
};


#endif // !BATTLEMAP_H
