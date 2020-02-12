#pragma once
#ifndef __PATH_FINDING_DISPLAY_OBJECT__
#define __PATH_FINDING_DISPLAY_OBJECT__

#include "DisplayObject.h"

class PathFindingDisplayObject : public DisplayObject
{
public:
	friend class Tile;
	PathFindingDisplayObject();
	virtual ~PathFindingDisplayObject();
	
	void draw() override = 0;
	void update() override = 0;
	void clean() override = 0;

	// pathfinding behaviours
	Tile* getTile();
	void setTile(Tile* newTile);
	
private:
	Tile* m_currentTile;
};

#endif /* defined (__PATH_FINDING_DISPLAY_OBJECT__)*/