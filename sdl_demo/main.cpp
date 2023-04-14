#include <SDL2/SDL.h>
#include <SDL2/SDL_render.h>
#include <SDL2/SDL_timer.h>
#include <SDL2/SDL_video.h>

#include <iostream>

SDL_Window* window = 0;
SDL_Renderer* renderer = 0;

int main() {
	// Init every subsystems..
	if (SDL_Init(SDL_INIT_EVERYTHING) < 0) {
		return 0;
	}
	
	// Create window
	window = SDL_CreateWindow("Test",
			SDL_WINDOWPOS_CENTERED,
			SDL_WINDOWPOS_CENTERED,
			800,
			600,
			SDL_WINDOW_SHOWN);

	if (window == 0) {
		std::cout << "Error creating window!\n";
		return 1;
	}

	// Create the renderer
	renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
	if (renderer == 0) {
		std::cout << "Error creating the renderer!\n";
		return 1;
	}

	int blue = (int) rand() * 100;
	int red = (int) rand() * 100;
	int green = (int) rand() * 100;
	for (int i = 0; i <= 255; i++) {
		SDL_SetRenderDrawColor(renderer, red, green, blue, 255);
		SDL_RenderClear(renderer);
		SDL_RenderPresent(renderer);
		SDL_Delay(400);
		blue += 1; red += 1; green += 1;
	}
	SDL_Quit();
	SDL_DestroyWindow(window);
	SDL_DestroyRenderer(renderer);
}
