#pragma once
#ifndef __BLANK__
#define __BLANK__

#include "ShipComponent.h"

class Blank : public ShipComponent
{
public:
	Blank();
	~Blank();
private:
	bool m_value;
};
#endif
