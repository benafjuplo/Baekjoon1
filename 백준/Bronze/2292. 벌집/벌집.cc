#include<iostream>

using namespace std;

int main() {
	int N;
	cin >> N;
	int level = 1;
	int cnt = 0;
	if (N == 1)
		cout << level;
	else {
		level++;
		for (int i = 2; i < N; i++) {
			cnt++;
			if (cnt == (level - 1) * 6) {
				cnt = 0;
				level++;
			}
		}
		cout << level;
	}
}