/*
- Title : 4562 - No Brainer
- Start Time : 24-12-26, 00:04
- End Time : 24-12-26, 00:07
- Try : 1
- Category :simple, basic
- Language : C++20
*/

/* 한국어 주석
X>=Y인 경우 "MMM BRAINS"를 출력하고 X<Y인 경우 "NO BRAINS"를 출력한다.
추가적인 설명은 생략한다.
*/

#include<iostream>

using namespace std;

int main() {
	cin.tie(0);
	//cout.tie(0);
	ios_base::sync_with_stdio(false);

	int N;
	cin >> N;
	while (N--) {
		int X, Y;
		cin >> X >> Y;
		if (X >= Y) cout << "MMM BRAINS\n";
		else cout << "NO BRAINS\n";
	}

	return 0;
}

//Finish