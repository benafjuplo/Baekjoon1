/*
- Title : 5300 - Fill the Rowboats!
- Start Time : 25-01-15, 20:36
- End Time : 25-01-15, 20:40
- Try : 1
- Category : simple, basic
- Language : C++20
*/

/* 한국어 주석
설명 생략
*/

#include<iostream>

using namespace std;

int main() {
	cin.tie(0);
	//cout.tie(0);
	ios_base::sync_with_stdio(false);

	int N;
	cin >> N;
	int i = 1;
	for (; i <= N; ++i) {
		cout << i << " ";
		if (i % 6 == 0) cout << "Go! ";
	}
	if ((i-1) % 6 != 0) cout << "Go!";

	return 0;
}

//Finish