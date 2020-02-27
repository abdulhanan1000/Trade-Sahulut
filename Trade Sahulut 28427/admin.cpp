
#include "admin.h"
#include"ads.h"
#include"product.h"
using namespace std;

admin::admin() {
	name = "";
	age = 0;
	cnic = "";
	address = "";
	
};

admin::admin(string a, string b, string c, int d) {
	this->name = a;
	this->cnic = c;
	this->address = b;
	this->age = d;
};


void admin::setadminusername() {
	string nme;
	cout << "admin username: " << endl;

	getline(cin, nme);
	this->adminusername = nme;
};
void admin::setadminpassword() {
	string ps;
	cout << "admin password: " << endl;

	getline(cin, ps);
	this->adminpassword = ps;
};
string admin::getadminpassword() {
	return adminpassword;
};
string admin::getadminusername() {
	return adminusername;
};


bool admin::adminlogin() {
	bool adminlgn = 0;
	if (getadminusername() == "admin") {
		if (getadminpassword() == "admin") {

			adminlgn = 1;
		}

	}

	else  {
		adminlgn = 0;
	}

	return adminlgn;
};


void admin::blockseller(seller s[20]) {
	int blocksnumber;
	cout << "\nwhich seller to block?";
	cin >> blocksnumber;
	for (int j =blocksnumber ; j < s[0].getnoofsellers(); j++)
	{
		s[j] = s[j + 1];
		
	}

};
void admin::blockbuyer(buyer b[20]) {
	int blockbnumber;
	cout << "which buyer to block?";
	cin >> blockbnumber;
	for (int j = blockbnumber; j < b[0].getnoofbuyers(); j++)
	{
		b[j] = b[j + 1];

	}
};

void admin::deleterating(rating rt[100]) {
	int ratingnooo;
	cout << "which rating to DELETE (INPUT INDEX)?";
	cin >> ratingnooo;
	for (int j = ratingnooo; j < rt[0].getnoofratings(); j++)
	{
		rt[j] = rt[j + 1];

	}
	
};