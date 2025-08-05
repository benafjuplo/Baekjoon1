	/*
	- Title : 2435 - Korea Meteorological Administration Intern Shin Hyunsoo
	- Start Time : 25-08-05, 22:09
	- End Time : 25-08-05, 22:29
	- Try : 1
	- Category : sliding window, prefix sum, brute force
	- Language : C++20
	*/

	/* 한국어 주석
	설명 생략.
	*/

	#include<iostream>
	#include<vector>

	using namespace std;

	int main() {
		ios_base::sync_with_stdio(false);
		cin.tie(0);
		//cout.tie(0);

		int n, k;
		cin >> n >> k;
	
		vector<int> v(n);
		for (int i = 0; i < n; ++i)
			cin >> v[i];

		int window = 0;

		for (int i = 0; i < k; ++i) {
			window += v[i];		
		}

		int result = window;

		for (int i = k; i < n; ++i) {
			window += v[i];
			window -= v[i - k];
			if (window > result)
				result = window;
		}

		cout << result;

		return 0;
	}

	// Finish