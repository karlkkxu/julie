#ifndef INPUT_H
#define INPUT_H

#include "map"
#include "SDL.h"
#include "Unit.h"


class Input {
public:

	//Clears the maps of pressed or released keys, which are not relevant
	void beginFrame();

	//Registers the changes to held and released keymaps
	void keyUpEvent(SDL_Event &event);

	//Registers the changes to held and pressed keymaps
	void keyDownEvent(SDL_Event &event);

	//Registers the changes to pressed mouse keymaps
	void mouseDownEvent(SDL_Event event);

	//Returns bool, is key key pressed
	bool keyPressed(SDL_Scancode key);
	//Returns bool, is key released
	bool keyReleased(SDL_Scancode key);
	//Returns bool, is key held
	bool keyHeld(SDL_Scancode key);
	
	//Getters

	std::map<SDL_Scancode, bool> getHeldKeysMAP();
	std::map<SDL_Scancode, bool> getPressedKeysMAP();
	std::map<SDL_Scancode, bool> getReleasedKeysMAP();
	SDL_MouseButtonEvent* getMouseEvent();

private:

	//Map relating a scancode(key on keyboard) to a truth value, is the specified key currently held down
	std::map<SDL_Scancode, bool> heldKeys;
	//Map relating a scancode(key on keyboard) to a truth value, is the specified key just pressed down
	std::map<SDL_Scancode, bool> pressedKeys;
	//Map relating a scancode(key on keyboard) to a truth value, is the specified key just released
	std::map<SDL_Scancode, bool> releasedKeys;

	SDL_MouseButtonEvent mouseEvent;
	SDL_MouseButtonEvent* mouseEventPTR;

};

#endif // !INPUT_H
