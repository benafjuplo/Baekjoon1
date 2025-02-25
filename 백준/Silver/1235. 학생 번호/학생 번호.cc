/*
- Title : 1235 - Student Number
- Start Time : 25-02-24, 20:52
- End Time : 25-02-24, 21:09
- Try : 1
- Category : string, unordered_set
- Language : C++20
*/

/* 한국어 주석
각 서브 문자열에 대하여 unordred_set으로 고유한 N개인지 확인한다.
이진 탐색을 추가하면 평균 검색 횟수를 약간 줄일 수는 있다.
*/

#include<iostream>
#include<string>
#include<unordered_set>
#include<vector>

using namespace std;

bool isPossible(const vector<string>& v, int N) {
	unordered_set<string> s(v.begin(), v.end());
	return s.size() == N;
}

int main() {
	cin.tie(0);
	//cout.tie(0);
	ios_base::sync_with_stdio(false);

	int N;
	cin >> N;

	vector<string> ori(N);
	for (int i = 0; i < N; ++i) cin >> ori[i];

	int length = ori[0].size();

	vector<string> cut(N);

	for (int i = length - 1; i > 0; --i) {
		for (int j = 0; j < N; ++j)
			cut[j] = ori[j].substr(i);
		if (isPossible(cut, N)) {
			cout << length - i;
			return 0;
		}
	}
	cout << length;

	return 0;
}

//Finish