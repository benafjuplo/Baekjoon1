/*
- Title : 5874 - Find the Cow!
- Start Time : 25-07-14, 12:58, 13:57
- End Time :   25-07-14, 13:05, 14:46
- Try : 2(1 : missing the condition x < y)
- Category : prefix sum, sweep line algorithm
- Language : C++20
*/

/* 한국어 주석
왼쪽 다리 기준으로는 누적 합(prefix sum), 오른쪽 다리 기준으로는 스위핑 알고리즘(sweep line algorithm)을 이용하여 구현할 수 있다.
스위핑 알고리즘을 사용하는 경우, 바로 뒤의 문자만 확인하면 되므로 메모리를 아예 사용하지 않을 수도 있다.
*/

// Solution 1 : Sweep line algorithm

#include<iostream>
#include<string>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	//cout.tie(0);

	string str;
	cin >> str;

	int len = str.size();
	if (len == 1) {
		cout << 0;
		return 0;
	}

	long long cntLeft = 0;
	long long answer = 0;

	int result = 0;

	for (int i = 0; i < len - 1; ++i) {
		if (str[i] == '(' && str[i + 1] == '(')
			cntLeft++;
		else if (str[i] == ')' && str[i + 1] == ')')
			result += cntLeft;
	}

	cout << result;

	return 0;
}

// Solution 2 : Prefix sum

//#include<iostream>
//#include<vector>
//#include<string>
//
//using namespace std;
//
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(0);
//	//cout.tie(0);
//
//	string str;
//	cin >> str;
//
//	int len = str.size();
//	if (len == 1) {
//		cout << 0;
//		return 0;
//	}
//
//	vector<int> passedRight(len, 0);
//
//	if (str[0] == ')' && str[1] == ')')
//		passedRight[0] = 1;
//	for (int i = 1; i < len-1; ++i) {
//		if (str[i] == ')' && str[i + 1] == ')')
//			passedRight[i] = passedRight[i - 1] + 1;
//		else
//			passedRight[i] = passedRight[i - 1];
//	}
//	passedRight[len - 1] = passedRight[len - 2];
//
//	int totalRight = passedRight[len - 1];
//
//	long long result = 0;
//
//	for (int i = 0; i < len - 1; ++i) {
//		if (str[i] == '(' && str[i + 1] == '(')
//			result += totalRight - passedRight[i];
//	}
//
//	cout << result;
//
//	return 0;
//}

// Finish