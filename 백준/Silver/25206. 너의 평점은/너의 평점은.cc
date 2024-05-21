/*
- Title : 25206 - Your Rating
- Start Time : 24-05-20, 05:55
- End Time : 24-05-20, 06:19
- Try : 1
*/

#include<iostream>
#include<string>
#include<vector>

#define NUM 20

using namespace std;


int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	vector<double> credit(NUM, 0.0); // 이수 단위
	vector<double> grade(NUM, 0.0);	// 평점

	//Input
	for (int i = 0; i < NUM; i++) {
		string subjectName;
		cin >> subjectName;
		cin >> credit[i];
		string strGrade;
		cin >> strGrade;
		if (strGrade == "A+") {
			grade[i] = 4.5;
		}
		if (strGrade == "A0") {
			grade[i] = 4.0;
		}
		if (strGrade == "B+") {
			grade[i] = 3.5;
		}
		if (strGrade == "B0") {
			grade[i] = 3.0;
		}
		if (strGrade == "C+") {
			grade[i] = 2.5;
		}
		if (strGrade == "C0") {
			grade[i] = 2.0;
		}
		if (strGrade == "D+") {
			grade[i] = 1.5;
		}
		if (strGrade == "D0") {
			grade[i] = 1.0;
		}
		if (strGrade == "F") {
			grade[i] = 0.0;
		}
		if (strGrade == "P") {
			grade[i] = -1;
		}
	}
	
	double rate = 0.0;
	double sumofCredit = 0.0;

	//Calculate
	for(int i = 0 ; i<NUM;i++){
		if (grade[i] >= 0) {
			rate += credit[i] * grade[i];
			sumofCredit += credit[i];
		}
	 }

	cout.precision(8);

	cout << rate / sumofCredit << "\n";
}

//Finish