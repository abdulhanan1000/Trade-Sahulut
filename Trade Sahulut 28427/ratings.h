#pragma once
#include<iostream>
#include<string>
using namespace std;
class rating {

	int ratingstars;
	string feedback;
	int noofratings;
public:
	rating();
	rating(int a, string b);
	void viewrating();
	

	void setratingstars();
	void setfeedback();
	int getratingstars();
	string getfeedback();
	void incrementnoofratings();
	void decrementnoofratings();
		int getnoofratings();
	
};