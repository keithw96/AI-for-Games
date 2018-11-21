#include "tileMap.h"

TileMap::TileMap()
{

}

void TileMap::initialise()
{
	for (int i = 0; i < 15; i++)
	{
		for (int j = 0; j < 15; j++)
		{
			m_tileArray.push_back(Tile(i * 60, j * 60));
		}
	}

	setSpecialTiles();
}

void TileMap::render(sf::RenderWindow & window)
{
	for (int i = 0; i < m_tileArray.size(); i++)
	{
		m_tileArray[i].render(window);
	}
}

void TileMap::setSpecialTiles()
{
	m_tileArray[16].setStart();
	m_tileArray[40].setBarrier();
	m_tileArray[41].setBarrier();
	m_tileArray[42].setBarrier();
	m_tileArray[130].setBarrier();
	m_tileArray[145].setBarrier();
	m_tileArray[146].setBarrier();
	m_tileArray[160].setBarrier();
	m_tileArray[161].setBarrier();
	m_tileArray[162].setBarrier();
	m_tileArray[178].setGoal();
}

void TileMap::setTileHeuristics()
{

}