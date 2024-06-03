/*
- Title : 2630 - Making Colored Paper
- Start Time : 24-06-02, 00:13, 00:34
- End Time :   24-06-02, 00:15, 01:05
- Try : 1
*/

#include<iostream>
#include<vector>

using namespace std;

inline bool isColoredPaper(vector<vector<int>> &v, int size, int x, int y) {
	int first = v[x][y];
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (v[x + i][y + j] != first)
				return false;
		}
	}

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			v[x + i][y + j] = 2;
		}
	}
	return true;
}

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N;
	cin >> N;

	vector<vector<int>> v(N, vector<int>(N));

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			int x;
			cin >> x;
			v[i][j] = x;
		}
	}

	int size = N;
	int num[2] = { 0, 0 };

	while (size > 0) {
		for (int i = 0; i < N; i = i + size) {
			for (int j = 0; j < N; j = j + size) {
				int current = v[i][j];
				if (current != 2) {
					if (size == 1) {
						num[current]++;
					}
					else {
						if (isColoredPaper(v, size, i, j))
							num[current]++;
					}
				}
			}
		}
		size /= 2;
	}
	
	cout << num[0] << "\n" << num[1] << "\n";
}

//Finish
//Submit