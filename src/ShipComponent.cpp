#include "ShipComponent.h"

ShipComponent::ShipComponent():m_id(glm::vec2(-1, -1))
{
	
}

ShipComponent::~ShipComponent()
= default;

glm::vec2 ShipComponent::getPosition()
{
	return glm::vec2();
}

void ShipComponent::setID(glm::vec2 id)
{
	if(m_id.x == -1 && m_id.y == -1)
	{
		m_id = id;
	}
}

void ShipComponent::setParent(Frame* frame)
{
	m_parent = frame;
}
