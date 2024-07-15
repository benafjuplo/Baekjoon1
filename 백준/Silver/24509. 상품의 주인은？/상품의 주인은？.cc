/*
- Title : 24509 - Who is the owner of the prize?
- Start Time : 24-07-15, 21:16
- End Time : 24-07-15, 21:44
- Try :	1
- Category : Sorting, Pair
*/

#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(false);

	int N;
	cin >> N;

	vector<vector<pair<int, int>>> score(4, vector<pair<int, int>>(N));

	for (int i = 0; i < N; i++) {
		int X; // Student's ID
		cin >> X;

		int A, B, C, D; // Student's Korean, English, Mathmatics, Science score
		cin >> A >> B >> C >> D;
		score[0][i] = make_pair(X, A);
		score[1][i] = make_pair(X, B);
		score[2][i] = make_pair(X, C);
		score[3][i] = make_pair(X, D);
	}

	for (int i = 0; i < 4; i++)
		sort(score[i].begin(), score[i].end(),
			[](const pair<int, int>& a, const pair<int, int>& b) {if (a.second != b.second) { return a.second > b.second; } else { return a.first < b.first; }});

	int prize[4] = { -1,-1,-1,-1 };

	prize[0] = score[0].front().first;

	for (int i = 0; i < 4; i++) {
		int j = 0;
		while (prize[i] == -1) {
			bool isDuplication = false;
			for (int k = 0; k < i; k++)
				if (score[i][j].first == prize[k])
					isDuplication = true;
			if(!isDuplication)
				prize[i] = score[i][j].first;
			j++;
		}
	}

	for (int i = 0; i < 4; i++) {
		cout << prize[i] << " ";
	}

}

//Finish