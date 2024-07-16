/*
- Title : 16401 - Distributing Snacks
- Start Time : 24-07-16, 09:23
- End Time : 24-07-16, 10:10
- Try : 1
- Category : Advanced binary search, Parametric search
*/

#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

bool isPossible(vector<int>& v, int M, int N, int x) {
	int cnt = 0;

	for (int i = 0; i < N; i++) {
		if (v[N - 1 - i] < x)
			break;
		else {
			cnt += v[N - 1 - i] / x;
		}
	}	
	return cnt >= M;
}

int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(false);

	//Input
	int M, N;
	cin >> M >> N;
	vector<int> v(N);
	for (int i = 0; i < N; i++) {
		cin >> v[i];
	}

	sort(v.begin(), v.end());

	if (!isPossible(v, M, N, 1)) {
		cout << 0;
		return 0;
	}

	//Binary Search
	int left = 1;
	int right = v.back();
	int mid = (left + right) / 2;
	while (left < right) {
		mid = (left + right) / 2;
		if (isPossible(v, M, N, mid)) {
			if (mid == left)
				break;
			else
				left = mid;
		}
		else
			right = mid - 1;
	}

	if(isPossible(v, M, N, right))
		cout << right << "\n";
	else
		cout << left << "\n";
}

//Finish