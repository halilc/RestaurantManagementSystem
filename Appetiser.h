#ifndef APPETISER_H
#define APPETISER_H
#include <iostream>
using namespace std;
using std::cout;
using std::endl;
#include "Food.h"
class Appetiser : public Food {
private:
	char * Appetiser_type;
	int promotion_Code;
public:
	Appetiser();
	Appetiser(char *appType, int promotion);
	void setAppetiser_type(char*);
	void setPromotion_code(int);
	char* getAppetiser_type();
	int getPromotion_Code();

	float calculatePromotion(int p_code, float cost);

};
#endif