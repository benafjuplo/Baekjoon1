/*
- Title : 33964 - Repunit Addition
- Start Time : 25-06-18, 23:42
- End Time : 25-06-18, 23:55
- Try : 1
- Category : mathematics, elementary arithmetic, string
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

	// Solution 1
	int x, y;
	cin >> x >> y;

	if (x > y) 
		cout << string(x - y, '1') << string(y, '2');	
	else 
		cout << string(y - x, '1') << string(x, '2');

	// Solution 2
	/*int x, y;
	cin >> x >> y;

	string strX(x, '1');
	string strY(y, '1');

	cout << stoll(strX) + stoll(strY);*/

	// Solution 3
	/*int result = 0;

	for (int i = 0; i < 2; ++i) {
		int x;
		cin >> x;

		string str = "";
		for (int j = 0; j < x; ++j)
			str += "1";

		result += stoi(str);
	}

	cout << result;*/

	return 0;
}