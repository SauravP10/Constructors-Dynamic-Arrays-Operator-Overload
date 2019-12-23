
#ifndef STUDENTS_H
#define STUDENTS_H

#include<string>

using namespace std;

class Students {
public:
	string firstName, lastName, ID, items[10] ;
	int count;
	Students() {
		firstName = ' ';
		lastName = ' ';
		ID = ' ';
		count = 0;
	}

	Students(string fname, string lname, string id) {
		firstName = fname;
		lastName = lname;
		ID = id;
		items[0] = "";
	}

	string getFname() {
		return firstName;
	}

	string getLname() {
		return lastName;
	}

	string getID() {
		return ID;
	}
	void setitem(string f) {
		items[count] = f;
	}
	void setFname(string f) {
		firstName = f;
	}

	void setLname(string l) {
		lastName = l;
	}

	void setID(string i) {
		ID = i;
	}

	int CheckedoutCount() {

	}

	bool CheckOut(const string& item) {
		
	}

	bool CheckIn(const string& item) {

	}

	bool HasCheckedOut(const string& item) {

	}

	void clear() {

	}

	~Students() {

	}

	friend ostream &operator<<(ostream &output, const Students &D) {
		output << "Student id : " << D.ID << " student name : " << D.firstName;
		
		return output;
	}

	friend istream &operator>>(istream  &input, Students &D) {
		input >> D.ID >> D.firstName;
		return input;
	}
};

#endif