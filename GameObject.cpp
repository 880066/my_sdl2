#include "GameObject.h"
#include "TextureManager.h"

GameObject::GameObject(const char* texturesheet, SDL_Renderer* ren, int x, int y)
{
	renderer = ren;
	objTexture = TextureManager::LoadTexture(texturesheet, ren);

	xpos = x;
	ypos = y;


}

void GameObject::Update()
{
	xpos++;
	ypos++;
	
	srcRect.h = 400;
	srcRect.w = 400;  // kaynak assetden alýnacak dikdörtgensel bölgeyi ifade eder.   BU deðer SDL_RenderCopy e parametre olarak NULL þeklinde atanýrsa görselin orijinal halinin çerçevesi alýnýr.
	srcRect.x = 0;
	srcRect.y = 0;

	destRect.x = xpos;
	destRect.y = ypos;
	destRect.w = srcRect.w * 2;   // asseti belirli oranda büyütülmüþ þekilde ekrana çizdirilmek için kullanýlýr.
	destRect.h = srcRect.h * 2;
}

void GameObject::Render()
{
	SDL_RenderCopy(renderer, objTexture, NULL, &destRect);
}