/*
- Title : 13932 - Exam Redistribution
- Start Time : 24-07-19, 16:06
- End Time : 24-07-19, 16:15
- Try : 1
- Category : Sorting
*/

#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(false);

	int  N;
	cin >> N;

	vector<pair<int, int>> v(N);
	int total = 0;

	for (int i = 0; i < N; i++) {
		int student;
		cin >> student;
		total += student;
		v[i].first = i+1;
		v[i].second = student;
	}

	sort(v.begin(), v.end(), [](const pair<int, int>& a, const pair<int, int>& b) {return a.second > b.second; });

	if (v[0].second > total - v[0].second)
		cout << "impossible" << "\n";
	else {
		for (int i = 0; i < N; i++) {
			cout << v[i].first << " ";
		}
		cout << "\n";
	}
}

//Finish