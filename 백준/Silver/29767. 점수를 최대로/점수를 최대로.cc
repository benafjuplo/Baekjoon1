/*
- Title : 29767 - Maximize the Score
- Start Time : 24-06-19, 05:20
- End Time : 24-06-19, 05:54
- Try : 1
- Category : Anonymous function, Sort - Pair, Greedy
*/

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N, K;
	cin >> N >> K;

	vector<int> classroom(N);

	for (int i = 0; i < N; i++)
		cin >> classroom[i];

	vector<pair<int, long long>> v(N);

	long long sum = 0;

	for (int i = 0; i < N; i++) {
		sum += classroom[i];
		v[i] = make_pair(i, sum);
	}

	sort(v.begin(), v.end(), [](const pair<int, long long>& a, const pair<int, long long>& b) {return a.second > b.second; });

	long long result = 0;

	for (int i = 0; i < K; i++) {
		result += v[i].second;
	}

	cout << result;
}

//Finish