#include<iostream>
#include<vector>
using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N;
	int M;
	cin >> N >> M;

	vector<int> v(N);

	for (int i = 0; i < M; i++) {
		int a, b, c;
		cin >> a >> b >> c;
		for (int j = a-1; j <= b-1; j++) {
			v[j] = c;
		}
	}

	for (int i = 0; i < N; i++) {
		cout << v[i] << " ";
	}

}