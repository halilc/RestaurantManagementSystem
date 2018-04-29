#include "Appetiser.h"
#include <iostream>
using namespace std;
	Appetiser::Appetiser() {
		Appetiser_type = new char[25];
		strcpy(Appetiser_type, "Not Provided");
		promotion_Code = 0;
		//cout << "Appetiser() has been called!" << endl;
	}
	Appetiser::Appetiser(char *appType, int promotion) {
		Appetiser_type = new char[25];
		strcpy(Appetiser_type, appType);
		promotion_Code = promotion;
	}
	void Appetiser::setAppetiser_type(char* type) {
		strcpy(Appetiser_type, type);
	}
	void Appetiser::setPromotion_code(int pro_code) {
		promotion_Code = pro_code;
	}
	char* Appetiser::getAppetiser_type() {
		return Appetiser_type;
	}
	int Appetiser::getPromotion_Code() {
		return promotion_Code;
	}
	float calculatePromotion(int p_code, float cost);
