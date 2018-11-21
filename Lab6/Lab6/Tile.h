#pragma once
#include <SFML/Graphics.hpp>

class Tile
{
public:
	Tile(int x, int y);

	void render(sf::RenderWindow & window);
	void setGoal();
	void setBarrier();
	void setStart();
private:
	sf::Vector2f m_position;
	sf::RectangleShape m_tile;
	bool m_isGoal;
	bool m_isBarrier;
	bool m_isStart;
};