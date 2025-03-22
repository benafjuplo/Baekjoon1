/*
- Title : 14492 - Boolean Product of Boolean Matrices
- Start Time : 25-03-19, 16:35
- End Time : 25-03-19, 17:??
- Try : 4(1 : not delete debug option, matrix, 1 : matrix leading 0, 1 : & == AND ^ == XOR)
- Category : bitset, linear algebra, mathematics
- Language : C++20
*/

/* 한국어 주석
vector<<bitset>>를 사용하면 빠르게 가능하다.
하지만 행렬곱 시에 열이 필요하므로 행렬 B는 전치해야 한다.
bitset은 거꾸로 인덱싱되므로 주의가 필요하다.
bitset은 정적 크기로만 생성 가능하로 최대 사이즈로 사용하고 나머지는 0으로 처리한다.
C++에서는 AND 연산이 &임에 주의한다. ^는 XOR 연산이다.
*/

#include<iostream>
#include<bitset>
#include<vector>
//#include<string>							// for debugging with output

using namespace std;

int main() {
	cin.tie(0);
	//cout.tie(0);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;

	const int MAX_SIZE = 300;
	//const int MAX_SIZE = 5;

	vector<bitset<MAX_SIZE>> a(n);
	vector<bitset<MAX_SIZE>> b(n);

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			bool v;
			cin >> v;
			a[i][j] = v;					// bitset is reverse
		}
	}

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			bool v;
			cin >> v;
			b[n - 1 - j][i] = v;				// to transpose
		}
	}

	//debug output
	//for (int i = 0;i < n;++i) {
	//	cout << a[i].to_string() << "\n";
	//}
	//cout << "\n";
	//for (int i = 0;i < n;++i) {
	//	cout << b[i].to_string() << "\n";
	//}
	//cout << "\n";

	int result = 0;

	// using c matrix
	//vector<bitset<MAX_SIZE>> c(n, 0);

	//for (int i = 0;i < n;++i) {
	//	for (int j = 0;j < n;++j) {
	//		//bitset<MAX_SIZE> temp = a[i] & b[j];
	//		//debug
	//		//cout << temp.to_string() << "\n";
	//		//c[i][j] = (bool)temp.count();
	//		c[i][j] = (a[i] & b[j]).count();
	//	}
	//}

	//for (int i = 0;i < n;++i) {
	//	//debug output
	//	//cout << c[i].to_string() << "\n";
	//	result += c[i].count();
	//}

	// only counting
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			if ((a[i] & b[j]).count()) {
				result++;
			}
		}
	}

	cout << result;

	return 0;
}

//Finish