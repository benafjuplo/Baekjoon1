/*
- Title : 20709 - Kate's 2021 Celebration
- Start Time : 25-02-27, 23:59
- End Time : 25-02-28, 00:09
- Try : 1
- Category : string, sorting
- Language : C++20
*/

/* 한국어 주석
설명 생략.
*/

#include<iostream>
#include<vector>
#include<algorithm>
#include<string>

using namespace std;

inline bool isPossible(const string& str) {
	int cnt2 = 0;	// 2
	int cnt0 = 0;	// 1
	int cnt1 = 0;	// 1

	for (int i = 0; i < str.size(); ++i) {
		if (str[i] == '2') cnt2++;
		else if (str[i] == '0') cnt0++;
		else if (str[i] == '1') cnt1++;
			
		if (cnt2 >= 2 && cnt0 >= 1 && cnt1 >= 1) return true;
	}

	return false;
}

int main() {
	cin.tie(0);
	//cout.tie(0);
	ios_base::sync_with_stdio(false);

	int N;
	cin >> N;

	vector<pair<int, int>> possiblePacks;

	for (int i = 1; i <= N; ++i) {
		int price;
		string ballon;
		cin >> price >> ballon;
		if (isPossible(ballon)) possiblePacks.push_back({ price, i });
	}

	if (possiblePacks.size() == 0) cout << 0;

	else {
		sort(possiblePacks.begin(), possiblePacks.end());
		cout << possiblePacks.front().second;
	}

	return 0;
}

//Finish