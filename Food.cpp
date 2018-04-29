#include "Food.h"
#include <iostream>

Food::Food() {
	Food_ID_Number = 0;
	Food_Name = new char[25];
	strcpy(Food_Name, "Not Provided");
	Preparation_time = 0;
	Calories = 0.0;
	Vegetarian = false;
	Origin_Country = new char[25];
	strcpy(Origin_Country, "Not Known");
	Cost = 0.0;
}
Food::Food(int f_ID_Number, char * f_Name, int p_time, float calori, bool veg, char * o_Country, float cost) {
	Food_ID_Number = f_ID_Number;
	Food_Name = new char[25];
	strcpy(Food_Name, f_Name);
	Preparation_time = p_time;
	Calories = calori;
	Vegetarian = veg;
	Origin_Country = new char[25];
	strcpy(Origin_Country, o_Country);
	Cost = cost;
}
Food::Food(const Food& food) {
	Food_ID_Number = food.Food_ID_Number;
	Food_Name = new char[25];
	strcpy(Food_Name, food.Food_Name);
	Preparation_time = food.Preparation_time;
	Calories = food.Calories;
	Vegetarian = food.Calories;
	Origin_Country = new char[25];
	strcpy(Origin_Country, food.Origin_Country);
	Cost = food.Cost;
}

void Food::operator = (Food food) {
	food.Food_ID_Number = 0;
	Food_ID_Number = food.Food_ID_Number;
	Food_Name = new char[25];
	strcpy(this->Food_Name, food.Food_Name);
	Preparation_time = food.Preparation_time;
	Calories = food.Calories;
	Vegetarian = food.Vegetarian;
	delete[] Origin_Country;
	Origin_Country = new char[25];
	strcpy(Origin_Country, food.Origin_Country);
	Cost = food.Cost;
}

/*
Food&Food::operator=(const Food& food) {
	delete[] Food_Name;
	Food_ID_Number =food.Food_ID_Number;
	Food_Name = new char[25];
	strcpy(Food_Name, food.Food_Name);
	Preparation_time = food.Preparation_time;
	Calories = food.Calories;
	Vegetarian = food.Vegetarian;
	delete[] Origin_Country;
	Origin_Country = new char[25];
	strcpy(Origin_Country, food.Origin_Country);
	Cost = food.Cost;
	//cout << "Food& operator=(const Food& food) has been called!" << endl;
	return *this;
}
*/
Food::~Food() {
	delete[] Food_Name;
	delete[] Origin_Country;
}

void Food::set_Food_ID_Number(int f_ID) {
	Food_ID_Number = f_ID;
}
void Food::set_Food_Name(char  *f_name) {
	strcpy(Food_Name, f_name);
}
void Food::set_Preparation_time(int p_time) {
	Preparation_time = p_time;
}
void Food::set_Calories(float calori) {
	Calories = calori;
}
void Food::set_Vegetarian(bool veg) {
	Vegetarian = veg;
}
void Food::set_Origin_Country(char* o_Country) {
	strcpy(Origin_Country,o_Country);
}
void Food::set_Cost(float cost) {
	Cost = cost;
}
char* Food::get_Food_Name() {
	return Food_Name;
}
int Food::get_Preparation_time() {
	return Preparation_time;
}
float Food::get_Calories() {
	return Calories;
}
bool Food::get_Vegetarian() {
	return Vegetarian;
}
char* Food::get_Origin_Country() {
	return Origin_Country;
}
float Food::get_Cost() {
	return Cost;
}
int Food::get_Food_ID_Number()
{
	return Food_ID_Number;
}
