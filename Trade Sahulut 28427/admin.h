#pragma once
#include<iostream>
#include<string>
using namespace std;
#include"person.h"
#include"seller.h"
#include"buyer.h"
#include"ratings.h"
#include"ads.h"
#include"product.h"
class admin :public person{

	string adminusername;
	string adminpassword;

public:
	admin();
	admin(string a, string b, string c, int d);
	
	bool adminlogin();
	string getadminusername();
	void setadminusername();
	void setadminpassword();
	string getadminpassword();
	void blockseller(seller s[20]);
	void blockbuyer(buyer b[20]);
	
	void deleterating(rating rt[100]);

};