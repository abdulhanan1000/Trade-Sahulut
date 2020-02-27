#pragma once
#include<iostream>
#include<string>
using namespace std;
#include"person.h"
#include"ratings.h"
#include"ads.h"
class buyer :public person {

	string buyerusername;
	string buyerpassword;
	int noofbuyers;

public:
	
	buyer();
	buyer(string a, string b, string c, int d);
	string getbuyerusername();
	void setbuyerusername();
	void setbuyerpassword();
	string getbuyerpassword();
	
	void putorder(ads ad[100]);
	bool buyerlogin();
	void giverating(rating rt[100]);
	void displaybuyerinfo();
	void incrementnoofbuyers();
	void decrementnoofbuyers();
	int	getnoofbuyers();
	


};