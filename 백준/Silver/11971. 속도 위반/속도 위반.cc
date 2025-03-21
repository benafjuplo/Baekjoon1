/*
- Title : 11971 - Speeding Ticket
- Start Time : 25-03-19, 14:20
- End Time : 25-03-19, 15:59
- Try : 2(1 : wrong calculation)
- Category : simulation, brute force
- Language : C++20
*/

/* 한국어 주석
시뮬레이션으로 풀 수 있는 문제이다.
길이가 100밖에 되지 않기 때문에 모든 정수 거리를 시뮬레이션하면 된다.
시뮬레이션 시 내 현재 위치의 속도와 구간을 판단해야 한다.
판단할 때 구간은 좌측은 포함하고 우측은 포함하지 않는다.
만약 길이가 길고 n과 m이 충분히 작다면 일부 구간만 확인하게 변형하는 것도 고려 가능하다.
*/

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	cin.tie(0);
	//cout.tie(0);
	ios_base::sync_with_stdio(false);

	int n, m;
	cin >> n >> m;

	vector<pair<int, int>> limits(n+1);
	
	cin >> limits[1].first >> limits[1].second;
	limits[0].first = 0;
	limits[0].second = limits[1].second;
	for (int i = 2; i <= n;++i) {
		cin >> limits[i].first >> limits[i].second;
		limits[i].first += limits[i - 1].first;
	}

	vector<pair<int, int>> speeds(m+1);

	cin >> speeds[1].first >> speeds[1].second;
	speeds[0].first = 0;
	speeds[0].second = speeds[1].second;
	for (int i = 2; i <= m;++i) {
		cin >> speeds[i].first >> speeds[i].second;
		speeds[i].first += speeds[i - 1].first;
	}

	// Debug
	//for (int i = 0; i <= n;++i) {
	//	cout << limits[i].first << " " << limits[i].second << "\n";
	//}

	//for (int i = 0; i <= m;++i) {
	//	cout << speeds[i].first << " " << speeds[i].second << "\n";
	//}

	int maxOver = 0;

	const int ROAD = 100;
	for (int pos = 0;pos <= ROAD;++pos) {
		int mySpeed = 0;
		for (int i = 1; i <= m;++i) {
			if (speeds[i - 1].first <= pos && pos < speeds[i].first) {
				mySpeed = speeds[i].second;
				break;
			}			
		}

		for (int i = 1; i <= n;++i) {
			if (limits[i - 1].first <= pos && pos < limits[i].first) {
				maxOver = max(maxOver, mySpeed - limits[i].second);
				break;
			}
		}
	}

	cout << maxOver;

	return 0;
}

//Finish
