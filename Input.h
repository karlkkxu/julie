#ifndef INPUT_H
#define INPUT_H

#include "map"
#include "SDL.h"

class Input {
public:
	void beginFrame();
	void keyUpEvent(SDL_Event &event);
	void keyDownEvent(SDL_Event &event);

	bool keyPressed(SDL_Scancode key);
	bool keyReleased(SDL_Scancode key);
	bool keyHeld(SDL_Scancode key);

private:
	std::map<SDL_Scancode, bool> heldKeys;
	std::map<SDL_Scancode, bool> pressedKeys;
	std::map<SDL_Scancode, bool> releasedKeys;

};

#endif // !INPUT_H
