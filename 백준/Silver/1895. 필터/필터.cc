/*
- Title : 1895 - Filter
- Start Time : 24-07-05, 22:44
- End Time : 24-07-05, 23:32
- Try : 1
- Category : Brute force, Sorting, 8-Direction
*/

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	cin.tie(0);
	cout.tie(0);

	int R, C;
	cin >> R >> C;

	vector<vector<int>> I(R, vector<int>(C));

	for (int i = 0; i < R; i++) {
		for (int j = 0; j < C; j++) {
			cin >> I[i][j];
		}
	}

	int T;
	cin >> T;

	int cnt = 0;

	int dirX[8] = {1, 0, -1, 0, 1, -1, 1, -1};
	int dirY[8] = {0, 1, 0, -1, 1, -1, -1, 1};

	for (int i = 0; i < R; i++) {
		for (int j = 0; j < C; j++) {
			vector<int> v;
			v.push_back(I[i][j]);
			for (int k = 0; k < 8; k++) {
				int newX = i + dirX[k];
				int newY = j + dirY[k];
				if (newX < 0 || R <= newX || newY < 0 || C <= newY)
					break;
				else {
					v.push_back(I[newX][newY]);
				}
			}
			if (v.size() == 9) {
				sort(v.begin(), v.end());
				if (v[4] >= T)
					cnt++;
			}
		}
	}

	cout << cnt << "\n";
}

//Finish