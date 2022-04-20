#include <iostream>
#include <cstdlib>
#include "Header.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "rus");
	Property* massive[7] = { new Apartment(2000000), new Apartment(3000000), new Apartment(4000000), new Car(340000), new Car(500000), new CountryHouse(1000000),
	new CountryHouse(1500000)};

	int generalTax = 0;

	for (int i = 0; i < 7; ++i) {
		generalTax += massive[i]->tax();
		delete massive[i];
	}

	cout << "Общий налог: " << generalTax;

}