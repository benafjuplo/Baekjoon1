/*
- Title : 1371 - Most Frequent Character
- Start Time : 25-07-22, 17:04
- End Time : 25-07-22, 17:38
- Try : 1
- Category : string, sorting, unordered_map
- Language : C++20
*/

/* 한국어 주석
unordered_map 보다 배열에 순차적으로 카운트하여 정렬없이 최댓값을 찾은 후
최댓값과 같은 경우에 대해서 출력하는 것이 오히려 깔끔할 것 같다.
*/

#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<unordered_map>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	//cout.tie(0);
	
	unordered_map<char, int> m;

	string str;

	while (cin >> str) {
		size_t len = str.size();
		for (int i = 0; i < len; ++i)
			m[str[i]]++;
	}

	vector<pair<char, int>> alphabets(m.begin(), m.end());
	sort(alphabets.begin(), alphabets.end(),
		[](pair<char,int> &a, pair<char, int>& b) {
			if (a.second != b.second) {
				return a.second > b.second;
			}
			else {
				return a.first < b.first;
			}
		}
	);

	int maxVal = alphabets[0].second;

	for (auto& x : alphabets) {
		if (maxVal == x.second)
			cout << x.first;
		else
			break;
	}

	return 0;
}

// Finish