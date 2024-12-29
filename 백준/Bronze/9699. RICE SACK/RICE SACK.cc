/*
- Title : 9699 - RICE SACK
- Start Time : 24-12-27, 21:48
- End Time : 24-12-27, 21:52
- Try : 1
- Category : sorting
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

	int T;
	cin >> T;

	vector<int> v(5);
	for (int testCase = 1; testCase <= T; ++testCase) {
		cin >> v[0] >> v[1] >> v[2] >> v[3] >> v[4];
		sort(v.begin(), v.end());
		cout << "Case #" << testCase << ": " << v[4] << "\n";
	}

	return 0;
}

//Finish