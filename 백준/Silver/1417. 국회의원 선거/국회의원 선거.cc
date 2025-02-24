/*
- Title : 1417 - Parliamentary Election
- Start Time : 25-02-23, 22:29
- End Time : 25-02-23, 22:52
- Try : 3(2 : wrong apprpoach)
- Category : priority queue, greedy algorithm, simulation
- Language : C++20
*/

/* 한국어 주석
단순 정렬과 그리디 알고리즘의 조합으로는 해결하기 어려움.
우선순위 큐를 사용한 것이 바람직함.
*/

#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>

using namespace std;

int main() {
	cin.tie(0);
	//cout.tie(0);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;

	int myVote;
	cin >> myVote;

	if (n == 1) {
		cout << 0;
		return 0;
	}

	vector <int> v(n - 1);
	for (int i = 0; i < n - 1; ++i) cin >> v[i];

	priority_queue<int, vector<int>> pq(v.begin(), v.end());
	
	int cnt = 0;

	while (myVote <= pq.top()) {
		cnt++;
		myVote++;
		int x = pq.top() - 1;
		pq.pop();
		pq.push(x);
	}

	cout << cnt;

	return 0;
}

//Finish