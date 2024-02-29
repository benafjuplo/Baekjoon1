#include<iostream>
#include<vector>
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

	int B, C;

	cin >> B >> C;

	long long cnt = 0;

	for (int i = 0; i < N; i++) {
		cnt++;
		A[i] -= B;
		//Main Proctor End
		if (A[i] <= 0)
			continue;

		//Sub Proctor
		cnt += A[i] / C;
		if (A[i] % C != 0)
			cnt++;
	}

	cout << cnt;

}

//Finish