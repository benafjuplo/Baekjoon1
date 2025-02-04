/*
- Title : 7595 - Triangles
- Start Time : 25-02-04, 22:39
- End Time : 25-02-04, 22:42
- Try : 1
- Category : simple, basic
- Language : C++20
*/

/* 한국어 주석
설명 생략.
*/

#include<iostream>
#include<string>

using namespace std;

int main() {
	cin.tie(0);
	//cout.tie(0);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;
	while (n) {
		string str = "";
		for (int i = 0; i < n;++i) {
			str += '*';
			cout << str << "\n";
		}
		cin >> n;
	}

	return 0;
}

//Finish