#include "seller.h"
using namespace std;
seller::seller() {
	name = "";
	age = 0;
	cnic = "";
	address = "";
	

};
seller::seller(string a, string b, string c, int d) {

	this->name = a;
	this->cnic = c;
	this->address = b;
	this->age = d;
	noofsellers = 0;
	
};

void seller::incrementnoofsellers() {
	
	++noofsellers;
	
};
void seller::decrementnoofsellers() {

	--noofsellers;
}

int seller::getnoofsellers() {

	return noofsellers;

};
void seller::setsellerusername() {
	string sus;
	cout << "seller username: " << endl;

	getline(cin, sus);
	this->sellerusername = sus;

};
void seller::setsellerpassword() {
	string sps;
	cout << "seller password: " << endl;

	getline(cin, sps);
	this->sellerpassword = sps;

};
string seller::getsellerpassword() {
	return sellerpassword;

};
string seller::getsellerusername() {

	return sellerusername;
};


bool seller::sellerlogin() {
	bool sellerlgn = 0;
	if (getsellerusername() == "seller") {
		if (getsellerpassword() == "seller") {

			sellerlgn = 1;
		}

	}

	else {
		sellerlgn = 0;
	}
	
	return sellerlgn;
};



int seller::editadsseller() {
	
	int adindexnoo;
	cout << "\nEDIT AD (INPUT AD INDEX): ";
	cin >> adindexnoo;
	return adindexnoo;

};
void seller::searchbuyer(buyer b[20]) {
	cout << "************searching buyer by name*******";
	string searched;
	cin >> searched;

	for (int i = 0; i < b[0].getnoofbuyers(); i++) {
		cout << "checking index: " << i << endl;

		if (searched == b[i].getname()) {
			cout << "FOUND! AS FOLLOWING:";
			b[i].displaybuyerinfo();
		}
		cout << "NOT FOUND!";

	}
};
void seller::displaysellerinfo() {
	
	cout << "\n name of seller: ";
	cout<<getname();
	cout << endl;
	cout << "age of seller: ";
	cout<<getage();
	cout << endl;
	cout << "cnic of seller: ";
	cout<<getcnic();
	cout << endl;
	cout << "address of seller: ";
	cout<<getaddress();
	cout << endl;

}