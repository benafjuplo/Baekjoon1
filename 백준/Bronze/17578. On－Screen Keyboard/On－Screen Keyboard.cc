/*
- Title : 17578 - On-Screen Keyboard
- Start Time : 25-08-12, 16:09
- End Time : 25-08-12, 16:20
- Try : 1
- Category : string, unordered_map, simulation, manhattan distance, mathematics
- Language : C++20
*/

/* 한국어 주석
unordered_map이 아닌 vector 2개로도 구현이 가능하다.
*/

#include<iostream>
#include<unordered_map>
#include<string>
#include<cstdlib>

using namespace std;

inline int calcDistance(pair<int, int> a, pair<int, int> b) {
	return abs(a.first - b.first) + abs(a.second - b.second);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	//cout.tie(0);

	int h, w;
	cin >> h >> w;

	while (h != 0 && w != 0) {
		unordered_map<char, pair<int, int>> um;

		for (int i = 0; i < h; ++i) {
			for (int j = 0; j < w; ++j) {
				char c;
				cin >> c;
				if (c == '_')
					continue;
				else
					um[c] = { i,j };
			}
		}

		string str;
		cin >> str;

		int result = 0;

		size_t strSize = str.size();

		pair<int, int> curr = { 0,0 };

		for (int i = 0; i < strSize; ++i) {
			pair<int, int> next = um[str[i]];
			result += calcDistance(curr, next) + 1;
			curr = next;
		}

		cout << result << "\n";

		cin >> h >> w;
	}

	return 0;
}

// Finish