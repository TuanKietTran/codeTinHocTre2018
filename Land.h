#pragma once
#include "structure.h"

class Land
{
private:
	Structure building;
public:
	Land(Structure building);
	Structure getStructure();

};

