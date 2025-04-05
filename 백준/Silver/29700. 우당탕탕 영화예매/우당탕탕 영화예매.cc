/*
- Title : 29700 - Crash-Bang Movie Booking
- Start Time : 25-04-05, 12:26
- End Time : 
- Try :
- Category : string, sliding window, prefix sum, brute force
- Language : C++20
*/

/* 한국어 주석
이 문제는 0이 가로로 k개 만큼 이어진 구간이 몇 개 있는지 찾는 문제이다.

제일 간단한 방법으로는 string과 string의 멤버 함수 find()를 사용하는 것이다.
간단한 만큼 시간과 메모리를 많이 소모한다.

그 다음은 슬라이딩 윈도우와 누적 합를 사용하는 것이다. 윈도우는 queue로 구성하여 FIFO의 특성을 사용하여 슬라이딩을 구현한다.
윈도우에 들어오는 것과 나가는 것을 카운트하여 누적 합을 구한다.
하지만 각 문자를 읽으면 속도가 느리다.

따라서 슬라이딩 윈도우와 누적 합에 추가로 문자열을 사용하여 윈도우를 따로 만들지 않는다.
대신 문자열에 직접 인덱싱하여 누적 합을 구한다.
*/

#include<iostream>
#include<string>
//#include<vector>
//#include<queue>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	//cout.tie(0);

	int n, m, k;
	cin >> n >> m >> k;
	
	// sliding window with string
	int result = 0;

	string str;
	for (int i = 0; i < n; ++i) {
		int cnt1 = 0;
		cin >> str;
		for (int j = 0; j < k && j < m; ++j) {
			if (str[j] == '1')
				cnt1++;
		}
		if (k<=m && cnt1 == 0)
			result++;
		for (int j = k; j < m; ++j) {
			if (str[j] == '1')
				cnt1++;
			if (str[j-k] == '1')
				cnt1--;
			if (cnt1 == 0)
				result++;
		}
	}

	cout << result;


	// sliding window
	/*int result = 0;

	for (int i = 0; i < n; ++i) {
		int cnt1 = 0;
		queue<char> window;
		for (int j = 0; j < k && j < m; ++j) {
			char c;
			cin >> c;
			window.push(c);
			if (c == '1') 
				cnt1++;
		}
		if (k<=m && cnt1 == 0)
			result++;
		for (int j = k; j < m; ++j) {
			char c;
			cin >> c;

			window.push(c);
			if (c == '1') 
				cnt1++;
			if (window.front() == '1') 
				cnt1--;
			window.pop();

			if (cnt1 == 0)
				result++;
		}
	}

	cout << result;*/

	// string find solution
	//vector<string> seats(n);

	//for (int i = 0; i < n; ++i) {
	//	cin >> seats[i];
	//}

	//int result = 0;

	//// Key making
	//string key = "";
	//for (int i = 0; i < k; ++i) {
	//	key += '0';
	//}

	//for (int i = 0; i < n; ++i) {
	//	size_t pos = 0;
	//	pos = seats[i].find(key, pos);
	//	while (pos != string::npos) {
	//		result++;
	//		pos = seats[i].find(key, pos+1);
	//	}
	//}

	//cout << result;

	return 0;
}

// Finish