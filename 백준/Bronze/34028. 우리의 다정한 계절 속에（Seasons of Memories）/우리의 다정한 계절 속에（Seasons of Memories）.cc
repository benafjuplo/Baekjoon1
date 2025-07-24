/*
- Title : 34028 - Seasons of Memories
- Start Time : 25-07-24, 09:05
- End Time : 25-07-24, 09:17
- Try : 1
- Category : mathematics, elementary arithmetic
- Language : C++20
*/

/* 한국어 주석
설명 생략.
*/

#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	//cout.tie(0);

	int a, b, c;
	cin >> a >> b >> c;

	int result = max(0, a - 2015) * 4;
	if (b <= 2)
		result += 1;
	else if (3 <= b && b <= 5)
		result += 2;
	else if (6 <= b && b <= 8)
		result += 3;
	else if (9 <= b && b <= 11)
		result += 4;
	else
		result += 5;

	cout << result;

	return 0;
}

// Finish