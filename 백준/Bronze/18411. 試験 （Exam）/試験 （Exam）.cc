/*
- Title : 18411 - Exam
- Start Time : 25-05-14, 22:23
- End Time : 25-05-14, 22:29
- Try : 1
- Category : simple, basic, mathematics, elementary arithmetic
- Language : C++20
*/

/* 한국어 주석
설명 생략.
*/

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	//cout.tie(0);

	vector<int> v(3);

	for (int i = 0; i < 3; ++i) 
		cin >> v[i];
	
	sort(v.begin(), v.end());

	cout << v[1] + v[2];

	return 0;
}

// Finish