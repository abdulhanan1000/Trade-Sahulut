#pragma once
#include<iostream>
#include<string>
using namespace std;
#include"product.h"
class ads {
protected:
	product p;
	string adpostdate;
	int adID;
	int noofads;

public:
	

	ads();
	ads(string a, int b);

	void incrementnoofads();
	void decrementnoofads();
	int getnoofads();
	void setnewad(ads ad[100]);
	string getadpostdate();
	void setadpostdate();
	int getadID();
	void setadID();
	void editads(ads ad[100]);

	void viewad();

};



