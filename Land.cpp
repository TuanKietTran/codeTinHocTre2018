#include "Land.h"

Land::Land(Structure building)
{
	this->building = building;
}

Structure Land::getStructure() {
	return this->building;
}

