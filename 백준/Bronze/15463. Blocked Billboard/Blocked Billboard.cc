/*
- Title : 15463 - Blocked BillBoard
- Start Time : 24-07-03, 10:10
- End Time : 
- Try : 
- Category : 
*/

#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(false);

	int x1[3];
	int x2[3];
	int y1[3];
	int y2[3];
	for (int i = 0; i < 3; i++) {
		cin >> x1[i] >> y1[i] >> x2[i] >> y2[i];
	}
	
	int area[2];

	for (int i = 0; i < 2; i++) {
		area[i] = (x2[i] - x1[i]) * (y2[i] - y1[i]);
		if (x2[i] <= x1[2] || y2[i] <= y1[2] || x2[2] <= x1[i] || y2[2] <= y1[i])
			continue;
		int newx1 = max(x1[i], x1[2]);
		int newx2 = min(x2[i], x2[2]);
		int newy1 = max(y1[i], y1[2]);
		int newy2 = min(y2[i], y2[2]);
		area[i] -= (newx2 - newx1) * (newy2 - newy1);
	}

	cout << area[0] + area[1] << "\n";
}
