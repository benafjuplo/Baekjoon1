#include<iostream>
#include<queue>
using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N;
	cin >> N;
	queue<int> q;

	for (int i = 1; i <= N; i++) {
		q.push(i);
	}
		
	int seq = 1;
	while (q.size() != 1) {
		switch (seq) {
		case 1:
			seq = 2;
			q.pop();
			break;
		case 2:
			q.push(q.front());
			q.pop();
			seq = 1;
			break;
		default:
			break;
		}
	}
	cout << q.front();
}