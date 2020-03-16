#include "SDL.h"
#include "MainGame.h"
#include "Graphics.h"

MainGame::MainGame() {
	SDL_Init(SDL_INIT_EVERYTHING);
	Graphics graphics(1024, 768);
}

MainGame::~MainGame() {

}

void MainGame::play()
{
	SDL_Event event;

	while (true) {

	}
}

void MainGame::draw(Graphics& graphics)
{
}

void MainGame::update(float elapsedTime)
{
}
