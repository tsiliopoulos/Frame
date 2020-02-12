#pragma once
#ifndef __FRAME__
#define __FRAME__

#include <vector>
#include "DisplayObject.h"

class Frame
{
public:
	friend class ShipComponent;

	Frame(); // don't use
	Frame(int scale, int width, int height, 
		std::vector<ShipComponent>& buildLayout);
	~Frame();

	void initialize(DisplayObject* parent);

	std::vector<ShipComponent> getWeapons();

	// getters and setters
	DisplayObject* getParent();
	int getScale();
	int getWidth();
	int getHeight();


	
private:
	DisplayObject* m_parent{};
	int m_scale{}, m_width{}, m_height{};
	std::vector<ShipComponent> m_build;
};

#endif /* defined (__FRAME__)*/