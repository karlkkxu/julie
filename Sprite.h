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
	/* Sprite constructor
	* attaches the new sprite to the graphics class, takes in the filepath and coords of the sprite texture,
	* determines the location of the sprite on the screen
	*/
	Sprite(Graphics& graphics, const std::string& filePath, int sourceX, int sourceY, int width, int height,
		float posX, float posY);

	/* Sprite constructor
	* attaches the new sprite to the graphics class, takes in the filepath and coords of the sprite texture,
	* does not determine the location of the sprite on the screen
	*/
	Sprite(Graphics& graphics, const std::string& filePath, int sourceX, int sourceY, int width, int height);

	virtual ~Sprite();
	virtual void update();

	/* void draw
	* Draws the sprite onto the graphics renderer (defined earlier)
	* to the coordinates of x, y
	*/
	void draw(int x, int y);

	//Draws the sprite onto the graphics renderer (defined earlier) to the x, y of the Vec2
	void draw(Vec2 vector);

	//Draws the sprite IN PLACE onto the graphics renderer to its own x, y coords
	void drawIP();

private:
	SDL_Rect sourceRect;
	SDL_Texture* spriteMap;

	Graphics* graphics;

	float x;
	float y;
};

#endif 