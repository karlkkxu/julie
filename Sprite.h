#ifndef SPRITE_H
#define SPRITE_H

#include "SDL.h"
#include "string"
#include "Globals.h"

class Graphics;

class Sprite
{
public:
	Sprite();
	Sprite(Graphics& graphics, const std::string& filePath, int sourceX, int sourceY, int width, int height,
		float posX, float posY);

	virtual ~Sprite();
	virtual void update();

	/* void draw
	* Draws the sprite onto the graphics renderer (defined earlier)
	* to the coordinates of x, y
	*/
	void draw(int x, int y);

	//Draws the sprite onto the graphics rendered (defined earlier) to the x, y of the Vec2
	void draw(Vec2 vector);

private:
	SDL_Rect sourceRect;
	SDL_Texture* spriteMap;

	Graphics* graphics;

	float x;
	float y;
};

#endif 