/*
- Title : 13866 - Assigning Teams
- Start Time : 25-02-10, 00:07
- End Time : 25-02-10, 00:07
- Try : 1
- Category : mathematics, sorting, simple, basic
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
	cin.tie(0);
	//cout.tie(0);
	ios_base::sync_with_stdio(false);

	vector<int> v(4);
	for (int i = 0; i < 4; ++i) cin >> v[i];

	sort(v.begin(), v.end());

	int a = v[0] + v[3];
	int b = v[1] + v[2];

	cout << max(a, b) - min(a, b);

	return 0;
}

//Finish