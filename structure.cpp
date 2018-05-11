#include "structure.h"


Structure::Structure(string name, int id, int cost, int built_time, vector<Production> product) {
	this->name = name;
	this->id = id;
	this->cost = cost;
	this->built_time = built_time;
	this->product = product;
}

string Structure::getName() {
	return this->name;
}

inline int Structure::getTime() {
	return this->built_time;
}

void Structure::build() {
	int time = built_time;
	
	while (time > 0) {
		--time;
		built_stat = processing;
	}
	built_stat = done;
}
