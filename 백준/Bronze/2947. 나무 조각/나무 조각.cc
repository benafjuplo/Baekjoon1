/*
- Title : 2947 - Wooden piece
- Start Time : 25-09-04, 13:23
- End Time : 25-09-04, 13:25
- Try : 1
- Category : simulation, bubble sort
- Language : C++20
*/

/* 한국어 주석
버블 정렬을 단계별로 출력하는 문제이다.
*/

#include<iostream>
#include<vector>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	//cout.tie(0);

	vector<int> v(5);
	for (int i = 0; i < 5; i++) {
		cin >> v[i];
	}

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4 - i; j++) {
			if (v[j] > v[j + 1]) {
				swap(v[j], v[j + 1]);
				for (int k = 0; k < 5; k++) {
					cout << v[k] << ' ';
				}
				cout << '\n';
			}
		}
	}

	return 0;
}

// Finish