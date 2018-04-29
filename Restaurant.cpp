#include <iostream>
#include "Food.h"
#include "Appetiser.h"
#include "Dessert.h"
#include "Main_Dish.h"
#include "Order.h"
using namespace std;
int main()
{
	Order *resteurant_orders;
	resteurant_orders = new Order[30];					
	int numOfrestOrders = 0;
	int input = 11;
	int food_id;
	char food_name[25];
	int preparation_time;
	int calories;
	bool vegNonveg;
	char originCountry[25];
	int cost;
	char food_type[25];
	float portion;
	int pro_code;
	int number_in_plate;
	int orderid = 0;
	Order *myorder;
	Main_Dish m;
	Appetiser a;
	Dessert d;
	//myorder = new Order();
	while (input != 8) {
		cout << ("1. Create an order") << endl;
		cout << ("2. Search a food by ID") << endl;
		cout << ("3. List all foods ordered in the restaurant") << endl;
		cout << ("4. Show total cost orders for the restaurants") << endl;
		cout << ("5. List all food in a given order") << endl;
		cout << ("6. List all food of a given order grouped as appetisers, main dishes, and desserts with total cost of each group.") << endl;
		cout << ("7. Show total cost of a given order") << endl;
		cout << ("8. Exit") << endl;
		cin >> input;
		if (input == 1) {
			myorder = new Order();
			char *orderName;
			orderName = new char[25];
			cout << "Enter the name for the order:" << endl;
			cin >> orderName;
			myorder->setPerson_Order(orderName);
			cout << "Enter the order id:" << endl;
			cin >> orderid;
			myorder->setOrderid(orderid);
			while (1) {
				char choice;
				cout << "Would you like to add a new food to the order (Y/N):" << endl;
				cin >> choice;
				if (choice == 'Y') {
					int food_choice;
					cout << "(0) Main Dish (1) Appetiser (2) Dessert" << endl;
					cin >> food_choice;
					if (food_choice == 0) {
						//Main_Dish m;
						//m = new Main_Dish()
						strcpy(food_name, "tavuk");
						strcpy(originCountry, "kibris");					
						strcpy(food_type, "tavuk - dolma");					
						m.set_Food_ID_Number(10);
						m.set_Food_Name(food_name);				
						m.set_Preparation_time(123);
						m.set_Calories(334);
						m.set_Vegetarian(1);
						m.set_Origin_Country(originCountry);
						m.set_Cost(75);
						m.setMain_dish_type(food_type);
						m.setPortion_size(567);
						myorder->addMainOrder(m);
						/*
						cout << "Enter Food ID:" << endl;
						cin >> food_id;
						m.set_Food_ID_Number(food_id);
						cout << "Enter Food Name:" << endl;
						cin >> food_name;
						m.set_Food_Name(food_name);
						cout << "Enter Preparation Time:" << endl;
						cin >> preparation_time;
						m.set_Preparation_time(preparation_time);
						cout << "Enter Calories:" << endl;
						cin >> calories;
						m.set_Calories(calories);
						cout << "Enter Veg or Non-Veg(Boolean):" << endl;
						cin >> vegNonveg;
						m.set_Vegetarian(vegNonveg);
						cout << "Enter Origin Country" << endl;
						cin >> originCountry;
						m.set_Origin_Country(originCountry);
						cout << "Enter Cost:" << endl;
						cin >> cost;
						m.set_Cost(cost);
						cout << "Enter Type:" << endl;
						cin >> food_type;
						m.setMain_dish_type(food_type);
						cout << "Enter Portion" << endl;
						cin >> portion;
						m.setPortion_size(portion);
						*/
						//myorder->listOrdes();
					}
					else if (food_choice == 1) {
						//Appetiser a;
						strcpy(food_name, "soğan");
						strcpy(originCountry, "güney kibris");
						strcpy(food_type, "appertiser");
						a.set_Food_ID_Number(11);
						a.set_Food_Name(food_name);
						a.set_Preparation_time(123);
						a.set_Calories(334);
						a.set_Vegetarian(1);
						a.set_Origin_Country(originCountry);
						a.set_Cost(11);
						a.setAppetiser_type(food_type);
						a.setPromotion_code(2);
						myorder->addAppOrder(a);
						/*
						cout << "Enter Food ID:" << endl;
						cin >> food_id;
						a.set_Food_ID_Number(food_id);
						cout << "Enter Food Name:" << endl;
						cin >> food_name;
						a.set_Food_Name(food_name);
						cout << "Enter Preparation Time:" << endl;
						cin >> preparation_time;
						a.set_Preparation_time(preparation_time);
						cout << "Enter Calories:" << endl;
						cin >> calories;
						a.set_Calories(calories);
						cout << "Enter Veg or Non-Veg(Boolean):" << endl;
						cin >> vegNonveg;
						a.set_Vegetarian(vegNonveg);
						cout << "Enter Origin Country" << endl;
						cin >> originCountry;
						a.set_Origin_Country(originCountry);
						cout << "Enter Cost:" << endl;
						cin >> cost;
						a.set_Cost(cost);
						cout << "Enter Type:" << endl;
						cin >> food_type;
						a.setAppetiser_type(food_type);
						cout << "Enter Promototion Code" << endl;
						cin >> pro_code;
						a.setPromotion_code(pro_code);
						*/
						//myorder->listOrdes();
					}
					else if (food_choice == 2) {
						//Dessert d;
						strcpy(food_name, "tavuk gögsü");
						strcpy(originCountry, "tr");
						strcpy(food_type, "tatli");
						d.set_Food_ID_Number(12);
						d.set_Food_Name(food_name);
						d.set_Preparation_time(123);
						d.set_Calories(334);
						d.set_Vegetarian(1);
						d.set_Origin_Country(originCountry);
						d.set_Cost(12);
						d.setDessert_type(food_type);
						d.setNumberofPlate(12);
						/*
						cout << "Enter Food ID:" << endl;
						cin >> food_id;
						d.set_Food_ID_Number(food_id);
						cout << "Enter Food Name:" << endl;
						cin >> food_name;
						d.set_Food_Name(food_name);
						cout << "Enter Preparation Time:" << endl;
						cin >> preparation_time;
						d.set_Preparation_time(preparation_time);
						cout << "Enter Calories:" << endl;
						cin >> calories;
						d.set_Calories(calories);
						cout << "Enter Veg or Non-Veg(Boolean):" << endl;
						cin >> vegNonveg;
						d.set_Vegetarian(vegNonveg);
						cout << "Enter Origin Country" << endl;
						cin >> originCountry;
						d.set_Origin_Country(originCountry);
						cout << "Enter Cost:" << endl;
						cin >> cost;
						d.set_Cost(cost);
						cout << "Enter Type:" << endl;
						cin >> food_type;
						d.setDessert_type(food_type);
						cout << "Enter Number in Plate:" << endl;
						cin >> number_in_plate;
						d.setNumberofPlate(number_in_plate);
						*/
						myorder->addDessertOrder(d);
						//myorder->listOrdes();
					}
				}
				else {
					resteurant_orders[numOfrestOrders++] = *myorder;
					delete myorder;
					break;
				}
			}
		}
		else if (input == 2)
		{
			int choice,choice2;
			cout << "(0)Main Dish";
			cout << "(1)Appetiser";
			cout << "(2)Dessert" << endl;
			cout << "Please indicate the category :" << endl;
			cin >> choice;
			cout << "Enter Food ID:" << endl;
			cin >> choice2;
			int y = numOfrestOrders;
			for (int i = 0; i <numOfrestOrders; i++) {
				resteurant_orders[i].searchOrder(choice, choice2);
				if (resteurant_orders[i].searchOrder(choice, choice2) == true) {
					cout << resteurant_orders[i].getPerson_Order() << endl;
				}
			}
			//myorder->searchOrder(choice, choice2);
			//cout << myorder->getPerson_Order() << endl;
		}
		else if (input == 3) {
			int y = numOfrestOrders;
			for (int i = 0; i <numOfrestOrders; i++) {
				resteurant_orders[i].listOrdes();
			}
		}
		else if (input == 4) {
			int total_cost_main = 0;
			for (int i = 0; i <numOfrestOrders; i++) {
				total_cost_main += resteurant_orders[i].calculateCost();
			}
			cout << "Total cost of all orders is: " << total_cost_main << endl;
		}
		else if (input == 5) {
			int orderid_in;
			cout << "Enter Order ID:" << endl;
			cin >> orderid_in;
			for (int i = 0; i <numOfrestOrders; i++) {
				if (orderid_in == resteurant_orders[i].getOrder_id()) {
					resteurant_orders[i].listOrdes();
				}
			}
		}
		else if (input == 6) {
			int orderid_in2;
			cout << "Enter Order ID:" << endl;
			cin >> orderid_in2;
			for (int i = 0; i <numOfrestOrders; i++) {
				if (orderid_in2 == resteurant_orders[i].getOrder_id()) {
					resteurant_orders[i].getMainOrders();
					resteurant_orders[i].getAppOrders();
					resteurant_orders[i].getDessertOrders();
				}
			}
		}
		else if (input == 7) {
			int orderid_in3;
			cout << "Enter Order ID:" << endl;
			cin >> orderid_in3;
			for (int i = 0; i <numOfrestOrders; i++) {
				if (orderid_in3 == resteurant_orders[i].getOrder_id()) {
					cout << "Total cost for the order " << orderid_in3 << "is " << resteurant_orders[i].calculateCost() << endl;
				}
			}
		}
		else if (input == 8) { break; }
	}
	system("PAUSE");
	return 0;
}