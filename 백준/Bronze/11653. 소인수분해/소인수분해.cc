#include<iostream>
#include<vector>
#include<queue>
using namespace std;

priority_queue<int, vector<int>, greater<int>> q;

void prime(int n) {
	int i = 2;
	for (; i < n; i++) {
		if (n % i == 0) {
			prime(n / i);
			q.push(i);
			break;
		}
	}
	if (i == n)
		q.push(n);
	return;
}

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N;
	cin >> N;

	prime(N);

	while(q.size()!=0) {
		cout << q.top() << "\n";
		q.pop();
	}
}