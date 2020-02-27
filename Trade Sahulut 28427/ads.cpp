
#include "ads.h"
using namespace std;

ads::ads() {
	adpostdate = "";
	adID = 0;
	noofads = 0;

}

ads::ads(string a, int b) {
	
	this->adpostdate = a;
	this->adID = b;

	
};
void ads::incrementnoofads() {
	
	++noofads;

};
void ads::decrementnoofads() {

	--noofads;
}

int ads::getnoofads() {

	return noofads;

};
void ads::setnewad(ads ad[100]) {
	cout << "POSTING NEW AD\n\n";
	cin.ignore();
	ad[ad[0].getnoofads()].setadID();
	cin.ignore();
	ad[ad[0].getnoofads()].setadpostdate();
	cin.ignore();
	p.setproductID();
	cin.ignore();
	p.setproductname();
	
	p.setproductprice();
	cin.ignore();
	p.setotherproductinfo();

	ad[0].incrementnoofads();
	cout << "AD POSTED!";

}
void ads::editads(ads ad[100]) {
	int adindexno;

	cout << "\nEDIT AD (INPUT AD INDEX): ";
	cin >> adindexno;
	ad[adindexno].setadID();
	cin.ignore();

	ad[adindexno].setadpostdate();
	cin.ignore();
	
	p.setproductID();
	cin.ignore();

	p.setproductname();
	cin.ignore();

	p.setproductprice();
	cin.ignore();

	p.setotherproductinfo();
	cin.ignore();

};


void ads::setadpostdate() {
	string dt;
	cout << "Set ad post date: " << endl;
	
	getline(cin, dt);
	this->adpostdate = dt;
};

void ads::setadID() {
	int idd=0;
	cout << "Set ad ID: " << endl;
	
	cin >> adID;

	this->adpostdate = idd;
};

int ads::getadID() {
	return adID;
};
string ads::getadpostdate() {
	return adpostdate;
};

void ads::viewad() {

	    cout << "\nadID: ";
		cout<<getadID();
		
		cout << "\nad post date: ";
		cout<<getadpostdate();
		cout << endl;
		cout << "\nproduct name: ";
		cout << p.getproductname();
		cout << "\nproduct id: ";
		cout << p.getproductID();
		cout << "\nproduct price: ";
		cout << p.getproductprice();
		cout << "\nproduct other info: ";
		cout << p.getotherproductinfo();
		cout << endl;

};
