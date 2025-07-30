/*
- Title : 28064 - LeeMinHeeJin
- Start Time : 25-07-21, 16:??
- End Time : 25-07-21, 16:50
- Try : 1
- Category : string, string_view, brute force
- Language : C++20
*/

/* 한국어 주석
string_view를 사용하면 substr로 빠른 속도의 비교가 가능하다.
*/

#include<iostream>
#include<string>
#include<string_view>
#include<vector>
#include<algorithm>

using namespace std;

inline bool checkConnectable(const string_view& a, const string_view b) {
	int lenA = a.size();
	int lenB = b.size();
	int maxK = min(lenA, lenB);

	for (int k = 1; k <= maxK; ++k) {
		if (a.substr(lenA - k, k) == b.substr(0, k) ||
			a.substr(0, k) == b.substr(lenB - k, k)) {
			return true;
		}
	}

	return false;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	//cout.tie(0);

	int n;
	cin >> n;

	vector<string> v(n);

	for (int i = 0; i < n; ++i) 
		cin >> v[i];	

	int result = 0;

	for (int i = 0; i < n; ++i) {
		for (int j = i + 1; j < n; ++j) {
			if (checkConnectable(v[i], v[j]))	result++;
		}
	}

	cout << result;

	return 0;
}

// Finish