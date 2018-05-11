#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include "LinkedList.h"

#include "production.h"
#include "structure.h"
#include "Land.h"

using namespace std;

const string CHUOI = "chuoi";
const string GAO = "gao";
string BANH_CHUOI = "banh chuoi";

const string inputPath = "cargo.txt";

int money = 5000;

LinkedList<Production> P;
Production* chuoi = new Production(CHUOI, 1, 1);
Production* gao = new Production(GAO, 1, 1);
Production* banh_chuoi = new Production(BANH_CHUOI, 10, 8, { *chuoi, *gao });
Production allProduct[] = { *chuoi, *gao, *banh_chuoi };

LinkedList<Structure> S;
Structure* vuon = new Structure("vuon", 1, 1000, 20, { *chuoi, *gao });
Structure* bakery = new Structure("bakery", 1, 1000, 20, { *banh_chuoi });

void initialize() {//sản phẩm trước, công trình sau

	

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
	int deposit;
	vector<string> product;
	vector<int> amount;
	
	ifstream fileInp(inputPath);
	
	fileInp >> deposit;
	while (!fileInp.eof()) {
		string temp;
		int i;
		fileInp >> temp;
		fileInp >> i;
		product.push_back(temp);
		amount.push_back(i);
	}
	fileInp.close();
	for (auto i : allProduct)
		for (unsigned int k = 0; k < product.size(); k++)
			if (product.at(k) == i.name) P.addAtEnd(chuoi);

}

//template <class Item>
//void selectionSort(vector<Item> a, int n) {
//	for (int i = 0; i < n - 1; i++) {
//		int min = i;
//		for (int j = i + 1; j < n; j++) {
//			if (a[j] < a[min])
//				min = j;
//			swap(a[i], a[min]);
//		}
//	}
//}
//
//template <class Object>
//void swap(Object &el1, Object &el2) {
//	Object temp = el1;
//	el1 = el2;
//	el2 = temp;
//}

void process() {
	
	
}


int main() {
	initialize();
	cargos();
	


	return 0;
}