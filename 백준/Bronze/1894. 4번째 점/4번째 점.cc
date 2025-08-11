/*
- Title : 1894 - 4th Point
- Start Time : 25-08-12, 00:54
- End Time : 25-08-12, 01:17
- Try : 1
- Category : mathematics, geometry, setprecision, fixed
- Language : C++20
*/

/* 한국어 주석
인접한 두 변이 만나는 꼭짓점 P, 그 양옆의 꼭짓점을 Q, R, 나머지 네번째 점을 S라 하면 아래가 성립한다.
S = Q + R - P

부동소수점 비교에 대해서 계산이 있기 전에 수행하므로 별도의 구현을 하지 않아도 가능하다.
*/

#include<iostream>
#include<vector>
#include<iomanip>
#include<string>
#include<sstream>
#include<algorithm>

using namespace std;

using point = pair<double, double>;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	//cout.tie(0);

	string line;
	while (getline(cin, line)) {
		stringstream ss(line);

		point p;

		point result = { 0,0 };

		vector<point> v;

		for (int i = 0; i < 4; ++i) {
			point x;
			ss >> x.first >> x.second;
			if(find(v.begin(), v.end(), x) != v.end())
				p = x;
			else
				v.push_back(x);
		}

		for (auto& x : v) {
			if (p != x) {
				result.first += x.first;
				result.second += x.second;
			}
		}

		result.first -= p.first;
		result.second -= p.second;

		cout << fixed << setprecision(3) << result.first << " " << result.second << "\n";
	}

	return 0;
}