/*
- Title : 1105 - Eight
- Start Time : 25-03-18, 10:01
- End Time : 25-03-18, 10:05
- Try : 1
- Category : string, greedy algorithm, mathematics
- Language : C++20
*/

/* 한국어 주석
복잡해보이지만 간단하게 해결 가능한 문제이다.
1. 문자열의 길이가 다르다면 8이 아예 없는 경우가 항상 존재한다.
2. 문자열의 길이가 같으면 좌측에서 두 문자열 중 같은 부분에 대해서만 8의 개수를 샌다. 다른 부분은 8이 아예 없는 경우가 항상 존재하기에 무시한다.
1과 2로 문제 해결이 가능하다.
*/

#include<iostream>
#include<string>

using namespace std;

int main() {
	cin.tie(0);
	//cout.tie(0);
	ios_base::sync_with_stdio(false);

	string l, r;
	cin >> l >> r;
	if (l.size() != r.size())
		cout << 0;
	else {
		int cnt8 = 0;
		for (int i = 0; i < l.size();++i) {
			if (l[i] != r[i])
				break;
			else if (l[i] == '8')
				cnt8++;
		}
		cout << cnt8;
	}

	return 0;
}

//Finish