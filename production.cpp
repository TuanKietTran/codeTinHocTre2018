#include "production.h"



Production::Production(string name, int cost, int made_time, vector<Production> ingredient, int amount) {
	this->name = name;
	this->cost = cost;
	this->made_time = made_time;
	this->ingredient = ingredient;
	this->amount = amount;
}

void Production::addIngredients(Production & param) {
	ingredient.push_back(param);
}
