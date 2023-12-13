#include<iostream>
#include<queue>

using namespace std;

int main() {

	priority_queue <int, vector<int>, greater<int>> q;
	for (int i = 0; i < 3; i++) {
		int temp;
		cin >> temp;
		q.push(temp);
	}
	for (int i = 0; i < 3; i++) {
		cout << q.top() << " ";
		q.pop();
	}
}