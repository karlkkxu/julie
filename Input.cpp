#include "Input.h"

void Input::beginFrame()
{
	this->pressedKeys.clear();
	this->releasedKeys.clear();
	this->mouseEventPTR = NULL;
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

void Input::mouseDownEvent(SDL_Event event)
{
	this->mouseEvent = event.button;
	this->mouseEventPTR = &this->mouseEvent;
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

std::map<SDL_Scancode, bool> Input::getHeldKeysMAP()
{
	return this->heldKeys;
}

std::map<SDL_Scancode, bool> Input::getPressedKeysMAP()
{
	return this->pressedKeys;
}

std::map<SDL_Scancode, bool> Input::getReleasedKeysMAP()
{
	return this->releasedKeys;
}

SDL_MouseButtonEvent* Input::getMouseEvent()
{
	return this->mouseEventPTR;
}
