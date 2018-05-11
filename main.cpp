#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "LinkedList.h"

#include "production.h"
#include "structure.h"
#include "Land.h"

using namespace std;


#define MONEY 5000
const string inputPath = "cargo.txt";

void initialize() {//sản phẩm trước, công trình sau

	int money = MONEY;
	Production chuoi;			chuoi.init("chuoi", 1, 1);
	Production gao;				gao.init("gao", 1, 1);
	Production banh_chuoi;		banh_chuoi.init("banh chuoi", 10, 8);
								banh_chuoi.addIngredients(chuoi);
								banh_chuoi.addIngredients(gao);

	Production allPro[] = { gao, chuoi, banh_chuoi };

	Structure vuon("vuon", 1, 1000, 20, { chuoi,gao });
	Structure bakery("cua hang banh", 1, 2000, 40, { banh_chuoi });

	static Structure allStruct[] = { vuon, bakery };

}
bool check_building(Land ld, Production item) {
	bool temp;
	for (auto i : ld.getStructure().getProduct()){
		if (item.name == i.name) {
			temp =  true;
		}
		else temp = false;
	}
	return temp;
}
void cargos() {
	ifstream fileInp(inputPath);



	fileInp.close();
}

template <class Item>
void selectionSort(vector<Item> a, int n) {
	for (int i = 0; i < n - 1; i++) {
		int min = i;
		for (int j = i + 1; j < n; j++) {
			if (a[j] < a[min])
				min = j;
			swap(a[i], a[min]);
		}
	}
}

template <class Object>
void swap(Object &el1, Object &el2) {
	Object temp = el1;
	el1 = el2;
	el2 = temp;
}

void process() {
	
	
}


int main() {
	initialize();

	return 0;
}