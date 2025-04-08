/*
- Title : 1141 - Prefix
- Start Time : 25-03-18, 09:10
- End Time : 25-03-18, 09:18
- Try : 1
- Category : string, sorting, greedy algorithm
- Language : C++20
*/

/* 한국어 주석
문자열 벡터를 미리 정렬한 후 순차적으로 인접하는 문자열에 대하여 접두사인지 find() 함수를 사용하여 확인한다.
접두사인 경우 벡터에서 제거하며 이를 끝가지 반복하고 남은 벡터의 사이즈가 결과 값이다.
*/

#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

int main() {
	cin.tie(0);
	//cout.tie(0);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;

	vector<string> v(n);

	for (auto& x : v)
		cin >> x;

	sort(v.begin(), v.end());

	for (int i = 0; i < v.size()-1;) {
		if (v[i + 1].find(v[i]) == 0) {
			v.erase(v.begin() + i);
		}
		else
			i++;
	}

	cout << v.size();

	return 0;
}

//Finish