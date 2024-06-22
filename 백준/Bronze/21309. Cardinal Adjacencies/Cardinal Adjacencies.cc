/*
- Title : 21309 - Cardinal Adjacencies
- Start Time : 24-06-19, 08:52
- End Time : 24-06-19, 09:25
- Try : 1
- Category : Two-dimension, Search - Adjancy(8-Direction)
*/

#include<iostream>
#include<vector>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int dir4 = 0;
	int diagonal = 0;

	//input
	int nrows, ncolumns;
	cin >> nrows >> ncolumns;

	vector<vector<int>> v(nrows, vector<int>(ncolumns));

	for (int i = 0; i< nrows; i++) {
		for (int j = 0; j < ncolumns; j++) {
			cin >> v[i][j];
		}
	}


	//calculate
	int diffDIr4x[2] = { 1, 0 };
	int diffDIr4y[2] = { 0, 1 };
	int diffDiagonalx[2] = { 1, -1 };
	int diffDiagonaly[2] = { 1, 1 };


	for (int i = 0; i < nrows; i++) {
		for (int j = 0; j < ncolumns; j++) {
			if (v[i][j] == 1) {
				for (int diff = 0; diff < 2; diff++) {
					if (i + diffDIr4x[diff]<nrows && j + diffDIr4y[diff]<ncolumns && (v[i + diffDIr4x[diff]][j + diffDIr4y[diff]] == 1))
						dir4++;
					if (i + diffDiagonalx[diff] < nrows && j + diffDiagonaly[diff] < ncolumns && i + diffDiagonalx[diff] >= 0 && (v[i + diffDiagonalx[diff]][j + diffDiagonaly[diff]] == 1))
						diagonal++;
				}
			}
		}
	}

	cout << dir4 << " " << dir4 + diagonal << "\n";
}

//Finish