/*
- Title : 16462 - Professor Na's bad handwriting
- Start Time : 25-12-18, 23:31
- End Time : 25-12-18, 23:37
- Try : 1
- Category : mathematics, elementary arithmetic
- Language : C++20
*/

/* 한국어 주석
설명 생략.
*/

#include<iostream>
#include<string>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	//cout.tie(0);

	int N;
	cin >> N;

	int sum = 0;

	for (int i = 0; i < N; ++i) {
		int q;
		cin >> q;
		if (q != 100) {
			string str = to_string(q);
			for (int j = 0; j < str.size(); ++j) {
				if (str[j] == '0' || str[j] == '6') {
					str[j] = '9';
				}
			}
			q = stoi(str);
		}

		sum += q;
	}

	int avg = sum * 10 / N;
	if(avg % 10 >= 5) {
		avg += 10;
	}
	avg /= 10;

	cout << avg << "\n";

	return 0;
}
