#pragma once
#include<iostream>
#include<string>
using namespace std;

class person {
protected:
	string name;
	int age;
	string cnic;
	string address;

public:

	string getname();
	int getage();
	string getcnic();
	string getaddress();
	void setname();
	void setage();
	void setcnic();
	void setaddress();

	person();
	person(string a, string c, string d, int b);


};