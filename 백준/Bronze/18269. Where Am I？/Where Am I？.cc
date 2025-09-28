/*
- Title : 18269 - Where Am I?
- Start Time : 25-09-28, 23:18
- End Time : 25-09-28, 23:39
- Try : 1
- Category : string, unordered_set, binary search, brute force
- Language : C++20
*/

/* 한국어 주석
이 문제는 문자열에서 중복되지 않는 부분 문자열의 최소 길이를 찾는 문제이다.
이진 탐색과 unordered_set을 사용할 수 있다.
또한 n이 작기 때문에 브루트 포스도 가능하다.
*/

#include<iostream>
#include<string>
#include<unordered_set>

using namespace std;

int n;
string s = "";

bool isPossible(int x) {
	unordered_set<string> us;
	for (int i = 0; i <= n - x; i++) {
		string sub = s.substr(i, x);
		if (us.find(sub) != us.end()) return false;
		us.insert(sub);
	}
	return true;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	//cout.tie(0);

	cin >> n;

	cin >> s;

	int left = 1, right = n;
	while (left < right) {
		int mid = (left + right) / 2;
		if (isPossible(mid)) right = mid;
		else left = mid + 1;	
	}

	cout << right << "\n";

	return 0;
}