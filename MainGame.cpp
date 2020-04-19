#include "MainGame.h"


MainGame::MainGame() 
{
	SDL_Init(SDL_INIT_EVERYTHING);
}

MainGame::~MainGame() 
{
}

void MainGame::play()
{
	SDL_Event event;
	Graphics graphics(Globals::SCREEN_WIDTH, Globals::SCREEN_HEIGHT);
	Input input;

	//testit
	this->testBM = BattleMap(&graphics);
	testBM.generateBlankMap();
	Sprite testSprite = Sprite(graphics, "sprites/JulieChar.png", 0, 0, 16, 16);
	Vec2 testVector = Vec2(100, 100);
	this->player = Unit(&testSprite, testVector);

	while (true) 
	{
		input.beginFrame();
		
		if (SDL_PollEvent(&event)) 
		{

			if (event.type == SDL_KEYDOWN && event.key.repeat == 0)
				input.keyDownEvent(event);

			else if (event.type == SDL_KEYUP)
				input.keyUpEvent(event);

			if (input.keyPressed(SDL_SCANCODE_ESCAPE))
				return;

		}

		this->draw(graphics);
	}
}

void MainGame::draw(Graphics& graphics)
{
	graphics.clear();

	////testit
	player.drawToBM();
	this->testBM.drawMap();

	graphics.flip();
}

void MainGame::update(float elapsedTime)
{
}
