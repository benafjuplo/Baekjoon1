/*
- Title : 32218 - Pet Junse
- Start Time : 25-12-31, 02:57
- End Time : 25-12-31, 03:21
- Try : 1
- Category : simulation
- Language : C++20
*/

/* 한국어 주석
문제에 언급된 무한히 반복되는 경우는 아래와 같은 이유로 발생하지 않는다.

Bi는 개수를 나타내기에 1회 실행 후 모든 원소는 0 이상의 정수가 된다.
배열의 오른쪽 끝에서부터 0이 아닌 가장 첫 번째 원소 Am에 대해 다음 실행 결과인 Bm은 반드시 0이 된다.
따라서 매 실행마다 오른쪽부터 이어진 0의 범위가 한 칸 이상 확장되고, 최대 N번 안에 모든 배열이 0이 된다.
*/

#include<iostream>
#include<vector>

using namespace std;

bool isSame(vector<int>& a, vector<int>& b) {
	int size = a.size();
	for (int i = 0; i < size; ++i) {
		if (a[i] != b[i])
			return false;
	}

	return true;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	//cout.tie(0);

	int n;
	cin >> n;

	vector<int> a(n);
	
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}

	int ans = 0;

	while (true) {
		vector<int> b(n, 0);
		
		for (int i = 0; i < n; ++i) {
			for (int j = i + 1; j < n; ++j) {
				if (a[i] < a[j])
					b[i]++;
			}
		}
		ans++;

		if (isSame(a, b))
			break;

		a = b;
	}

	cout << ans;

	return 0;
}
