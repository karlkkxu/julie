#ifndef GRAPHICS_H
#define GRAPHICS_H

#include "string"
#include "map"

struct SDL_Window;
struct SDL_Renderer;

class Graphics {
public:

	// Constructor and destructor, pixel size of the window
	Graphics(int width, int height);
	~Graphics();

	/*
	* Loads the image into the spriteMap
	*/
	SDL_Surface* loadImage(const std::string& filePath);

	/*
	* Draws the specified texture to the renderer
	* Source, where the texture is from; sourceArea, which part of the file we take the texture from; destinationArea, where on the screen it is drawn
	*/
	void drawSurface(SDL_Texture* texture, SDL_Rect* sourceArea, SDL_Rect* destinationArea);

	/*
	* Takes from the renderer and draws to the screen
	*/
	void flip();

	/*
	* Clears the renderer
	*/
	void clear();

	// Returns the renderer
	SDL_Renderer* getRenderer() const;

private:
	SDL_Window* window;
	SDL_Renderer* renderer;
	std::map<std::string, SDL_Surface*> spriteMap;
};

#endif