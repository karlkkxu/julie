#ifndef MAINGAME_H
#define MAINGAME_H

#include "Unit.h"

class Graphics;

class MainGame {

public:
	MainGame();
	~MainGame();
	void play();
	
private:
	void draw(Graphics &graphics);
	void update(float elapsedTime);

	Unit player;
};

#endif // !MAINGAME_H
