/*
- Title : 2089 - -2 Base
- Start Time : 25-03-21, 10:00
- End Time : 25-03-21, 11:21
- Try : 1
- Category : mathematics, base conversion, number theory, string
- Language : C++20
*/

/* 한국어 주석
십진수를 이진수로 변환하는 알고리즘을 그대로 적용한다.
하지만 몫과 나머지가 -1일 때 유의해야 한다. 몫과 나머지는 모두 0 혹은 1이어야 한다.
*/

#include<iostream>
#include<string>

using namespace std;

int main() {
	cin.tie(0);
	//cout.tie(0);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;

	string str = "";

	// base conversion algorithm
	while (true) {
		int q = n / -2;			// quotient
		int r = n % -2;			// remainder
		if (r == -1) {			// remove -1 in quotient, remainder
			q++;
			r = 1;
		}

		n = q;

		str.insert(str.begin(), '0' + r);

		if (q == 1) {
			str.insert(str.begin(), '0' + q);
			break;
		}
		else if (q == 0)
			break;
		else if (q == -1) {
			str = "11" + str;		 // remove -1 in quotient, remainder
			break;
		}
	}

	cout << str;

	return 0;
}

// Finish