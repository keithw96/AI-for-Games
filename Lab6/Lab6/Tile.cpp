#include "Tile.h"

Tile::Tile(int x, int y)
{
	m_position.x = x;
	m_position.y = y;
	m_isGoal = false;
	m_isBarrier = false;
	m_isStart = false;
}

void Tile::render(sf::RenderWindow & window)
{
	
	m_tile.setSize(sf::Vector2f(60, 60));
	m_tile.setOutlineColor(sf::Color::Black);

	if (m_isGoal)
	{
		m_tile.setFillColor(sf::Color::Red);
	}
	else if (m_isBarrier)
	{
		m_tile.setFillColor(sf::Color::Black);
	}
	else if (m_isStart)
	{
		m_tile.setFillColor(sf::Color::Green);
	}
	else
	{
		m_tile.setFillColor(sf::Color::Blue);
	}
	m_tile.setOutlineThickness(5);
	m_tile.setPosition(m_position);

	window.draw(m_tile);
}

void Tile::setGoal()
{
	m_isGoal = true;
}

void Tile::setBarrier()
{
	m_isBarrier = true;
}

void Tile::setStart()
{
	m_isStart = true;
}