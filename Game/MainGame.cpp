#include "MainGame.h"
MainGame::MainGame()
{
	window = nullptr;
	_screenWidth = 1024;
	_screenHeight = 720;
	_gameState = GameState::Play;
}


MainGame::~MainGame()
{


}

void MainGame::run()
{
	initSystems();
	gameLoop();
}

void MainGame::gameLoop()
{
	while(_gameState != GameState::Exit)
	{
		processInput();
	}
}

void MainGame::processInput()
{
	SDL_Event evnt;
	SDL_PollEvent


}

void MainGame::initSystems()
{
	SDL_Init(SDL_INIT_EVERYTHING);
	window = SDL_CreateWindow("Legend of Zelda", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, _screenWidth, _screenHeight, SDL_WINDOW_OPENGL);
}