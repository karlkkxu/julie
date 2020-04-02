#ifndef MAINGAME_H
#define MAINGAME_H

#include "Sprite.h"

class Graphics;

class MainGame {

public:
	MainGame();
	~MainGame();
	void play();
	
private:
	void draw(Graphics &graphics);
	void update(float elapsedTime);

	Sprite playerSprite;
};

#endif // !MAINGAME_H
