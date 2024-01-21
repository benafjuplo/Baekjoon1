#include<iostream>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int x;
	cin >> x;
	int cnt = 0;
	for (int i = 0; i < 5; i++) {
		int temp;
		cin >> temp;
		if (temp == x)
			cnt++;
	}
	cout << cnt;
}