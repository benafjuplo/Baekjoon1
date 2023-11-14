#include<iostream>

using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N;
	cin >> N;
	int len = 2;
	for (int i = 0; i < N; i++) {
		len = len + (len - 1);
	}
	cout << len*len;
}