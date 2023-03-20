#include "SDL.h"
#include "SDL_image.h"
#include <stdio.h>
#include <Windows.h>


int main(int argc, char* argv[]) {
   
    SDL_Init(SDL_INIT_VIDEO);  //Initialize the SDL library.

    SDL_Window *window = SDL_CreateWindow("Title", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 600, SDL_WINDOW_SHOWN); // SDL_WINDOW_SHOWN meaning is ignore this flag

    SDL_Renderer *renderer = SDL_CreateRenderer(window, -1, 0);  // arka planý window isimli pencere için oluþturuyoruz.

    //SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255);  //arka planý kýrmýzý ayarladýk. rgb ve alpha deðeri. varsayýlan olan siyahtýr , deðer atansa bile default olan temizlenmeli

    //SDL_RenderClear(renderer);  // default arka planý temizledik

    //SDL_RenderPresent(renderer);  // ayarlanmýþ arka plan verisini çizdirdik

    SDL_Delay(3000);  // 3 saniye boyunca ekranda kalsýn

    return 0;
}