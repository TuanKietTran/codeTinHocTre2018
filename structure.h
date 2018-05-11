#pragma once
#include "production.h"



class Structure {
private:
	string name;
	int id;
	int cost;
	int built_time;
	status built_stat, make_stat;
	vector<Production> product;
	
public:
	Structure() {
		this->name = "";
		this->id = 0;
		this->cost = 0;
		this->built_time = 0;
		this->product = {};
	}

	Structure(string name, int id, int cost, int built_time,vector<Production> product);

	int data;
	Structure * next;

	string getName();
	int getTime();

	vector<Production> getProduct() {
		return this->product;
	}
	void build();
	void check_ingredient(Production item) {
		if (sizeof(item.ingredient) == 0) {
			produce(item);
		}
		else {
			for (auto i : item.ingredient) {
				if (i.amount) --i.amount;
				else {
					check_ingredient(i);
					produce(i);
					check_ingredient(item);
				}
			}
			produce(item);
		}
	}
	void produce(Production item) {
		int time = item.made_time;
		if (time > 0) {
			--time;
			make_stat = processing;

		}
		else {
			make_stat = done;
			++item.amount;
		}
	}

	
};