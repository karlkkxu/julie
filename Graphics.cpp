#include "SDL.h"
#include "SDL_image.h"

#include "Graphics.h"



Graphics::Graphics(int width, int height)
{
	SDL_CreateWindowAndRenderer(width, height, 0, &this->window, &this->renderer);
	SDL_SetWindowTitle(this->window, "Julie");
}

Graphics::~Graphics()
{
	SDL_DestroyWindow(this->window);
}

SDL_Surface* Graphics::loadImage(const std::string& filePath)
{
	//checking for duplicates, if unique, it is added
	if (this->spriteMap.count(filePath) == 0) {
		this->spriteMap[filePath] = IMG_Load(filePath.c_str());
	}
	return this->spriteMap[filePath];
}

void Graphics::drawSurface(SDL_Texture* texture, SDL_Rect* sourceArea, SDL_Rect* destinationArea)
{
	SDL_RenderCopy(this->renderer, texture, sourceArea, destinationArea);
}

void Graphics::flip()
{
	SDL_RenderPresent(this->renderer);
}

void Graphics::clear()
{
	SDL_RenderClear(this->renderer);
}

SDL_Renderer* Graphics::getRenderer() const
{
	return this->renderer;
}

 