#include "production.h"



void Production::init(string name, int cost, int made_time, int amount) {
	this->name = name;
	this->cost = cost;
	this->made_time = made_time;
	this->amount = amount;
}

void Production::addIngredients(Production & param) {
	ingredient.push_back(param);
}
