#include<iostream>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	
	int K, N, M;
	cin >> K >> N >> M;

	int res = N * K - M;

	if (res <= 0)
		cout << 0;
	else
		cout << res;

}