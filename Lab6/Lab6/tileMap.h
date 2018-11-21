#pragma once
#include <vector>
#include "Tile.h"
class TileMap
{
public:

	TileMap();

	void initialise();

	void render(sf::RenderWindow & window);
	void setSpecialTiles();
	void setTileHeuristics();
private:
	std::vector<Tile> m_tileArray;
};