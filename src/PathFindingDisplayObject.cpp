#include "PathFindingDisplayObject.h"

PathFindingDisplayObject::PathFindingDisplayObject()
{
}

PathFindingDisplayObject::~PathFindingDisplayObject()
{
}


Tile* PathFindingDisplayObject::getTile()
{
	return m_currentTile;
}

void PathFindingDisplayObject::setTile(Tile* newTile)
{
	m_currentTile = newTile;
}
