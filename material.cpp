/*#include <iostream>
#include <string>
#include <vector>

using namespace std;
int land[10];
enum status {
	processing,
	done
};

struct Production {
	string name;
	int cost;
	int made_time;
	int amount;
	vector<Production> ingredient;
	void init(string name, int cost, int made_time, int amount = 0) {
		this->name = name;
		this->cost = cost;
		this->made_time = made_time;
		this->amount = amount;
	}
	void addIngredients(Production& param) {
		ingredient.push_back(param);
	}
};



class Structure {
private:
	string name;
	int id;
	int cost;
	int built_time;
	status built_stat, make_stat;
	vector<Production> product;
public:
	Structure(string name, int id, int cost, int built_time, vector<Production> product) {
		this->name = name;
		this->id = id;
		this->cost = cost;
		this->built_time = built_time;
		this->product = product;
	}
	void build() {
		int time = built_time;
		while (time > 0) { 
			--time; 
			built_stat = processing;
		}
		built_stat = done;
	}
	void check_ingredient(Production item) {
		if (sizeof(item.ingredient) == 0) {
			produce(item);
		}
		else {

		}
	}
	void produce(Production item) {
		int time = item.made_time;
		while (time > 0) {
			--time;
			make_stat = processing;
			
		}
		make_stat = done;
		++item.amount;
	}
};

void initialize() {//sản phẩm trước, công trình sau

	Production chuoi;			chuoi.init("chuoi", 1, 1);
	Production gao;				gao.init("gao", 1, 1);
	Production banh_chuoi;		banh_chuoi.init("banh chuoi", 10, 8);
								banh_chuoi.addIngredients(chuoi);
								banh_chuoi.addIngredients(gao);

	Production allPro[] = { gao, chuoi, banh_chuoi };

	Structure vuon("vuon", 1, 1000, 20, { chuoi,gao });
	Structure bakery("cua_hang_banh", 1, 2000, 40, { banh_chuoi });

	Structure allStruc[] = { vuon,bakery };

}
void delivery() {

}
void process() {

}

int main() {
	initialize();

	return 0;
}*/
