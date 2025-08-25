/*
- Title : 33622 - Don’t cut in line!!!
- Start Time : 25-08-25, 21:35
- End Time : 25-08-25, 21:36
- Try : 1
- Category : mathematics, probability
- Language : C++20
*/

/* 한국어 주석
주어진 문제대로 확률을 계산하면 아래와 같다.
처음 서로의 사이에 존재하는 사람의 수를 n이라 하고, k1, k2, ..., kn을 제치고하자 하는 사람의 수라고 하자.
k1, k2만 표기시 (1 - k1/(n+1)) * (1 - k2/(n+1-k1)) = (n+1-k1)/(n+1) * (n+1-k1-k2)/(n+1-k1) = (n+1-k1-k2)/(n+1)이다.
이때 k1 + k2 = n이다. 따라서 1/(n+1)이 된다.

정리하면 k1, k2, ..., kn을 제칠 확률은 (n+1-k1-k2-...-kn)/(n+1) = (n+1-n)/(n+1) = 1/(n+1)이다.
어떤 방법으로 하여도 확률은 1/(n+1)로 같으므로 가장 간단한 "1\n"과"n"을 출력하면 된다.
*/

#include<iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	//cout.tie(0);

	int n;
	cin >> n;
	cout << 1 << '\n';
	cout << n << '\n';

	return 0;
}

// Finish