/*
- Title : 17290 - Crazy_aRcade_Good
- Start Time : 24-08-08, 22:??
- End Time : 24-08-08, 23:02
- Try : 2(1 : mathematics)
- Category : 2D - Array
*/

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(false);

	int r, c;
	cin >> r >> c;
	r--;
	c--;

	const int SIZE = 10;

	vector<bool> columnBomb(SIZE, false);
	vector<bool> rowBomb(SIZE, false);

	for (int i = 0; i < SIZE; i++){
		for (int j = 0; j < SIZE; j++) {
			char board;
			cin >> board;
			if (board == 'o') {
				rowBomb[i] = true;
				columnBomb[j] = true;
			}
		}
	}

	int rowDistance = 11;
	int columnDistance = 11;

	for (int i = 0; i < SIZE; i++) {	
		if (rowBomb[i] == false)
			if (i >= r)
				rowDistance = min(rowDistance, i - r);
			else
				rowDistance = min(rowDistance, r - i);
		if (columnBomb[i] == false)
			if (i >= c)
				columnDistance = min(columnDistance, i - c);
			else
				columnDistance = min(columnDistance, c - i);
	}

	cout << rowDistance + columnDistance;
}

//Finish