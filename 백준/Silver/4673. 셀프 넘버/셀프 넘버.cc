#include<iostream>
#include<vector>
#include<queue>
#include<cmath>
#include<string>
#include<ctime>
using namespace std;


int d(int n) {
	//자리 수
	string str = to_string(n);
	int size = str.size();
	int result = n;

	for (int j = 0; j < size; j++) {
		result += str[j] - '0';
	}
	return result;
}

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	priority_queue <int, vector<int>, greater<int>> q; // Min Heap
	int N = 10000;

	for (int i = 1; i <= N; i++) {
		int D = d(i);
		if (D > 2 * N)
			break;
		q.push(D);
	}
	if (!q.empty()) {
		for (int i = 1; i <= N; i++) {
			if (i == q.top()) {
				q.pop();
				while (i == q.top()) {
					q.pop();
				}
			}
			else {
				cout << i << endl;
			}

		}
	}
}