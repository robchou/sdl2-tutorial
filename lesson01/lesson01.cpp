#include <SDL2/SDL.h>
#include <iostream>

const int kScreenWidth = 640;
const int kScreenHeight = 640;

int main(int argc, char *argv[])
{
  SDL_Window* window = NULL;
  SDL_Surface* surface = NULL;

  // Init
  if (SDL_Init(SDL_INIT_VIDEO) < 0) {
    std::cout << "error: SDL_Init failed, " << SDL_GetError() << '\n';
    return -1;
  }

  // Create Window
  window = SDL_CreateWindow("SDL Tutorial", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, kScreenWidth, kScreenHeight, SDL_WINDOW_SHOWN);

  if (window == NULL) {
    std::cout << "error: SDL_CreateWindow failed, " << SDL_GetError() << '\n';
    return -2;
  }

  // Draw Surface
  surface = SDL_GetWindowSurface(window);
  SDL_FillRect(surface, NULL, SDL_MapRGB(surface->format, 0xFF, 0xFF, 0xFF));
  SDL_UpdateWindowSurface(window);
  SDL_Delay(2 * 1000);

  SDL_DestroyWindow(window);
  SDL_Quit();

  return 0;
}
