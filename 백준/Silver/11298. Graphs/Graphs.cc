/*
- Title : 11298 - Graphs
- Start Time : 25-03-07, 16:57
- End Time : 25-03-07, 17:17
- Try : 1
- Category : string, mathematics, geometry
- Language : C++20
*/

/* 한국어 주석
그래프의 y축과 x축이 공간 크기를 하나씩 더 늘리고 있음에 주의한다.
0-base 인덱싱을 그대로 사용하면 적절하게 적용되는 것을 알 수 있다.
*/

#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main() {
	cin.tie(0);
	//cout.tie(0);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;
	while (n--) {
		int a, b;
		cin >> a >> b;

		cout << "y = "<< a << "x + " << b << "\n";
		string str = "*          ";
		vector<string> v(a * 10 + b+1, str);
		v[0] = "***********";

		for (int i = 1; i <= 10;++i) {
			v[i * a + b][i] = '*';
		}
		for (int i = v.size() - 1;i >= 0;--i) {
			cout << v[i] << "\n";
		}
	}
	return 0;
}

//Finish