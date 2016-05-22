#include <Windows.h>;
#include <SDL\SDL.h>;
#include <GL\glew.h>;
#include "MainGame.h";
#include <iostream>;
int main(int argc, char** argv) 
{
	MainGame Game;
	Game.run();
	std::cout << "Test";
	int a;
	std::cin >> a;
	return 0;
}