/*
- Title : 11948 - Selecting Subjects
- Start Time : 24-12-25, 17:00
- End Time : 24-12-25, 17:09
- Try : 1
- Category : mathematics, sorting, elementary arithmetic
- Language : C++20
*/

/* 한국어 주석
이 문제는 과목들의 점수가 주어질 때, 가장 높은 합계를 계산하는 문제이다.

처음 네 가지 과목의 점수 중 세 가지를 선택하고, 이후의 두 과목 중 하나를 선택하여 합계를 구한다.
벡터 두 개를 사용하여 각각의 점수 집합을 저장한 뒤, 정렬하여 적절히 점수들을 더하면 된다.
*/

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	cin.tie(0);
	//cout.tie(0);
	ios_base::sync_with_stdio(false);

	vector<int> subject1(4);
	for (int i = 0; i < 4; ++i)	cin >> subject1[i];
	sort(subject1.begin(), subject1.end());
	
	vector<int> subject2(2);
	for (int i = 0; i < 2; ++i)	cin >> subject2[i];
	sort(subject2.begin(), subject2.end());

	cout << subject1[1] + subject1[2] + subject1[3] + subject2[1];

	return 0;
}

//Finish