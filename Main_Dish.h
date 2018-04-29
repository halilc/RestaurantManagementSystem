#ifndef MAIN_DISH_H
#define MAIN_DISH_H
#include <iostream>
using namespace std;
using std::cout;
using std::endl;
#include "Food.h"
class Main_Dish : public Food{
private:
	char * Main_dish_type;
	float portion_size;
public:
	Main_Dish();
	Main_Dish(char *dishtype, float portion);
	void setMain_dish_type(char*);
	void setPortion_size(float);
	char* getMain_dish_size();
	float getPortion_size();

};
#endif