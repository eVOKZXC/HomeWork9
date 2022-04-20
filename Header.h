#ifndef Header
#define Header

class Property {
protected:
	int worth;
public:

	Property(int propertyWorth) {
		worth = propertyWorth;
	}

	virtual int tax() { return 0; };
};

class Apartment : public Property {
public:
	Apartment(int apartmentWorth):Property(apartmentWorth){}
	int tax() {
		return 0.0001 * worth;
	}
};

class Car : public Property {
public:
	Car(int carWorth):Property(carWorth) {}
	int tax() {
		return 0.002 * worth;
	}
};

class CountryHouse : public Property {
public:
	CountryHouse(int countryHouseWorth):Property(countryHouseWorth) {}
	int tax() {
		return 0.005 * worth;
	}
};

#endif Header


