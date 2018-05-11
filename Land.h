#pragma once
#include "structure.h"

class Land
{
public:
	Structure building;

	Land(Structure building);
	Structure getStructure();

};

