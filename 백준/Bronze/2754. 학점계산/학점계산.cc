#include<iostream>
#include<string>
using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	string s;
	cin >> s;

	double grade = 0;

	if (s == "A+") {
		grade = 4.3;
	}
	else if (s == "A0") {
		grade = 4.0;
	}
	else if (s == "A-") {
		grade = 3.7;
	}
	else if (s == "B+") {
		grade = 3.3;
	}
	else if (s == "B0") {
		grade = 3.0;
	}
	else if (s == "B-") {
		grade = 2.7;
	}
	else if (s == "C+") {
		grade = 2.3;
	}
	else if (s == "C0") {
		grade = 2.0;
	}
	else if (s == "C-") {
		grade = 1.7;
	}
	else if (s == "D+") {
		grade = 1.3;
	}
	else if (s == "D0") {
		grade = 1.0;
	}
	else if (s == "D-") {
		grade = 0.7;
	}
	else if (s == "F") {
		grade = 0.0;
	}
	cout<<fixed;
	cout.precision(1);
	cout << grade;
}

//Finish