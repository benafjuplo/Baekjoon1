/*
- Title : Hyper-Branch Pruning
- Start Time : 24-07-15, ??:??, 24-07-16, ??:??
- End Time : 24-07-16, 05:26
- Try : 2(1:Typo)
- Category : unoredered_set, recursive
*/

#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<unordered_set>

const int IC = 2047;	// Input Case : 2047
const int D = 11; // Dimension : 11

using namespace std;

void select(vector<vector<int>>& LR, unordered_set<string>& tested, vector<int> &result, int n, bool& find) {
	if (find)
		return;
	if (n < D-1) {
		for (int i = 0; i < 2; i++) {
			if (!find) {
				result[n] = LR[n][i];
				select(LR, tested, result, n + 1, find);
			}
		}
	}
	else {
		for (int i = 0; i < 2; i++) {
			if (!find) {
				result[n] = LR[n][i];
				string str;
				for (int i = 0; i < D; i++) {
					str += to_string(result[i]) + " ";
				}
				if (tested.insert(str).second) {
					find = true;
					return;
				}
			}
		}
		
	}
}

int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(false);

	vector<vector<int>> LR(D, vector<int>(2));	//vector of L : 0, R : 1
	for (int i = 0; i < D; i++) {
		LR[i][0] = 9'000'000; // L
		LR[i][1] = -9'000'000; // R
	}

	unordered_set<string> tested;

	for (int i = 0; i < IC; i++) {
		string str;
		for (int j = 0; j < D; j++) {
			int n;
			cin >> n;
			str += to_string(n) + " ";
			LR[j][0] = min(n, LR[j][0]);
			LR[j][1] = max(n, LR[j][1]);
		}
		tested.insert(str);
	}

	vector<int> result(D);
	bool find = false;
	select(LR, tested, result, 0, find);

	for (int i = 0; i < D; i++) {
		cout << result[i] << " ";
	}	
}

//Finish