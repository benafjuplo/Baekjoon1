/*
- Title : 26933 - Recipe
- Start Time : 25-01-06, 22:54
- End Time : 25-01-06, 22:56
- Try : 1
- Category : mathematics, simple, basic, elementary arithmetic
- Language : C++20
*/

/* 한국어 주석
설명 생략.
*/

#include<iostream>

using namespace std;

int main() {
	cin.tie(0);
	//cout.tie(0);
	ios_base::sync_with_stdio(false);

	int N;
	cin >> N;

	int cost = 0;

	while (N--) {
		int H, B, K;
		cin >> H >> B >> K;
		if(H < B) cost += (B - H) * K;
	}

	cout << cost;

	return 0;
}

//Finish