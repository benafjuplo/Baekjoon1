/*
- Title : 17816 - What Is My Grade?
- Start Time : 26-03-21, 19:07
- End Time : 26-03-21, 19:28
- Try : 1
- Category : implementation
- Language : C++20
*/

/* 한국어 주석
설명 생략.
*/

#include<iostream>
#include<vector>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	//cout.tie(0);

	const int numberOfScores = 50;

	vector <int> basisOfGrades = { 5, 15, 30, 35, 45, 48, 50 };
	// A+ : 5, A0 : 15, B+ : 30, B0 : 35, C+ : 45, C0 : 48, F : 50

	int indexOfGrade = 0;
	vector<int> scoreOfGrades(basisOfGrades.size(), 0);

	for (int i = 1; i <= numberOfScores; ++i) {
		int score;
		cin >> score;
		if (i == basisOfGrades[indexOfGrade]) {
			scoreOfGrades[indexOfGrade++] = score;
		}
	}

	int myScore;
	cin >> myScore;

	for (int i = 0; i < basisOfGrades.size(); ++i) {
		if (myScore >= scoreOfGrades[i]) {
			switch (i) {
			case 0:
				cout << "A+";
				break;
			case 1:
				cout << "A0";
				break;
			case 2:
				cout << "B+";
				break;
			case 3:
				cout << "B0";
				break;
			case 4:
				cout << "C+";
				break;
			case 5:
				cout << "C0";
				break;
			default:
				cout << "F";
			}
			break;
		}
	}

	return 0;
}
