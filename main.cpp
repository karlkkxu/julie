#define SDL_MAIN_HANDLED
#include <SDL.h>
#include "MainGame.h"

int main(int argc, char* argv[]) {

	MainGame mainGame;
	mainGame.play();

	return 0;
}