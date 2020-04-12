#include "Sprite.h"
#include "Graphics.h"
#include "Globals.h"

//Only for the meme
#include "iostream"

Sprite::Sprite()
{
	std::cout << "Nyt vittu Otto";	
	delete this;
}

Sprite::Sprite(Graphics& graphics, const std::string& filePath, int sourceX, int sourceY, int width, int height, float posX, float posY)
{
	this->x = posX;
	this->y = posY;
	this->sourceRect.x = sourceX;
	this->sourceRect.y = sourceY;
	this->sourceRect.w = width;
	this->sourceRect.h= height;

	this->graphics = &graphics;

	try
	{
		this->spriteMap = SDL_CreateTextureFromSurface(graphics.getRenderer(), graphics.loadImage(filePath));
	}
	catch (...)
	{
		printf("error loading sprite file");
	}
}

Sprite::Sprite(Graphics& graphics, const std::string& filePath, int sourceX, int sourceY, int width, int height)
{
	//should not be needed when using this constructor
	this->x = 0;
	this->y = 0;

	this->sourceRect.x = sourceX;
	this->sourceRect.y = sourceY;
	this->sourceRect.w = width;
	this->sourceRect.h = height;

	this->graphics = &graphics;

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

void Sprite::draw(int x, int y)
{
	SDL_Rect destinationArea = { x, y, this->sourceRect.w, this->sourceRect.h };
	this->graphics->drawSurface(this->spriteMap, &this->sourceRect, &destinationArea);
}

void Sprite::draw(Vec2 vector)
{
	SDL_Rect destinationArea = { vector.getX(), vector.getY(), this->sourceRect.w, this->sourceRect.h };
	this->graphics->drawSurface(this->spriteMap, &this->sourceRect, &destinationArea);
}

void Sprite::drawIP()
{
	SDL_Rect destinationArea = { this->x, this->y, this->sourceRect.w, this->sourceRect.h };
	this->graphics->drawSurface(this->spriteMap, &this->sourceRect, &destinationArea);
}
