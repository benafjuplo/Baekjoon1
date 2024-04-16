/* 2563 - Colored Paper */

#include<iostream>
#include<vector>
using namespace std;

void makeblack(int x, int y, vector<vector<bool>> &rect) {
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			rect[x+i][y+j] = true;
		}
	}
}

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;

	vector<vector<bool>> rect(100, vector<bool>(100, false));

	for (int i = 0; i < n; i++) {
		int x, y;
		cin >> x >> y;
		makeblack(x, y, rect);
	}

	int cnt = 0;

	for (int i = 0; i < 100; i++) {
		for (int j = 0; j < 100; j++) {
			if (rect[i][j] == true)
				cnt++;
		}
	}

	cout << cnt;
}

//Finish