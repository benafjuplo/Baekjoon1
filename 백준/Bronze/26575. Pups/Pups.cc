/*
- Title : 26575 - Pups
- Start Time : 25-01-19, 19:58
- End Time : 25-01-19, 20:02
- Try : 1
- Category : mathematics, simple, basic, elementary arithmetic, round-off, setprecision, fixed
- Language : C++20
*/

/* 한국어 주석
질문 게시판에 따르면 강아지의 개수 d가 소수점인 경우가 주어질 수 있다고 되어있음에 주의한다.
*/

#include<iostream>
#include<iomanip>

using namespace std;

int main() {
	cin.tie(0);
	//cout.tie(0);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;
	while (n--) {
		double d, f, p;
		cin >> d >> f >> p;
		
		double result;
		result = d * f * p;
		cout << setprecision(2) << fixed;
		cout << "$" << result << "\n";
	}

	return 0;
}

//Finish