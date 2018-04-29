#ifndef DESSERT_H
#define DESSERT_H
#include <iostream>
using namespace std;
using std::cout;
using std::endl;
#include "Food.h"
class Dessert : public Food {
private:
	char * dessert_type;
	int number_in_plate;
public:
	Dessert();
	Dessert(char *d_type, int number);
	void setDessert_type(char*);
	void setNumberofPlate(int);
	char* getDessert_type();
	int getNumberofPlate();
	float calculate_Dessert_Cost(int number,float cost);
};
#endif#
