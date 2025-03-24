/*
- Title : 3022 - PRASE
- Start Time : 25-03-20, 13:48
- End Time : 25-03-20, 14:41
- Try : 1
- Category : simulation, unordered_map, string
- Language : C++20
*/

/* 한국어 주석
문제의 요구사항은 아래와 같다.
아이들이 N번 쿠키를 집어간다. 아이들이 쿠키를 집어간 순서가 주어진다.
아이가 쿠키를 집을 때, 만약 방금 집은 쿠키를 포함하지 않은 그 아이의 쿠키 개수가 나머지 아이들의 쿠키 개수보다 많다면 경고를 한다.
총 경고 횟수를 구하라.

문제 자체는 unordered_map<string, int>로 간단히 해결 가능하다.
*/

#include<iostream>
#include<string>
#include<unordered_map>

using namespace std;

int main() {
	cin.tie(0);
	//cout.tie(0);
	ios_base::sync_with_stdio(false);
	
	int n;
	cin >> n;

	unordered_map<string, int> m;

	int totalCookies = 0;

	int cntWarnings = 0;

	while (n--) {
		string name;
		cin >> name;

		m[name]++;
		totalCookies++;

		if (totalCookies - m[name] < m[name] - 1) cntWarnings++;
	}

	cout << cntWarnings;

	return 0;
}

// Finish