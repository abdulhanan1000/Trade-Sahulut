#include"product.h"
#include <string>
using namespace std;
product::product() {
	
	productID = 0;
	productname = "";
	otherproductinfo = "";
	productprice = 0;
};

product::product(int a, string b, string c,double d) {
	this->productID = a;
	this->productname = b;
	this->otherproductinfo = c;
	this->productprice = d;
}



void product::setproductID() {
	int pid;
	cout << "Set product id: " << endl;

	cin >> pid;
	this->productID = pid;
};
void product::setproductname() {
	string pnm;
	cout << "Set product name: " << endl;

	getline(cin, pnm);
	this->productname = pnm;
};
void product::setproductprice() {
	double pric;
	cout << "Set product price: " << endl;

	cin >> pric;
	this->productprice = pric;

};
void product::setotherproductinfo() {
	string pi;
	cout << "Set other product info: " << endl;

	getline(cin, pi);
	this->otherproductinfo = pi;
};
double product::getproductprice() {
	return productprice;
}
int product::getproductID() {
	return productID;
};
string product::getproductname() {
	return productname;
};
string product::getotherproductinfo() {
	return otherproductinfo;
};

void product::viewproduct() {

	cout << "product id: ";
	cout<<getproductID();
	cout << endl;
	cout << "product name: ";
	cout<<getproductname();
	cout << endl;
	cout << "Other product info: ";
	cout<<getotherproductinfo();
	cout << endl;
};
