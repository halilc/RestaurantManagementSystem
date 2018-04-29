#ifndef ORDER_H
#define ORDER_H
#include <iostream>
using namespace std;
using std::cout;
using std::endl;
#include "Appetiser.h"
#include "Dessert.h"
#include "Main_Dish.h"
class Order{
private:
	int order_ID;
	char * person_Ordering;
	char * promotion_Dish;
	Appetiser *appetiser_orders;
	Dessert *dessert_orders;
	Main_Dish *main_orders;
	int numofappeorders;
	int numofdessertorders;
	int numofmainorders;
public:
	Order();
	Order(int orderid, char *p_order);
	void setOrderid(int);
	void setPerson_Order(char*);
	int getOrder_id();
	char * getPerson_Order();
	void addAppOrder(Appetiser);
	void addDessertOrder(Dessert);
	void addMainOrder(Main_Dish);
	void showPromotion();
	void listOrdes();
	float calculateCost();
	bool searchOrder(int,int);
	void getMainOrders();
	void getAppOrders();
	void getDessertOrders();
};
#endif#