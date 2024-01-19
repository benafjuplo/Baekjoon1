#include<iostream>
#include<queue>
using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	priority_queue<int> q;

	int max;
	int row, column;

	for (int i = 1; i <= 9; i++) {
		for (int j = 1; j <= 9; j++) {
			int temp;
			cin >> temp;
			q.push(temp);
			if (temp == q.top()) {
				max = temp;
				row = i;
				column = j;
			}
		}
	}

	cout << max << "\n";
	cout << row << " " << column;
}