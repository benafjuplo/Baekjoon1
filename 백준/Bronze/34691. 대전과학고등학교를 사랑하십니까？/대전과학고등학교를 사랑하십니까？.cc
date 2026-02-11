/*
- Title : 34691 - Do you love Daejeon Science High School?
- Start Time : 26-02-12, 03:45
- End Time : 26-02-12, 03:49
- Try : 1
- Category : implementation
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

	string str;
	cin >> str;

	while (str != "end") {
		if (str == "animal")
			cout << "Panthera tigris";
		else if(str == "flower")
			cout << "Forsythia koreana";
		else
			cout << "Pinus densiflora";
		cout << "\n";
		cin >> str;
	}

	return 0;
}
