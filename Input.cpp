#include "Input.h"

void Input::beginFrame()
{
	this->pressedKeys.clear();
	this->releasedKeys.clear();
}

void Input::keyUpEvent(SDL_Event& event)
{
	this->releasedKeys[event.key.keysym.scancode] = true;
	this->heldKeys[event.key.keysym.scancode] = false;
}

void Input::keyDownEvent(SDL_Event& event)
{
	this->pressedKeys[event.key.keysym.scancode] = true;
	this->heldKeys[event.key.keysym.scancode] = true;
}

bool Input::keyPressed(SDL_Scancode key)
{
	return pressedKeys[key];
}

bool Input::keyReleased(SDL_Scancode key)
{
	return releasedKeys[key];
}

bool Input::keyHeld(SDL_Scancode key)
{
	return heldKeys[key];
}
