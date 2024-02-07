#include<iostream>
#include<queue>
#include<string>
using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N;
	cin >> N;
	queue <int> q;

	for (int i = 0; i < N; i++) {
		string str;
		cin >> str;

		if (str == "push") {
			int X;
			cin >> X;
			q.push(X);
		}

		else if (str == "pop") {
			if (q.empty())
				cout << -1 << "\n";
			else {
				int X;
				X = q.front();
				cout << X << "\n";
				q.pop();
			}
		}

		else if (str == "size") {
			cout << q.size() << "\n";
		}

		else if (str == "empty") {
			if (q.empty())
				cout << 1 << "\n";
			else
				cout << 0 << "\n";
		}
		
		else if (str == "front") {
			if (q.empty())
				cout << -1 << "\n";
			else
				cout << q.front() << "\n";
		}

		else if (str == "back") {
			if (q.empty())
				cout << -1 << "\n";
			else
				cout << q.back() << "\n";
		}
	}
}