/*
- Title : 25706 - Bicycle Stunt
- Start Time : 24-07-30, 10:40
- End Time : 24-07-30, 11:05
- Try : 1
- Category : dynamic programming(DP)
*/

#include<iostream>
#include<vector>

using namespace std;

void calculateMove(vector<int>& jump, vector<int> &move, int x) {
	if (move[x] != -1)
		return;
	else {
		if (x + jump[x] + 1 >= jump.size())
			move[x] = 1;
		else {
			if (move[x + jump[x] + 1] == -1)
				calculateMove(jump, move, x + jump[x]+1);
			move[x] = move[x + jump[x] + 1] + 1;
		}
		return;
	}
}

int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(false);

	int N;
	cin >> N;

	vector<int>jump(N);

	for (int i = 0; i < N; i++) {
		cin >> jump[i];
	}

	vector<int>move(N, -1);

	for(int i = 0 ;i<N;i++)
		calculateMove(jump, move, i);

	for (int i = 0; i < N; i++) {
		cout << move[i] << " ";
	}
}

//Finish