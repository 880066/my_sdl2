#ifndef Game_h
#define Game_h

#include "SDL.h"
#include "SDL_image.h"
#include <iostream>

class Game {

private:
	int cnt = 0;
	bool isRunning;
	SDL_Window *window;

public:
	Game();
	~Game();

	void init(const char* title, int xpos, int ypos, int width, int height, bool fullscreen);
	
	void handleEvents();
	void update();
	void render();
	void clean();

	bool running()
	{
		return isRunning;
	}

	static SDL_Renderer* renderer;

};

#endif
