#include<iostream>
#include<string>
#include<vector>
using namespace std;

vector<vector<int>> W;	// Top left = White
vector<vector<int>> B;	// Top left = Black

int calculateW(int x, int y) {
	int res = 0;
	for (int i = x; i < x + 8; i++) {
		for (int j = y; j < y + 8; j++)
			res += W[i][j];
	}
	return res;
}

int calculateB(int x, int y) {
	int res = 0;
	for (int i = x; i < x + 8; i++) {
		for (int j = y; j < y + 8; j++)
			res += B[i][j];
	}
	return res;
}

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N, M;
	cin >> N >> M;


	vector<string> v;
	for (int i = 0; i < N; i++) {
		string temp;
		cin >> temp;
		v.push_back(temp);
	}



	//Initialization
	vector<int> tempV;
	for (int j = 0; j < M; j++) {
		tempV.push_back(0);
	}
	for (int i = 0; i < N; i++) {	
		W.push_back(tempV);
		B.push_back(tempV);
	}

	//Organize
	char row = 'W';
	for (int i = 0; i < N; i++) {
		char now;
		if (row == 'W') {
			now = 'W';
			row = 'B';
		}
		else {
			now = 'B';
			row = 'W';
		}
		for (int j = 0; j < M; j++) {
			if (v[i][j] != now)
				W[i][j] = 1;
			if (now == 'W')
				now = 'B';
			else
				now = 'W';
		}
	}

	row = 'B';
	for (int i = 0; i < N; i++) {
		char now;
		if (row == 'W') {
			now = 'W';
			row = 'B';
		}
		else {
			now = 'B';
			row = 'W';
		}
		for (int j = 0; j < M; j++) {
			if (v[i][j] != now)
				B[i][j] = 1;
			if (now == 'W')
				now = 'B';
			else
				now = 'W';
		}
	}

	//Calculate 
	int min = 100;
	for (int i = 0; i < N - 7; i++) {
		for (int j = 0; j < M - 7; j++) {
			int calW = calculateW(i, j);
			int calB = calculateB(i, j);
			if (min > calW)
				min = calW;
			if (min > calB)
				min = calB;
			if (min == 0) {
				cout << 0;
				return 0;
			}
		}
	}
	cout << min;
}
