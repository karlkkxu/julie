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

			else if (event.type == SDL_MOUSEBUTTONDOWN)
				input.mouseDownEvent(event);
		}

		this->resolve(input);

		this->draw(graphics);
	}
}

void MainGame::draw(Graphics& graphics)
{
	graphics.clear();

	//testit
	this->testBM.drawMap();
	player.drawToBM();

	graphics.flip();
}

void MainGame::update(float elapsedTime)
{
}

void MainGame::resolve(Input input)
{
	if (input.getMouseEvent() != NULL)
		handleMouseEvent(input.getMouseEvent());

	if (input.getPressedKeysMAP().empty() == false)
		handlePressedKeys(input.getPressedKeysMAP());
}

void MainGame::handleMouseEvent(SDL_MouseButtonEvent* input)
{
	//TODO more variations and considerations for different contexts of press

	
	Vec2 loc = Vec2(input->x, input->y);
	this->player.setBMloc(loc);

}

void MainGame::handlePressedKeys(std::map<SDL_Scancode, bool> input)
{
	for (std::map<SDL_Scancode, bool>::iterator it = input.begin(); it != input.end(); it++)
	{
		bool pressed = it->second;
		if (pressed)
		{
			this->handlePressedKey(it->first);
		}
	}
}

void MainGame::handlePressedKey(SDL_Scancode key)
{
	SDL_Keycode keyTest = SDL_GetKeyFromScancode(key);
	switch (keyTest)
	{
		case SDLK_ESCAPE: 
		{
			Vec2 loc = Vec2(20, 20);
			this->player.setBMloc(loc);
			;
		}
		default:
			break;
	}
}
