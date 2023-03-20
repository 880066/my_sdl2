#include "SDL.h"
#include "SDL_image.h"
#include <stdio.h>
#include <Windows.h>


int main(int argc, char* argv[]) {
   
    SDL_Init(SDL_INIT_VIDEO);  //Initialize the SDL library.

    SDL_Window *window = SDL_CreateWindow("Title", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 600, SDL_WINDOW_SHOWN); // SDL_WINDOW_SHOWN meaning is ignore this flag

    SDL_Renderer *renderer = SDL_CreateRenderer(window, -1, 0);  // arka plani window isimli pencere icin olusturuyoruz.

    SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255);  //arka plani kirmizi ayarladik. rgb ve alpha degeri. varsayilan olan siyahtir , deger atansa bile default olan temizlenmeli

    SDL_RenderClear(renderer);  // default arka plani temizledik

    SDL_RenderPresent(renderer);  // ayarlanmis arka plan verisini çizdirdik

    SDL_Delay(3000);  // 3 saniye boyunca ekranda kalsýn

    return 0;
}