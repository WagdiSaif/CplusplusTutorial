#include "stdafx.h"
#include <iostream>
#include <string>
#include <fstream>
#include <vector>

#define BinaryPath "dataInventory.bin"
using namespace std;

const int DES = 50;




class Inventory {
private:
	string itemName;
	char itemDescription[DES];
	int quantity;
	float wholesaleCost;
	float retailCost;
	string category;

public:

	// Constructor
	Inventory() {

	}

	// Getter functions
	int getQuantity() {
		return quantity;
	}

	string getItemName() {
		return itemName;
	}

	float getWholesaleCost() {
		return wholesaleCost;
	}

	float getRetailCost() {
		return retailCost;
	}

	string getcategory() {
		return category;
	}
	void setItemDescription(char itemDescription[]) {
		strncpy_s(this->itemDescription, itemDescription, sizeof(this->itemDescription));
	}
	// Setter functions
	char* getItemDescription() {
		return itemDescription;
	}



	void setQuantity(int quantity) {
		this->quantity = quantity;
	}

	void setItemName(string itemName) {
		this->itemName = itemName;
	}

	void setWholesaleCost(float wholesaleCost) {
		this->wholesaleCost = wholesaleCost;
	}

	void setRetailCost(float retailCost) {
		this->retailCost = retailCost;
	}

	void setcategory(string category) {

		this->category = category;

	}


};
void displayRecord(vector<Inventory> inventory) {

	for(Inventory i: inventory) {

		cout<<"\nItemName\t: ";
		
		cout<<i.getItemName();
		cout<<"\nDescription\t: ";
		cout<<i.getItemDescription();
		cout<<"\nQuantity\t: ";
		cout<<i.getQuantity();
		cout<<"\nWholesale Cost\t: ";
		cout<<i.getWholesaleCost();
		cout<<"\nRetail Cost\t: ";
		cout<<i.getRetailCost();
		cout<<"\ncategory\t: ";
		cout<<i.getcategory();
		cout<<endl;
		cout << "-----------------------------------------\n";
	}
	cout << "********************************************\n";
	

}

void readFromFile(string filename, Inventory *Fileinventory)
{
	vector<Inventory> storeInve = {};
	streampos end, start;
	ifstream fin;


	try {
		fin.open(filename, ios::in | ios::binary);

		if (!fin.is_open()) {
			cout << "Error opening file.." << endl;
			return;
		}

		while ((fin.read(reinterpret_cast<char*>(Fileinventory), sizeof(*Fileinventory)))) {
		
			
			
			storeInve.emplace_back(*Fileinventory);
			
		
		
		}

		// Close the file

		fin.close();

	}
	catch (exception& e) {
		cout << e.what() << endl << "Error occurred." << endl;
	}

	displayRecord(storeInve);
	


}
void addRecordTofile(string filename, Inventory *inventory)
{
	ofstream fout;
	char ch;
	fout.open(filename, ios::out | ios::app | ios::binary);

	if (!fout) {
		cout << "Error opening file.." << endl;
		return;
	}


	int quantity;
	string itemName;
	float wholesaleCost, retailCost;
	string category;
	char itemDescription[DES];

	// get data
	do
	{
		cout << "Enter item Name: " << endl;

		cin.ignore();
		getline(cin, itemName);

		inventory->setItemName(itemName);
		cout << "Enter item itemDescription: " << endl;

		cin.getline(itemDescription, DES);
		inventory->setItemDescription(itemDescription);

		cout << "Enter quantity: " << endl;

		cin >> quantity;
		inventory->setQuantity(quantity);

		cout << "Enter wholesale cost: " << endl;

		cin >> wholesaleCost;
		inventory->setWholesaleCost(wholesaleCost);

		cout << "Enter retail cost: " << endl;
		cin >> retailCost;
		inventory->setRetailCost(retailCost);

		cout << "Enter category: " << endl;
		cin.ignore();
		getline(cin, category, '\n');

		inventory->setcategory(category);

		// write record to file
		fout.write(reinterpret_cast<char*>(inventory), sizeof(*inventory));

		cout << "Do you want to add another record? (Y/N)" << endl;
		cin >> ch;
	} while (ch == 'Y');

	// close the file
	fout.close();
}

//Main function
int mainBin()
{
	Inventory *inventory = new Inventory();
	int choice;
	do
	{
		cout << "MENU" << endl;
		cout << "1. Add Record: " << endl;
		cout << "2. Read  Records from file and view: " << endl;
		cout << "Please enter your selection." << endl;
		cin >> choice;

		switch (choice)
		{
		case 1:
			addRecordTofile(BinaryPath, inventory);
			break;	//Add record
		case 2:
			readFromFile(BinaryPath, inventory);
			break;	//Display record

		default: cout << "Invalid Selection" << endl;
		}
	} while
		(choice <= 2);
	delete inventory;
	/*system("PAUSE");*/
	return 0;
}


