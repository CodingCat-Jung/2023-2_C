#include <iostream>
using namespace std;

#include "Item.h"

int main() {
	cout << "Date : 2023/10/5, Name : Á¤¸íÈÆ, Stu_no : 20204026\n\n";

	Item Fruit("Apple", 5800);
	Item Drink = Fruit;

	Drink.set("Juice", 3900);

	Fruit.show();
	cout << endl;
	Drink.show();

	return 0;
}