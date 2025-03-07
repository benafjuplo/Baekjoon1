/*
- Title : 25058 - Bottle Arrangements
- Start Time : 25-03-07, 00:01
- End Time : 25-03-07, 00:10
- Try : 1
- Category : string
- Language : C++20
*/

/* 한국어 주석
필요한 레드 와인의 최소 개수와 필요한 화이트 와인의 최소 개수의 합이 전체 와인의 개수보다 많다면 불가능하고
그렇지 않다면 단순히 R과 W를 나누어 만든 문자열로 각각의 평론가들에 맞는 구간을 만들 수 있다.
*/

#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main() {
	cin.tie(0);
	//cout.tie(0);
	ios_base::sync_with_stdio(false);

	int t;
	cin >> t;
	while (t--) {


		int wines, critics;
		cin >> wines >> critics;

		int minRed = 0;
		int minWhite = 0;

		for (int i = 0; i < critics; ++i) {
			int ri, wi;
			cin >> ri >> wi;
			minRed = max(ri, minRed);
			minWhite = max(wi, minWhite);
		}

		if (wines < minRed + minWhite) cout << "IMPOSSIBLE" << "\n";
		else {
			string result = "";
			for (int i = 0; i < minRed; ++i) result += "R";
			for (int i = 0; i < minWhite; ++i) result += "W";
			for (int i = 0; i < wines - minRed - minWhite; ++i) result += "W";
			cout << result << "\n";
		}
	}

	return 0;
}

//Finish
