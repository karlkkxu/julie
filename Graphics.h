#ifndef GRAPHICS_H
#define GRAPHICS_H

struct SDL_Window;
struct SDL_Renderer;

class Graphics {
public:
	Graphics(int width, int height);
	~Graphics();
private:
	SDL_Window* ikkuna;
	SDL_Renderer* renderer;
};

#endif