#include "SDL.h"
#include "MainGame.h"
#include "Graphics.h"
#include "Input.h"

MainGame::MainGame() {
	SDL_Init(SDL_INIT_EVERYTHING);
}

MainGame::~MainGame() {

}

void MainGame::play()
{
	SDL_Event event;
	Graphics graphics(1024, 768);
	Input input;

	while (true) {
		input.beginFrame();
		
		if (SDL_PollEvent(&event)) {

			if (event.type == SDL_KEYDOWN && event.key.repeat == 0)
				input.keyDownEvent(event);

			else if (event.type == SDL_KEYUP)
				input.keyUpEvent(event);

			if (input.keyPressed(SDL_SCANCODE_ESCAPE))
				return;

		}

	}
}

void MainGame::draw(Graphics& graphics)
{
}

void MainGame::update(float elapsedTime)
{
}
