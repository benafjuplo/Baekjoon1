/*
- Title : 30552 - Attendance
- Start Time : 25-01-02, 11:06
- End Time : 25-01-02, 11:14
- Try : 2(1 : Condition Missing)
- Category : string
- Language : C++20
*/

/* 한국어 주석
설명 생략.
*/

#include<iostream>
#include<string>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	//cout.tie(0);

	int n;
	cin >> n;

	string prev = "Present!";
	string curr;

	bool noAbsences = true;

	for (int i = 0; i < n; ++i) {
		cin >> curr;
		if (prev != "Present!" && curr != "Present!") {
			noAbsences = false;
			cout << prev << "\n";
		}
		prev = curr;
	}

	if (curr != "Present!") {
		noAbsences = false;
		cout << prev << "\n";
	}

	if (noAbsences)
		cout << "No Absences";

	return 0;
}
