#include "SDL.h"

int main(int argc, char *argv[]) {
	SDL_Init(SDL_INIT_EVERYTHING);
	SDL_Window *window = SDL_CreateWindow("My First SDL Window", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 600, 400, SDL_WINDOW_SHOWN); //Creates window
	SDL_Renderer *renderer = SDL_CreateRenderer(window, -1, 0); //Creates renderer and links it to window

	SDL_SetRenderDrawColor(renderer, 0, 255, 0, 255); //Draws a green screen through the renderer

	SDL_RenderClear(renderer);

	SDL_RenderPresent(renderer);

	SDL_Delay(10000); //Leaves window opened for 10 seconds (parameter is in millisecond - 1000ms = 1 sec)

	return 0;
}