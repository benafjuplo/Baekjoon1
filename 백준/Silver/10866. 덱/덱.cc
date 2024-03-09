#include<iostream>
#include<deque>
#include<string>
using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N;
	cin >> N;

	deque <int> dq;

	for (int i = 0; i < N; i++) {
		string str;
		cin >> str;
		
		if (str == "push_front") {
			int temp;
			cin >> temp;
			dq.push_front(temp);
		}

		if (str == "push_back") {
			int temp;
			cin >> temp;
			dq.push_back(temp);
		}

		if (str == "pop_front") {
			if (dq.size() != 0) {
				cout << dq.front() << "\n";
				dq.pop_front();
			}
			else
				cout << -1 << "\n";
		}

		if (str == "pop_back") {
			if (dq.size() != 0) {
				cout << dq.back() << "\n";
				dq.pop_back();
			}
			else
				cout << -1 << "\n";
		}

		if (str == "size") {
			cout << dq.size() << "\n";
		}

		if (str == "empty") {
			if(dq.empty())
				cout << 1 << "\n";
			else
				cout << 0 << "\n";
		}

		if (str == "front") {
			if (dq.size() != 0) {
				cout << dq.front() << "\n";
			}
			else
				cout << -1 << "\n";
		}

		if (str == "back") {
			if (dq.size() != 0) {
				cout << dq.back() << "\n";
			}
			else
				cout << -1 << "\n";
		}
	}

}

//Finish