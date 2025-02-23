/*
- Title : 19945 - New Language CC
- Start Time : 25-02-23, 21:27
- End Time : 25-02-23, 21:32
- Try : 1
- Category : bitset, string
- Language : C++20
*/

/* 한국어 주석
<bitset> 라이브러리의 bitset 자료형을 사용하면 숫자를 이진수로 표현 가능하고, 이후 bitset의 멤버 함수 to_string()을 사용하여 문자열로 변환한다.
이후 간단한 알고리즘을 문제를 해결할 수 있다. 0인 경우 정답이 1이라는 것에 주의한다.
*/

#include<iostream>
#include<bitset>
#include<string>

using namespace std;

int main() {
	cin.tie(0);
	//cout.tie(0);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;
	if (n == 0) {
		cout << 1;
		return 0;
	}
	bitset<32> bs(n);
	string str = bs.to_string();
	int leadingZero = 0;
	for (leadingZero = 0; leadingZero < str.size(); ++leadingZero) {
		if (str[leadingZero] == '1')
			break;
	}
	cout << str.size() - leadingZero;

	return 0;
}

//Finish