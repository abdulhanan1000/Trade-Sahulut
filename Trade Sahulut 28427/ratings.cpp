#include"ratings.h"
using namespace std;
rating::rating() {
	ratingstars = 0;
	feedback = "";
	
};

void rating::incrementnoofratings() {
	
	++noofratings;

};
void rating::decrementnoofratings() {

	--noofratings;
}

int rating::getnoofratings() {

	return noofratings;

};
rating::rating(int a, string b) {

	this->ratingstars = a;
	this->feedback = b;
	noofratings = 0;
}

void rating::setratingstars() {
	int rt;
	cout << "Set rating (1-5 stars): " << endl;

	cin >> rt;
	this->ratingstars = rt;
};

void rating::setfeedback() {
	string fb;
	cout << "Set feedback: " << endl;

	getline(cin, fb);
	this->feedback = fb;
};

int rating::getratingstars() {
	return ratingstars;
};

string rating::getfeedback() {
	return feedback;
};

void rating::viewrating() {
	cout << "Rating: " << getratingstars() << " out of 5 stars. " << endl;
	cout << "Feedback:" << getfeedback() << endl;
};
