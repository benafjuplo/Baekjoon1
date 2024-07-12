/*
- Title : 86 ─Eighty-Six─ 2
- Start Time : 24-07-12, 19:02
- End Time : 24-07-12, 19:22
- Try :	1
- Category : Search
*/

#include<iostream>
#include<vector>

using namespace std;

int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(false);

	int N;
	cin >> N;

	vector<vector<int>>v(N, vector<int>(N));
	int twoX = -1;
	int twoY = -1;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> v[i][j];
			if (v[i][j] == 2) {
				twoX = i; twoY = j;
			}
		}
	}

	bool skipFirst;

	if (twoX % 2 == 1) {		//oddX
		if (twoY % 2 == 0)		//evenY
			skipFirst = true;
		else {					//oddY
			skipFirst = false;
		}
	}
	else {						//evenX
		if (twoY % 2 == 0)		//evenY
			skipFirst = false;
		else {					//oddY
			skipFirst = true;
		}
	}

	bool lena = true;

	for (int i = 0; i < N; i++) {
		int j;
		if (skipFirst)
			j = 1;
		else
			j = 0;
		for (; j < N; j=j+2) {
			if (v[i][j] == 1) {
				lena = false;
				break;
			}
		}
		skipFirst = !skipFirst;
		if (!lena)
			break;
	}

	if (lena)
		cout << "Lena\n";
	else
		cout << "Kiriya\n";
}

//Finish