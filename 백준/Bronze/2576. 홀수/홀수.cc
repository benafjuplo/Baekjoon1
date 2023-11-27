#include<iostream>
#include<queue>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	priority_queue <int, vector<int>, greater<int>> oddq;
	int sum = 0;
	for (int i = 0; i < 7; i++) {
		int temp;
		cin >> temp;
		if (temp % 2 == 1) {
			sum += temp;
			oddq.push(temp);
		}
	}
	if (sum == 0) {
		cout << -1;
	}
	else {
		cout << sum << "\n" << oddq.top();
	}
}