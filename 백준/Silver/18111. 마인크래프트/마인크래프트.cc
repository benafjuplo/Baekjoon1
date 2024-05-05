/* 18111 - Minecraft */

#include<iostream>
#include<vector>
using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	unsigned int N, M, B;
	cin >> N >> M >> B;

	vector<vector<int>> map;

	bool isPossible[257] = { false };
	unsigned int cost[257] = { 0 };

	// initialize map
	for (int i = 0; i < N; i++) {
		vector<int> tempV;
		for (int j = 0; j < M; j++) {
			int temp;
			cin >> temp;
			tempV.push_back(temp);
		}
		map.push_back(tempV);
	}

	// debug initialize map
	/*for (int i = 0; i < N; i++) {
		vector<int> tempV;
		for (int j = 0; j < M; j++) {
			int temp = i % 250;
			tempV.push_back(temp);
		}
		map.push_back(tempV);
	}*/

	for (int h = 0; h < 257; h++) {
		long long currentBlock = B;
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < M; j++) {
				if (map[i][j] >= h) {
					int diff = map[i][j] - h;
					cost[h] += 2 * diff;
					currentBlock += diff;
				}
				else {
					int diff = h - map[i][j];
					cost[h] += diff;
					currentBlock -= diff;
				}
			}
		}
		

		if (currentBlock >= 0) {
			isPossible[h] = true;
		}

		//debug
		//cout << h << " : " << cost[h] << ", isPossible : " << isPossible[h] << ", currentBlock : " << currentBlock << "\n";
	}

	unsigned int min = 300'000'000; // 256 * 2 * 500 * 500 = 128,000,000
	int height = -1;
	for (int i = 0; i < 257; i++) {
		if (min >= cost[i]) {
			if (isPossible[i]) {
				min = cost[i];
				height = i;
			}
		}
	}

	cout << cost[height] << " " << height;
}

//Finish