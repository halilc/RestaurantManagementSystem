#ifndef RESTAURANT_H
#define RESTAURANT_H
#include <iostream>
using namespace std;
using std::cout;
using std::endl;
#include "Order.h"
class Restaurant : public Order {
private:
	
public:
	Restaurant();
	Restaurant(char *orderid_name, char *name);
	void setOrderid_name(char* orderid_name);
	void setName_order(char* orderWho_name);
	char* getOrderidName();
	char* getNameWhoOrder();
};
#endif