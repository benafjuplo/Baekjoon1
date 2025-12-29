/*
- Title : 31066 - Rainy Day
- Start Time : 25-12-30, 07:17
- End Time : 25-12-30, 08:02
- Try : 3(1 : wrong approach, 1 : wrong condition checking)
- Category : mathematics, greedy algorithm
- Language : C++20
*/

/* 한국어 주석
우산과 k가 모두 1이고 학생 수가 1보다 크다면 불가능하다.
시뮬레이션이 아닌 수학적(그리디 알고리즘)으로도 풀이가 가능하다.
우산을 모두 사용하여 최대의 학생이 움직이고 그 중에 한 학생이 가져온 모든 우산을 지니고 돌아가는 방식으로 진행된다.
*/

#include<iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	//cout.tie(0);

	int T;
	cin >> T;

	while (T--) {
		int student, umbrella, k;
		cin >> student >> umbrella >> k;

		if (student > 1 && umbrella * k == 1) {
			cout << -1 << "\n";
			continue;
		}

		if (student <= umbrella * k) {
			cout << 1 << "\n";
			continue;
		}

		int remainStudents = student - k * umbrella;
		int netGain = k * umbrella - 1;
	
		// ceiling
		int trips = (remainStudents + netGain - 1) / netGain;

		cout << 2 * trips + 1 << "\n";
	}

	return 0;
}
