#pragma once
#ifndef __SHIP_COMPONENT__
#define __SHIP_COMPONENT__

#include "glm/vec2.hpp"
#include "Frame.h"

class ShipComponent
{
public:
	ShipComponent();
	virtual ~ShipComponent();

	glm::vec2 getPosition();
	
	void setID(glm::vec2 id);
	void setParent(Frame* frame);
private:
	glm::vec2 m_id;

	Frame* m_parent;
};

#endif /* defined (__SHIP_COMPONENT__) */