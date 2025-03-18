/*
- Title : 17028 
- Start Time : 25-03-17, 10:??
- End Time : 25-03-17, 11:01
- Try : 1
- Category : greedy algorithm, sorting
- Language : C++20
*/

/* 한국어 주석
뒤에서부터 앞이 뒤보다 큰 경우를 탐색한다.
탐색된 부분까지 삽입 정렬을 수행해야 한다.
삽입 정렬은 그 개수만큼 수행하면 되므로 그 위치까지의 원소 개수가 정답이다.
탐색된 부분이 없으면 이미 정렬된 경우이다. 그런 경우에는 0이 정답이다.
*/

#include<iostream>
#include<vector>

using namespace std;

int main() {
	cin.tie(0);
	//cout.tie(0);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;

	if (n == 1) {
		cout << 0;
		return 0;
	}

	vector<int> v(n);

	for (auto& x : v)
		cin >> x;	

	for (int i = v.size() - 2;i >= 0;--i) {
		if (v[i] > v[i + 1]) {
			cout << i + 1;
			return 0;
		}
	}

	cout << 0;

	return 0;
}

//Finish