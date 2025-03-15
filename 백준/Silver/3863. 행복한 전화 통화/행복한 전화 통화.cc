/*
- Title : 3863 - Happy Telephones
- Start Time : 25-03-13, 21:19
- End Time : 25-03-13, 21:55
- Try : 1
- Category : brute force, binary search
- Language : C++20
*/

/* 한국어 주석
이진 탐색을 이용하면 매우 조금 이지만 속도가 개선된다.
수직선위에 그려서 조건을 따져보면 좀 더 간단히 해결 가능하다.
*/

#include<iostream>
#include<vector>

using namespace std;

int main() {
	cin.tie(0);
	//cout.tie(0);
	ios_base::sync_with_stdio(false);

	int n, m;
	cin >> n >> m;

	while (n != 0 || m != 0) {
		vector<pair<int, int>> calls(n);

		for (int i = 0; i < n; ++i) {
			int src, dest, start, duration;
			cin >> src >> dest >> start >> duration;

			calls[i].first = start;
			calls[i].second = start+duration;
		}

		for (int i = 0; i < m; ++i) {
			int start, duration;
			cin >> start >> duration;
			int cnt = 0;

			for (int j = 0; j < n; ++j) {
				if (!(calls[j].second <= start || start+duration <= calls[j].first))
					cnt++;
			}

			cout << cnt << "\n";
		}

		cin >> n >> m;
	}	

	return 0;
}

//Finish