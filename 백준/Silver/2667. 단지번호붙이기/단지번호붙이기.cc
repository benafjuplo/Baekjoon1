/*
 - Title : 2667 - Numbering Complexes
 - Start Time : 24-05-06, 03:45
 - End Time : 24-05-06, 04:28
 - Try : 1
*/

#include<iostream>
#include<vector>
#include<string>
#include<queue>
#include<algorithm>
using namespace std;

struct point {
	int i;
	int j;
	point(int i, int j) {
		this->i = i;
		this->j = j;
	}
};

void checkLeftRIghtUpDown(queue<point>& q, vector<string>& map, vector<vector<bool>>& isSearched, int i, int j, int N) {
	//Up
	if (i - 1 >= 0) {
		if (!isSearched[i-1][j]) 
			if (map[i - 1][j] == '1') {
				point pt(i - 1, j);
				isSearched[pt.i][pt.j] = true;
				q.push(pt);
			}
	}

	//Down
	if (i + 1 < N) {
		if (!isSearched[i + 1][j])
			if (map[i + 1][j] == '1') {
				point pt(i + 1, j);
				isSearched[pt.i][pt.j] = true;
				q.push(pt);
			}
	}

	//Left
	if (j - 1 >= 0) {
		if (!isSearched[i][j-1])
			if (map[i][j - 1] == '1') {
				point pt(i, j - 1);
				isSearched[pt.i][pt.j] = true;
				q.push(pt);
			}
	}

	//Right
	if (j + 1 < N) {
		if (!isSearched[i][j + 1])
			if (map[i][j + 1] == '1') {
				point pt(i, j + 1);
				isSearched[pt.i][pt.j] = true;
				q.push(pt);
			}
	}

}

int countUsingBFS(vector<string> &map, vector<vector<bool>> &isSearched, int i, int j, int N) {
	int cnt = 0;
	queue<point> q;
	point pt(i, j);
	q.push(pt);
	isSearched[pt.i][pt.j] = true;

	while (!q.empty()) {
		pt = q.front();
		cnt++;
		q.pop();
		checkLeftRIghtUpDown(q, map, isSearched, pt.i, pt.j, N);
	}

	return cnt;
}

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N;
	cin >> N;

	vector<string> map;

	for (int i = 0; i < N; i++) {
		string str;
		cin >> str;
		map.push_back(str);
	}

	vector<int> cnt;

	vector<vector<bool>>  isSearched(N, vector<bool>(N, false));

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (!isSearched[i][j]) {
				if (map[i][j] == '0') {
					isSearched[i][j] = true;
				}
				else {
					cnt.push_back(countUsingBFS(map, isSearched, i, j, N));
				}
			}
		}
	}

	sort(cnt.begin(), cnt.end());

	cout << cnt.size() << "\n";

	for (int i = 0; i < cnt.size(); i++) {
		cout << cnt[i] << "\n";
	}
}

//Finish