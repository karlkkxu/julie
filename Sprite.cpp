#include "Sprite.h"
#include "Graphics.h"

Sprite::Sprite()
{
}

Sprite::Sprite(Graphics& graphics, const std::string& filePath, int sourceX, int sourceY, int width, int height, float posX, float posY)
{
	this->x = posX;
	this->y = posY;
	this->sourceRect.x = sourceX;
	this->sourceRect.y = sourceY;
	this->sourceRect.w = width;
	this->sourceRect.h= height;

	try
	{
		this->spriteMap = SDL_CreateTextureFromSurface(graphics.getRenderer(), graphics.loadImage(filePath));
	}
	catch (...)
	{
		printf("error loading sprite file");
	}
}

Sprite::~Sprite()
{
}

void Sprite::update()
{
}

void Sprite::draw(Graphics& graphics, int x, int y)
{
	SDL_Rect destinationArea = { x, y, this->sourceRect.w, this->sourceRect.h };
	graphics.drawSurface(this->spriteMap, &this->sourceRect, &destinationArea);
}
