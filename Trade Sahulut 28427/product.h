#pragma once
#include<iostream>
#include<string>
#include"ratings.h"
using namespace std;
class product {
	int productID;
	string productname;
	string otherproductinfo;
	double productprice;
	rating rt[100];

public:
	product();
	product(int a, string b, string c,double d);


	void viewproduct();
	void setproductID();
	void setproductname();
	void setproductprice();
	void setotherproductinfo();
	int getproductID();
	string getproductname();
	string getotherproductinfo();
	double getproductprice();
	

};