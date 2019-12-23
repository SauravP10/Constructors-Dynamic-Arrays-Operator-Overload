
#include "Students.h"
#include <string>
#include <iostream>
#include <fstream>

using namespace std;

int main() {
	ifstream Checkin("checkins.txt");
	ifstream Checkout("checkouts.txt");
	ifstream Student("Students.txt");
	ofstream UpdateStudent("UpdatedStudents.txt");
	string *item = new string[100];
	string *item2 = new string[20];
	string detail[100];

	if (!Checkin && !Checkout && !Student) {
		cout << "File cannot be opened";
	}
	Students s[30];
	int stptr = 0;
	int l = 0;
	while (!Student.eof()) {
		string item;
		getline(Student, item);
		detail[l] = item;
		//cout << item <<endl;;
		l++;
	}
	int t = 0;
	//int stptr = 0;
	har:
	while (t < l) {
		int x = 0;
		string stn[3];
		int h = 0;
		int stvar=0;
		cout <<t<<":" <<detail[t]<<endl;
	
		while (detail[t][x] != '\0') {
			if (detail[t][x] == ' ') {
				stn[h]=detail[t].substr(stvar, x - stvar);
				stvar = x + 1;
				h++;
			}
			x++;
		}
		//cout << stn[2] << stn[1] << stn[0];
		Students s1(stn[2], stn[1], stn[0]);
		t++;
		if (detail[t][0] == '0') {
			t++;
			s[stptr] = s1;
			stptr++;
			goto har;
			//continue;
		}
		cout << detail[t][0]<<endl;
		int temp1 = detail[t][0];
		
			
		
			//item add
		cout << detail[t].substr(2, detail[t].length() - 1) << endl;
			//s1.items[s1.count] = detail[t].substr(2, detail[t].length() - 1);
			//s1.count++;
			//s1.setitem(detail[t].substr(2, detail[t].length() - 1));
			t++;
			
		if (temp1 == 1) {
			s[stptr] = s1;
			stptr++;
			goto har;
		}
		cout <<"1:"<< detail[t][0] << endl;
		int temp2 = detail[t][0]-1;
		
		for (int i = 0;i <= temp2;i++) {
			//item add
			//s1.items[s1.count] = detail[t].substr(1, detail[t].length() - 1);
			//s1.count++;
			cout << detail[t].substr(1, detail[t].length() - 1) << endl;
			//s1.setitem(detail[t].substr(1, detail[t].length() - 1));
			t++;
		}
		s[stptr] = s1;
		stptr++;
		goto har;
		//continue;

	}
	
	
	getchar();
	return 0;
}