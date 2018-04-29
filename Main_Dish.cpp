#include "Main_Dish.h"
#include <iostream>

Main_Dish::Main_Dish() {
	Main_dish_type = new char[25];
	strcpy(Main_dish_type, "Not Provided");
	portion_size = 0.0;
}
Main_Dish::Main_Dish(char *dishtype, float portion) {
	Main_dish_type = new char[25];
	strcpy(Main_dish_type, dishtype);
	portion_size = portion;
}
void Main_Dish::setMain_dish_type(char* dish_type) {
	strcpy(Main_dish_type,dish_type);
}
void Main_Dish::setPortion_size(float portion) {
	portion_size = portion;
}
char* Main_Dish::getMain_dish_size() {
	return Main_dish_type;
}
float Main_Dish::getPortion_size() {
	return portion_size;
}