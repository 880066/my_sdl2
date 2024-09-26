#include "GameObject.h"
#include "TextureManager.h"

GameObject::GameObject(const char* texturesheet, int x, int y)
{
	objTexture = TextureManager::LoadTexture(texturesheet);

	xpos = x;
	ypos = y;


}

void GameObject::Update()
{
	xpos++;
	ypos++;
	
	srcRect.h = 100;
	srcRect.w = 100;  // kaynak assetden al�nacak dikd�rtgensel b�lgeyi ifade eder.   BU de�er SDL_RenderCopy e parametre olarak NULL �eklinde atan�rsa g�rselin orijinal halinin �er�evesi al�n�r.
	srcRect.x = 0;
	srcRect.y = 0;

	destRect.x = xpos;
	destRect.y = ypos;
	destRect.w = srcRect.w * 2;   // asseti belirli oranda b�y�t�lm�� �ekilde ekrana �izdirilmek i�in kullan�l�r.
	destRect.h = srcRect.h * 2;
}

void GameObject::Render()
{
	SDL_RenderCopy(Game::renderer, objTexture, NULL, &destRect);
}