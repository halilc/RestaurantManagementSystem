#include "Order.h"
#include <iostream>
using std::endl;
using namespace std;
Order::Order() {
	order_ID = 0;
	person_Ordering = new char[25];
	strcpy(person_Ordering, "Not Provided");
	
	appetiser_orders = new Appetiser[25];
	dessert_orders = new Dessert[25];
	main_orders = new Main_Dish[25];

	numofappeorders = 0;
	numofdessertorders = 0;
	numofmainorders = 0;
}
Order::Order(int orderid, char *p_order) {
	order_ID = orderid;
	person_Ordering = new char[25];
	strcpy(person_Ordering, p_order);

	numofappeorders = 0;
	numofdessertorders = 0;
	numofmainorders = 0;

	appetiser_orders = new Appetiser[25];
	dessert_orders = new Dessert[25];
	main_orders = new Main_Dish[25];
}
void Order::setOrderid(int id) {
	order_ID = id;
}
void Order::setPerson_Order(char* person_order) {
	strcpy(person_Ordering,person_order);
}
int Order::getOrder_id() {
	return order_ID;
}
char * Order::getPerson_Order() {
	return person_Ordering;
}
void Order::addAppOrder(Appetiser app_order) {
	appetiser_orders[numofappeorders++] = app_order;	
}
void Order::addDessertOrder(Dessert dessert_order) {
	dessert_orders[numofdessertorders++] = dessert_order;
}
void Order::addMainOrder(Main_Dish main) {
	main_orders[numofmainorders++] = main;
}
void Order::getMainOrders() {
	int cost_main = 0;
	cout << "----------" << "Main Dishes" << "----------" << endl;
	for (int i = 0; i < numofmainorders; i++) {
		cout << "Main Dish ID:  " << (main_orders[i].get_Food_ID_Number()) << endl;
		cost_main += main_orders[i].get_Cost();
	}
	cout << "Total cost of main dishes is   " << cost_main << endl;
}
void Order::getAppOrders() {
	int cost_app = 0;
	cout << "----------" << "Appetisers" << "----------" << endl;
	for (int i = 0; i < numofappeorders; i++) {
		cout << "Appetiser ID:  " << (appetiser_orders[i].get_Food_ID_Number()) << endl;
		cost_app += appetiser_orders[i].get_Cost();
	}
	cout << "Total cost of Appetiser dishes is   " << cost_app<< endl;
}
void Order::getDessertOrders() {
	int cost_des = 0;
	cout << "----------" << "Desserts" << "----------" << endl;
	for (int i = 0; i < numofdessertorders; i++) {
		cout << "Dessert ID:  " << (dessert_orders[i].get_Food_ID_Number()) << endl;
		cost_des += appetiser_orders[i].get_Cost();
	}
	cout << "Total cost of Dessert dishes is   " << cost_des << endl;
}


void Order::showPromotion() {
	int des_cheapest = 0;
	int main_cheapest = 0;
	int app_cheapest = 0;
	if (calculateCost() > 100) {
		for (int i = 0; i < numofdessertorders; i++) {
			des_cheapest = dessert_orders[i].get_Cost();
		}
		for (int i = 0; i < numofappeorders; i++) {
			app_cheapest = appetiser_orders[i].get_Cost();
		}
		for (int i = 0; i < numofmainorders; i++) {
			main_cheapest = main_orders[i].get_Cost();
		}
		if (des_cheapest > main_cheapest) {
			if (main_cheapest > app_cheapest) {
				cout << "Promotion Dish is Appetiser" << endl;
			}
			else {
				cout << "Promotion Dish is Main Dish" << endl;
			}
		}
		else if(des_cheapest < main_cheapest){
			if (des_cheapest > app_cheapest) {
				cout << "Promotion Dish is Appetiser" << endl;
			}
			else {
				cout << "Promotion Dish is Dessert" << endl;
			}
		}
		
	}
	else {
		cout << "No Promotion" << endl;
	}
}
void Order::listOrdes() {
	cout << "-----------" << endl;
	cout << "//PROMOTION FOOD" << endl;
	showPromotion();
	cout << "-----------" << endl;
	cout << "Food Details" << endl;
	cout << "-----------" << endl;
	if (numofmainorders > 0) {
		for (int i = 0; i < numofmainorders; i++) {
			cout << ("Food ID:") << main_orders[i].get_Food_ID_Number() << endl;
			cout << ("Food Name:") << main_orders[i].get_Food_Name()<< endl;
			cout << ("Preparation Time:") << main_orders[i].get_Preparation_time() << endl;
			cout << ("Calories:")<<main_orders[i].get_Calories() << endl;
			cout << ("Veg/Non-veg:")<< main_orders[i].get_Vegetarian() << endl;
			cout << ("Origin Country:")<< main_orders[i].get_Origin_Country()<< endl;
		}
		cout << "-----------" << endl;
	}
	else if (numofappeorders> 0) {
		for (int i = 0; i < numofappeorders; i++) {
			cout << ("Food ID:") << appetiser_orders[i].get_Food_ID_Number() << endl;
			cout << ("Food Name:") << appetiser_orders[i].get_Food_Name() << endl;
			cout << ("Preparation Time:") << appetiser_orders[i].get_Preparation_time() << endl;
			cout << ("Calories:") << appetiser_orders[i].get_Calories() << endl;
			cout << ("Veg/Non-veg:") << appetiser_orders[i].get_Vegetarian() << endl;
			cout << ("Origin Country:") << appetiser_orders[i].get_Origin_Country() << endl;
		}
		cout << "-----------" << endl;
	}
	else if (numofdessertorders > 0) {
		for (int i = 0; i < numofdessertorders; i++) {
			cout << ("Food ID:") << dessert_orders[i].get_Food_ID_Number() << endl;
			cout << ("Food Name:") << dessert_orders[i].get_Food_Name() << endl;
			cout << ("Preparation Time:") << dessert_orders[i].get_Preparation_time() << endl;
			cout << ("Calories:") << dessert_orders[i].get_Calories() << endl;
			cout << ("Veg/Non-veg:") << dessert_orders[i].get_Vegetarian() << endl;
			cout << ("Origin Country:") << dessert_orders[i].get_Origin_Country() << endl;
		}
		cout << "-----------" << endl;
	}
	
}
float Order::calculateCost() {
	float total_cost = 0;
	float temp_cost = 0;
	if (numofappeorders > 0) {
		for (int i = 0; i < numofappeorders; i++) {
			total_cost += appetiser_orders[i].get_Cost();
		}
	}
	else if (numofmainorders > 0) {
		for (int i = 0; i < numofmainorders; i++) {
			total_cost += main_orders[i].get_Cost();
		}
	}
	else if (numofdessertorders > 0) {
		for (int i = 0; i < numofdessertorders; i++) {
			total_cost += dessert_orders[i].get_Cost();
		}
	}
	return total_cost;
}
bool Order::searchOrder(int category,int id) {
	bool isFound = false;
	int counter = 0;
	if (category == 0) {
		for (int i = 0; i < numofmainorders; i++) {
			if (id == main_orders[i].get_Food_ID_Number()) {
				counter++;
				isFound = true;
			}
		}
		cout << "The food has been found in the   " << counter << "   given by" << endl;
	}
	else if (category == 1) {
		counter = 0;
		for (int i = 0; i < numofappeorders; i++) {
			if (id == appetiser_orders[i].get_Food_ID_Number()) {
				counter++;
				isFound = true;
			}
		}
		cout << "The food has been found in the" << counter << "given by" << endl;
	}
	else if (category == 2) {
		counter = 0;
		for (int i = 0; i < numofdessertorders; i++) {
			if (id == dessert_orders[i].get_Food_ID_Number()) {
				counter++;
				isFound = true;
			}
		}
		cout << "The food has been found in the" << counter << "given by" << endl;
	}
	return isFound;
}