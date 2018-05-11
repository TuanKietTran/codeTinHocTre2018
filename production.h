#pragma once
#include <string>
#include <vector>


using namespace std;

enum status {
	processing,
	done
};

class Production {
public:
	string name;
	int cost;
	int made_time;
	int amount;
	vector<Production> ingredient;

	int data;
	Production *next;

	void init(string name, int cost, int made_time, int amount = 0);
	void addIngredients(Production& param);

};
