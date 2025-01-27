/*
- Title : 5543 - Lunch
- Start Time : 25-01-27, 19:07
- End Time : 25-01-27, 19:12
- Try : 1
- Category : simple, basic, mathematics, elementary arithmetic, sorting
- Language : C++20
*/

/* 한국어 주석
*/

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	cin.tie(0);
	//cout.tie(0);
	ios_base::sync_with_stdio(false);

	vector<int> food(3);
	for (int i = 0; i < 3; ++i) cin >> food[i];
	sort(food.begin(), food.end());
	vector<int> juice(2);
	for (int i = 0; i < 2; ++i) cin >> juice[i];
	sort(juice.begin(), juice.end());

	cout << food[0] + juice[0] - 50;

	return 0;
}

//Finish