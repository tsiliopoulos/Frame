#pragma once
#ifndef __Ship__
#define __Ship__

#include <vector>

#include "TextureManager.h"
#include "SoundManager.h"
#include "Tile.h"
#include "Scene.h"
#include "PathFindingDisplayObject.h"

#include "Frame.h"

class Ship : public PathFindingDisplayObject
{
public:
	Ship();
	~Ship();

	// Inherited via GameObject
	void draw() override;

	void update() override;

	void clean() override;

	void turnRight();
	void turnLeft();
	void move();

	glm::vec2 getTarget();
	void setTarget(glm::vec2 position);
private:


	void m_checkState();
	void m_checkBounds();

	void m_reset();

	// steering behaviours
	void m_seek();
	float m_maxSpeed;
	double m_currentDirection;
	float m_turnSpeed;
	float m_steerForce;
	glm::vec2 m_target;

	Frame m_frame;
};


#endif /* defined (__Ship__) */

