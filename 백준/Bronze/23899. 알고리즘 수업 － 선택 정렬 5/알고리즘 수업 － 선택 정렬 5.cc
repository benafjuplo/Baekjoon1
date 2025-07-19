/*
- Title : 23899 - Algorithm Class - Selection Sort 5
- Start Time : 25-07-18, 11:42
- End Time : 25-07-18, 12:08
- Try : 1
- Category : sorting, simulation, selection sort, unordered_map
- Language : C++20
*/

/* 한국어 주석
기본적으로 선택 정렬과 비교를 반복하여 해결 가능한 문제이다.
아래의 방법으로 속도를 개선할 수 있다.

1. 가지치기를 처리 과정 사이에 넣는다.
2. 삽입 정렬을 수행할 원소를 찾을 시 unordered_map을 활용한다.
*/

#include<iostream>
#include<vector>
#include<algorithm>
#include<utility>
#include<unordered_map>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	//cout.tie(0);
	
	int n;
	cin >> n;	

	vector<int> a(n);
	vector<int> b(n);

	unordered_map<int, int> pos;
	pos.reserve(n);

	for (int i = 0; i < n; ++i) {
		cin >> a[i];
		pos[a[i]] = i;
	}

	vector<int> sortedA(a);
	sort(sortedA.begin(), sortedA.end());

	for (int i = 0; i < n; ++i)
		cin >> b[i];

	int mismatches = 0;
	for (int i = 0; i < n; ++i)
		if (a[i] != b[i])
			++mismatches;

	if (mismatches == 0) {
		cout << 1;
		return 0;
	}

	// Selection Sort
	for (int i = n - 1; i > 0; --i) {
		if (a[i] != sortedA[i]) {
			int idx = pos[sortedA[i]];

			if (a[idx] != b[idx]) --mismatches;
			if (a[i] != b[i])   --mismatches;

			swap(a[idx], a[i]);

			if (a[idx] != b[idx]) ++mismatches;
			if (a[i] != b[i])   ++mismatches;

			pos[a[idx]] = idx;
			pos[a[i]] = i;

			if (mismatches == 0) {
				cout << 1;
				return 0;
			}			
		}
	}

	cout << (mismatches == 0);
	return 0;
}

// Finish