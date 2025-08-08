/*
- Title : 11008 - Typing
- Start Time : 25-08-08, 21:18
- End Time : 25-08-08, 21:44
- Try : 1
- Category : string
- Language : C++20
*/

/* 한국어 주석
find 함수를 사용하여 비교한다. for문과 compare 함수도 가능하다.
*/

#include<iostream>
#include<string>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	//cout.tie(0);

	int t;
	cin >> t;

	while (t--) {
		string s, p;
		cin >> s >> p;

		int result = 0;

		size_t pos = 0;
		size_t prev = 0;

		while (pos != string::npos) {
			pos = s.find(p, pos);
			if (pos != string::npos) {
				result += pos - prev + 1;
				pos += p.size();
				prev = pos;
			}
			else
				result += s.size() - prev;
		}
		cout << result << "\n";
	}

	return 0;
}

// Finish