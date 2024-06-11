/*
- Title : 18221 - Professor, I want to get a job
- Start Time : 24-06-06, 23:53
- End Time : 24-06-07, 00:36
- Try : 3(Typing Mistake : 2)
*/

#include<iostream>
#include<cmath>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N;
	cin >> N;

	vector<vector<int>> v(N, vector<int>(N, 0));

	auto seonggyu = make_pair(0, 0);
	auto professor = make_pair(0, 0);

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> v[i][j];
			if (v[i][j] == 2) 
				seonggyu = make_pair(i, j);
			if (v[i][j] == 5)
				professor = make_pair(i, j);
		}
	}

	if (sqrt(pow((seonggyu.first - professor.first), 2) + pow((seonggyu.second - professor.second), 2)) < 5) {
		cout << 0 << "\n";
		return 0;
	}

	// same row
	if (seonggyu.first == professor.first) {
		int cnt = 0;
		int i = seonggyu.first;
		for (int j = min(seonggyu.second, professor.second) + 1; j < max(seonggyu.second, professor.second); j++) {
			if (v[i][j] == 1)
				cnt++;
		}

		if (cnt < 3) {
			cout << 0 << "\n";
			return 0;
		}	
	}

	// same column
	else if (seonggyu.second == professor.second) {
		int cnt = 0;
		int j = seonggyu.second;
		for (int i = min(seonggyu.first, professor.first) + 1; i < max(seonggyu.first, professor.first); i++) {
			if (v[i][j] == 1)
				cnt++;
		}

		if (cnt < 3) {
			cout << 0 << "\n";
			return 0;
		}
	}

	// rect
	else {
		int minColumn = min(seonggyu.first, professor.first);
		int maxColumn = max(seonggyu.first, professor.first);
		int minRow = min(seonggyu.second, professor.second);
		int maxRow = max(seonggyu.second, professor.second);

		int cnt = 0;
		for (int i = minColumn; i <= maxColumn; i++) {
			for (int j = minRow; j <= maxRow; j++) {
				if (v[i][j] == 1)
					cnt++;
			}
		}

		if (cnt < 3) {
			cout << 0 << "\n";
			return 0;
		}
	}

	cout << 1 << "\n";
}

//Finish