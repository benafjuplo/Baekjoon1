/*
- Title : 1276 - PLATFORME
- Start Time : 24-08-13, 02:04
- End Time : 24-08-13, 02:23
- Try : 1
- Category : tuple, mathematics, sorting, coordinate plane
*/

#include<iostream>
#include<vector>
#include<algorithm>
#include<tuple>

using namespace std;

int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(false);

	int N;
	cin >> N;

	vector<tuple<int, int, int>> platforms(N);
	vector<int> heightPlatform(10000, 0);

	for (int i = 0; i < N; i++) {
		int Y, X1, X2;
		cin >> Y >> X1 >> X2;
		platforms[i] = make_tuple(Y, X1, X2);
	}

	// Sort platforms by altitude (Y) in ascending order
	sort(platforms.begin(), platforms.end(), [](const tuple<int, int, int>& a, const tuple<int, int, int>& b) { return get<0>(a) < get<0>(b); });

	int lengthColumn = 0;

	// Calculate the total length of pillars needed
	for (int i = 0; i < N; i++) {
		int Y, X1, X2;
		Y = get<0>(platforms[i]);
		X1 = get<1>(platforms[i]);
		X2 = get<2>(platforms[i]);

		// Left pillar length
		lengthColumn += Y - heightPlatform[X1];
		// Right pillar length
		lengthColumn += Y - heightPlatform[X2-1];

		// Update the height map for the range of this platform
		for (int j = X1; j < X2; j++)
			heightPlatform[j] = Y;
	}

	cout << lengthColumn;
}

//Finish