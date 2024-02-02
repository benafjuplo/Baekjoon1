#include<iostream>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int T;
	cin >> T;
	int room[15][14];
	for (int i = 0; i <= 14; i++) {
		for (int j = 0; j < 14; j++) {
			if(i == 0)
				room[i][j] = j+1;
			else {
				if (j == 0)
					room[i][j] = room[i-1][j];
				else {
					room[i][j] = room[i - 1][j] + room[i][j - 1];
				}
			}
		}
	}

	for (int i = 0; i < T; i++) {
		int k, n;
		cin >> k >> n;
		cout << room[k][n - 1] << "\n";
	}

}