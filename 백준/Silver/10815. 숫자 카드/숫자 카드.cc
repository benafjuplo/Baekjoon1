/* 10815 - Number Card */

#include<iostream>
#include<vector>
using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N;
	cin >> N;	// N(1 ≤ N ≤ 500,000)
	
	vector<bool> plus(10'000'000+1, false);
	vector<bool> minus(10'000'000+1, false);	//minus[0] is not used.
	
	for (int i = 0; i < N; i++) {
		int temp;
		cin >> temp;
		if (temp >= 0)
			plus[temp] = true;
		else
			minus[-temp] = true;
	}

	int M;
	cin >> M;		// M(1 ≤ M ≤ 500,000)

	for (int i = 0; i < M; i++) {
		int temp;
		cin >> temp;
		if (temp >= 0) {
			cout << plus[temp] << " ";
		}
		else {
			cout << minus[-temp] << " ";
		}
	}
}

//Finish