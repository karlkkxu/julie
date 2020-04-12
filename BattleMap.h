#ifndef BATTLEMAP_H
#define BATTLEMAP_H

#include "Graphics.h"
#include "Grid.h"

//TODO: Scalable size for the map grid
class BattleMap
{
public:

	BattleMap(Graphics& graphics);

	void generateBlankMap();
private:
	Graphics* graphics;
	Grid battlemap[5][5];
};


#endif // !BATTLEMAP_H
