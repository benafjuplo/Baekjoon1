/*
- Title : 19944 - What defines a newbie
- Start Time : 25-02-19, 23:58
- End Time : 25-02-20, 00:01
- Try : 1
- Category : simple, basic
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

	int N, M;
	cin >> N >> M;
	if (1 <= M && M <= 2) cout << "NEWBIE!";
	else if (M <= N) cout << "OLDBIE!";
	else cout << "TLE!";

	return 0;
}

//Finish