#include "Dessert.h"
#include <iostream>
Dessert::Dessert() {
	dessert_type = new char[25];
	strcpy(dessert_type, "Not Provided");
	number_in_plate = 0;
}
Dessert::Dessert(char *d_type, int number) {
	dessert_type = new char[25];
	strcpy(dessert_type, d_type);
	number_in_plate = number;
}
void Dessert::setDessert_type(char* type) {
	strcpy(dessert_type,type);
}
void Dessert::setNumberofPlate(int numPlate) {
	number_in_plate = numPlate;
}
char* Dessert::getDessert_type() {
	return dessert_type;
}
int Dessert::getNumberofPlate() {
	return number_in_plate;
}
float calculate_Dessert_Cost(int number, float cost);