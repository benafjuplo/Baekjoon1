/*
- Title : 18115 - Card placement
- Start Time : 25-09-22, 17:00
- End Time : 25-09-22, 17:47
- Try : 3(2 : wrong approach)
- Category : data structure, queue, stack, deque
- Language : C++20
*/

/* 한국어 주석
1번 2번 연산은 dequq로 3번 연산은 stack으로 구현 가능하다.
메모리 사용을 줄이기 위해 deque 대신 1번 연산은 바로 출력하고 2번 연산은 queue로 구현할 수 있다.
*/

#include<iostream>
#include<queue>
#include<stack>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	//cout.tie(0);

	int n;
	cin >> n;

	queue<int> q; // operation 2
	stack<int> s; // operation 3


	// input & process
	for (int i = n; i > 0; i--) {
		int oper;
		cin >> oper;

		if(oper == 1) {
			cout << i << ' ';
			while (!q.empty()) {
				cout << q.front() << ' ';
				q.pop();
			}
		}
		else if (oper == 2) {
			q.push(i);
		}
		else { // oper == 3
			s.push(i);
		}
	}

	// operation 2 
	while (!q.empty()) {
		cout << q.front() << ' ';
		q.pop();
	}

	// operation 3
	while (!s.empty()) {
		cout << s.top() << ' ';
		s.pop();
	}

	return 0;
}

// Finish