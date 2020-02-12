#include "Frame.h"
#include "ShipComponent.h"

Frame::Frame()
= default;

Frame::Frame(int scale, int width, int height, std::vector<ShipComponent>& buildLayout):
m_width(width), m_height(height), m_scale(scale), m_build(buildLayout)
{
	for (int z = 0; z < m_width; ++z)
	{
		for (int y = z; y < m_build.size(); y+= m_width)
		{
			m_build[y].setID(glm::vec2(z, (y - z) / m_width));
			m_build[y].setParent(this);
		}
	}

}

Frame::~Frame()
= default;

void Frame::initialize(DisplayObject* parent) 
{
	m_parent = parent;
}

std::vector<ShipComponent> Frame::getWeapons()
{
	return std::vector<ShipComponent>();
}

DisplayObject* Frame::getParent()
{
	return m_parent;
}

int Frame::getScale()
{
	return m_scale;
}

int Frame::getWidth()
{
	return m_width;
}

int Frame::getHeight()
{
	return m_height;
}
