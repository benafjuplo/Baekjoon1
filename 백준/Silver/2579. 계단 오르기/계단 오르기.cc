/* 2579 - Climbing Stairs */

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//solve using DP
int calMax(int T, const vector<int>&stair) {

	vector<int> totalmax(T + 1, 0);
	vector<int> continuousMax(T + 1, 0);
	vector<int> notcontinuousMax(T +1, 0);

	for (int n = 1; n <= T; n++) {
		if (n == 1) {
			continuousMax[1] = 0;
			notcontinuousMax[1] = stair[1];
			totalmax[1] = stair[1];
		}
		else if (n == 2) {
			continuousMax[2] = notcontinuousMax[1] + stair[2];
			notcontinuousMax[2] = stair[2];
			totalmax[2] = max(continuousMax[2], notcontinuousMax[2]);
		}
		else{
			continuousMax[n] = notcontinuousMax[n - 1] + stair[n];
			notcontinuousMax[n] = totalmax[n - 2] + stair[n];
			totalmax[n] = max(continuousMax[n], notcontinuousMax[n]);
		}
	}

	return totalmax[T];

}

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	vector<int> stair;

	int T;
	cin >> T;

	stair.push_back(0);
	for (int i = 1; i < T+1; i++) {
		int temp;
		cin >> temp;
		stair.push_back(temp);
	}
	
	cout << calMax(T, stair);
}

//Finish