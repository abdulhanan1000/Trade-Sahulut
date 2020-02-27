#include"person.h"
#include <string>
using namespace std;
person::person() {
	name = "";
	age = 0;
	cnic = "";
	address = "";
};
person::person(string a, string c, string d, int b) {
	this->name = a;
	this->cnic = c;
	this->address = d;
	this->age = b;

};


void person::setname() {
	string nm;
	cout << "Set name: " << endl;
	
	getline(cin, nm);
	this->name = nm;
};

void person::setage() {
	int ag;
	cout << "Set age: " << endl;

	cin >> ag;
	this->age = ag;
};

void person::setcnic() {
	string nic;
	cout << "Set CNIC: " << endl;

	getline(cin, nic);
	this->cnic = nic;
};

void person::setaddress() {
	string add;
	cout << "Set address: " << endl;

	getline(cin, add);
	this->address = add;
};


string person::getname() {
	return name;
};
int person::getage() {
	return age;
};
string person::getcnic() {
	return cnic;
};
string person::getaddress() {
	return address;
};
