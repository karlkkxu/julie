#ifndef MAINGAME_H
#define MAINGAME_H

#include "SDL.h"
#include "Graphics.h"
#include "Input.h"
#include "Globals.h"
#include "Unit.h"
#include "Sprite.h"
#include "BattleMap.h"
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

	void resolve(Input input);
	void handleMouseEvent(SDL_MouseButtonEvent input);
	void handlePressedKeys(Input input);

	//testit
	BattleMap testBM;
	Unit player;
};

#endif // !MAINGAME_H
