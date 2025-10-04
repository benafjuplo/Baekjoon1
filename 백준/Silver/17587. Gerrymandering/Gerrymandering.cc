/*
- Title : 17587 - Gerrymandering
- Start Time : 25-10-04, 21:10
- End Time : 25-10-04, 21:25
- Try : 1
- Category : implementation
- Language : C++20
*/

/* 한국어 주석
V : 전체 투표 수, Wa : 후보 A에게 사표가 된 표 수, Wb : 후보 B에게 사표가 된 표 수
사표(wasted votes) = 패배한 후보에게 투표된 모든 표(lost votes) + 승리한 후보가 승리하는 데 필요한 엄격한 과반(floor(V/2) + 1 표)을 초과한 표(excess votes)
효율성 격차(efficiency gap) = E(V, Wa, Wb) = |Wa - Wb| / V
선거구는 투표구의 집합

입력 : 투표구의 수 p, 선거구의 수 d
		p개의 줄 : 각 투표구가 속한 선거구 번호, 후보 A에게 투표한 유권자 수, 후보 B에게 투표한 유권자 수
출력 : d개의 줄 : 각 선거구에서 승리한 후보, 후보 A에게 사표가 된 표 수, 후보 B에게 사표가 된 표 수
		마지막 줄 : 효율성 격차 (소수점 이하 6자리까지)
*/

#include<iostream>
#include<vector>
#include<iomanip>
#include<cmath>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	//cout.tie(0);

	int p, d;
	cin >> p >> d;

	vector<pair<int, int>> v(d, { 0,0 });

	int Wa = 0, Wb = 0;
	int totalVote = 0;

	for (int i = 0; i < p; i++) {
		int d, a, b;
		cin >> d >> a >> b;
		totalVote += a + b;
		v[d - 1].first += a;
		v[d - 1].second += b;		
	}

	for (int i = 0; i < d; i++) {
		int wa;
		int wb;
		if (v[i].first > v[i].second) {
			cout << "A ";
			wa = v[i].first - 1 - (v[i].first + v[i].second) / 2;
			wb = v[i].second;
		}
		else {
			cout << "B ";
			wa = v[i].first;
			wb = v[i].second - 1 - (v[i].first + v[i].second) / 2;
		}	
		Wa += wa;
		Wb += wb;
		cout << wa << " " << wb << "\n";
	}

	cout << fixed << setprecision(10) << (double)abs(Wa - Wb) / totalVote << "\n";	

	return 0;
}

// Finish