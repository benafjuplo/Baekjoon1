#include<iostream>
#include<vector>
#include<algorithm>
#include<iterator>
using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N;
	cin >> N;
	vector<int> A;
	for (int i = 0; i < N; i++) {
		int temp;
		cin >> temp;
		A.push_back(temp);
	}
	sort(A.begin(), A.end());

	int M;
	cin >> M;

	for (int i = 0; i < M; i++) {
		int B;
		cin >> B;
		int f = 0;

		if (binary_search(A.begin(), A.end(), B)) {
			f++;
		}

		cout << f << "\n";
	}
}