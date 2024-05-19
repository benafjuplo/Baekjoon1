/*
- Title : 25314 - Coding is Physical Education
- Start Time : 24-05-20, 02:23
- End Time : 24-05-20, 02:36
- Try : 1
*/

#include<iostream>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N;
	cin >> N;		// 4<= N <= 1000; N is a Multiple of 4

	int cnt = 1;

	cnt = N / 4;

	for (int i = 0; i < cnt; i++) {
		cout << "long ";
	}

	cout << "int";
}

//Finish