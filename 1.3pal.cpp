#include <iostream>
using namespace std;

class Product {
private:
	int id;
	float price;
	int monthlySales[12];
	int totalInventory;
	int totalBill;

public:
	void acceptDetails() {
		cout << "Enter the id of the product: ";
		cin >> id;
		cout << "Enter the price of the product: ";
		cin >> price;
		cout << "Enter the monthly sales of the product: ";
		for (int i = 0; i < 12; ++i) {
			cin >> monthlySales[i];
		}
		cout << "Enter the total inventory of the product: ";
		cin >> totalInventory;
		cout << "Enter the total bill of the product: ";
		cin >> totalBill;
	}

	void display() const {
		cout << "The id of the product is: " << id << endl;
		cout << "The price of the product is: " << price << endl;
		cout << "The total inventory of the product is: " << totalInventory << endl;
		cout << "The total bill of the product is: " << totalBill << endl;
	}

	int getTotalBill() const {
		return totalBill;
	}
};

int main() {
	int n;
	cout << "Enter number of products: ";
	cin >> n;

	Product products[100];
	float grandTotal = 0;
	for (int i = 0; i < n; ++i) {
		cout << " Product " << (i + 1) << " Details " << endl;
		products[i].acceptDetails();
		grandTotal += products[i].getTotalBill();
	}

	cout << "All Products Details" << endl;
	for (int i = 0; i < n; ++i) {
		products[i].display();
	}

	cout << "Grand Total Bill: " << grandTotal << endl;
	return 0;
}