#include "Graphics.h"
#include "SDL.h"


Graphics::Graphics(int width, int height)
{
	SDL_CreateWindowAndRenderer(width, height, 0, &this->ikkuna, &this->renderer);
	SDL_SetWindowTitle(this->ikkuna, "Julie");

}

Graphics::~Graphics()
{
	SDL_DestroyWindow(this->ikkuna);
}

 