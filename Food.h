#ifndef FOOD_H
#define FOOD_H
#include <iostream>
using std::cout;
using std::endl;
using namespace std;
class Food {
private:
	int Food_ID_Number;
	char *Food_Name;
	int Preparation_time;
	float Calories;
	bool Vegetarian;
	char *Origin_Country;
	float Cost;

public:
	Food();
	Food(int f_ID_Number, char * f_Name, int p_time, float calori, bool veg, char * o_Country, float cost);
	Food(const Food& food);
	void operator=(Food);
	//Food& operator=(const Food& food);
	~Food();
	void set_Food_ID_Number(int);
	void set_Food_Name(char*);
	void set_Preparation_time(int);
	void set_Calories(float);
	void set_Vegetarian(bool);
	void set_Origin_Country(char*);
	void set_Cost(float);
	int get_Food_ID_Number();
	char* get_Food_Name();
	int get_Preparation_time();
	float get_Calories();
	bool get_Vegetarian();
	char* get_Origin_Country();
	float get_Cost();
};
#endif