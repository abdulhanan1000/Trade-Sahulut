#pragma once
#include<iostream>
#include<string>
using namespace std;
#include"person.h"
#include "ads.h"
#include"buyer.h"
class seller :public person {
	string sellerusername;
	string sellerpassword;
	int noofsellers;
	
public:
	seller();
	seller(string a, string b, string c, int d);
	bool sellerlogin();
	string getsellerusername();
	void setsellerusername();
	void setsellerpassword();
	string getsellerpassword();
	
	
	int editadsseller();
	void searchbuyer(buyer b[20]);
	void displaysellerinfo();
	int getnoofsellers();
	void incrementnoofsellers();
	void decrementnoofsellers();

};