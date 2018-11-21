#include "Game.h"

Game::Game(): 
	m_window(sf::VideoMode(900,900), "Lab 6")
{
	m_tileMap.initialise();
}


void Game::run()
{
	while (m_window.isOpen())
	{
		update();
		render();
	}
}

void Game::render()
{
	m_tileMap.render(m_window);

	m_window.display();
}

void Game::update()
{

}