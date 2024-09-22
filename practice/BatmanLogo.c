#include <stdio.h>
#include <SDL2/SDL.h>


int main() {
    SDL_Init(SDL_INIT_VIDEO);
    
    SDL_Window* window = SDL_CreateWindow("Batman Logo", 
        SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 600, 0);
    
    SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, 0);
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255); // Set background color to white
    SDL_RenderClear(renderer);
    
    // Set color to black for the logo
    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
    // You can now draw shapes like rectangles, circles, lines, etc.
    
    // Present the renderer (apply the drawing)
    SDL_RenderPresent(renderer);
    
    SDL_Delay(5000); // Delay to keep the window open for 5 seconds
    
    SDL_DestroyWindow(window);
    SDL_Quit();
    
    return 0;
}
