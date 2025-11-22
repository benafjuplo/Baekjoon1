/*
- Title : 14429 - Baskin-Robbins 31
- Start Time : 25-11-23, 01:12
- End Time : 25-11-23, 01:16
- Try : 1
- Category : implementation, game theory, mathematics
- Language : C++20
*/

/* 한국어 주석
각 게임에서 첫 번째 플레이어가 이기는 최단 길이는 다음과 같이 구할 수 있다.
처음 초항, (j - 1) % (m + 1), 까지 한 번 -> 1
그 후 마지막 까지 두 플레이어가 필승 숫자, 초항 + k * (m + 1) 까지 번씩 번갈아가며 진행하는 횟수 -> ((j - 1) / (m + 1)) * 2
마지막 필승 숫자에서 마지막 숫자까지 한 번 -> 1
따라서 최단 길이는 ((j - 1) / (m + 1)) * 2 + 2 이다.
*/

#include<iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	//cout.tie(0);

	int n;
	cin >> n;

	int shortest = 0; 
	int shortest_len = 100000;

	for (int i = 1; i <= n; i++) {
		int j, m;
		cin >> j >> m;

		int len = ((j - 1) / (m + 1)) * 2 + 2;

		if (len < shortest_len) {
			shortest_len = len;
			shortest = i;
		}	
	}

	cout << shortest << " " << shortest_len << "\n";

	return 0;
}

// Finish