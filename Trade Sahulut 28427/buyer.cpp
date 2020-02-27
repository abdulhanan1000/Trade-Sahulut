#include"buyer.h"
using namespace std;

buyer::buyer() {
	name = "";
	age = 0;
	cnic = "";
	address = "";
	
};
buyer::buyer(string a, string b, string c, int d) {
	this->name = a;
	this->cnic = c;
	this->address = b;
	this->age = d;
	noofbuyers = 0;
};


void buyer::incrementnoofbuyers() {
	
	++noofbuyers;

};
void buyer::decrementnoofbuyers() {

	--noofbuyers;
}

int buyer::getnoofbuyers() {

	return noofbuyers;

};
void buyer::setbuyerusername() {
	string bus;
	cout << "buyer username: " << endl;

	getline(cin, bus);
	this->buyerusername = bus;
};
void buyer::setbuyerpassword() {
	string bps;
	cout << "buyer password: " << endl;

	getline(cin, bps);
	this->buyerpassword = bps;
};
string buyer::getbuyerpassword() {
	return buyerpassword;
};

string buyer::getbuyerusername() {
	return buyerusername;
};




bool buyer::buyerlogin() {
	bool buyerlgn = 0;
	if (getbuyerusername() == "buyer") {
		if (getbuyerpassword() == "buyer") {

			buyerlgn = 1;
		}

	}

	else {
		buyerlgn = 0;
	}

	return buyerlgn;
};


void buyer::giverating(rating rt[100]) {

reenterratingindex:
	cout << "\nwhich product index to give rating for?: \n";
	int newratingindex;

	cin >> newratingindex;
	if (newratingindex < rt[0].getnoofratings() + 1) {
		rt[newratingindex].setratingstars();
		cin.ignore();
		rt[newratingindex].setfeedback();
		rt[0].incrementnoofratings();
	}
	else {
		cout << "invalid input, please re enter number";
		goto reenterratingindex;
	}

}
void buyer::putorder(ads ad[100]) {
	int orderput;
	cout << "\nwhich index ad to put order of?";
	cin >> orderput;
	for (int j = orderput; j < ad[0].getnoofads(); j++)
	{
		ad[j] = ad[j + 1];

	}
	ad[0].decrementnoofads();
	

};


void buyer::displaybuyerinfo() {

	cout << "\n name of buyer: ";
	cout<<getname();
	cout << endl;
	cout << "age of buyer: ";
	cout << getage();
	cout << endl;
	cout << "cnic of buyer: ";
	cout << getcnic();
	cout << endl;
	cout << "address of buyer: ";
	cout << getaddress();
	cout << endl;

}