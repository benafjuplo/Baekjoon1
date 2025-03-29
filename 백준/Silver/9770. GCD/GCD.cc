/*
- Title : 9770
- Start Time : 25-03-26, 15:44
- End Time : 25-03-26, 15:53
- Try : 1
- Category : mathematics, number theory, gcd, numeric, euclidean algorithm, C++17
- Language : C++20
*/

/* 한국어 주석
입력의 개수가 주어지지 않은 경우 while문과 cin >> x를 조합하여 입력을 받는다.
최대공약수의 경우 C++17부터는 <numeric> 라이브러리의 gcd() 함수를 사용하면 된다.
그 이전의 버전일 경우, 유클리드 호제법을 사용하여 구한다. 해당 방법은 주석에 포함해두었다.
*/

#include<iostream>
#include<vector>
#include<numeric>			// for gcd(), since C++17
#include<algorithm>

using namespace std;

// Euclidean algorithm
//int gcd(int a, int b) {
//	while (b != 0) {
//		int temp = a % b;
//		a = b;
//		b = temp;
//	}
//
//	return a;
//}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	//cout.tie(0);

	vector<int> v;

	int x;
	while (cin >> x) {
		v.push_back(x);
	}

	sort(v.rbegin(), v.rend());

	size_t vSize = v.size();

	int maxGCD = 0;

	for (int i = 0; i < vSize;++i) {
		int x = v[i];
		if (maxGCD > x)
			break;
		for (int j = i+1; j < vSize;++j) {
			int y = v[j];

			if (maxGCD > y)
				break;

			maxGCD = max(maxGCD, gcd(x, y));			// since C++17
		}
	}

	cout << maxGCD;

	return 0;
}

// Finish