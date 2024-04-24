/* 1977 - Square Number */

#include<iostream>
#include<vector>
#include<algorithm>
#include<iterator>
#include<limits.h>
using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	vector<int> square;

	for (int i = 1; i <= 10000; i++) {
		square.push_back(i * i);
	}

	int M, N;
	cin >> M >> N;

	int sum = 0;
	int min = INT_MAX;

	for (int i = M; i <= N; i++) {
		if (square.end() != find(square.begin(), square.end(), i)) {
			if (i < min)
				min = i;
			sum += i;
		}
	}

	if (sum == 0)
		cout << -1;
	else
		cout << sum << "\n" << min;
}

//Finish