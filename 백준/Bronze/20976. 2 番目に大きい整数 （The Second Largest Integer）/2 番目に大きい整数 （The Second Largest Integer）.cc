/*
- Title : 20976 - The Second Largest Integer
- Start Time : 25-05-08, 21:53
- End Time : 25-05-08, 21:55
- Try : 1
- Category : simple, basic
- Language : C++20
*/

/* 한국어 주석
설명 생략.
*/

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	//cout.tie(0);

	vector<int> v(3);

	for (int i = 0; i < 3; ++i) {
		cin >> v[i];
	}

	sort(v.begin(), v.end());

	cout << v[1];

	return 0;
}

// Finish