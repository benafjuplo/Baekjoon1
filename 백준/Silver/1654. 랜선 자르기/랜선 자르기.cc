#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool isCuttable(vector<unsigned long long> v, int K, int N, int val) {
	int cnt = 0;		// count for number of cut

	for (int i = 0; i < K; i++) {
		int temp = v[i] / val;
		cnt += temp;
	}

	if (N <= cnt)
		return true;
	else
		return false;
}

int main() {
	// I/O Initialize
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	// I/O Initialize

	// Input1
	int K, N;
	cin >> K >> N;

	// Input2
	vector<unsigned long long> v;
	for (int i = 0; i < K; i++) {
		unsigned long long temp;
		cin >> temp;
		v.push_back(temp);
	}

	//Sort
	sort(v.begin(), v.end());

	unsigned long long left = 1;
	unsigned long long right = v.back();	
	unsigned long long res = 0;
	
	while (left <= right) {
		unsigned long long mid = (left + right) / 2;
		if (isCuttable(v, K, N, mid)) {
			res = mid;
			left = mid + 1;
		}
		else {
			right = mid - 1;
		}
	}

	cout << res;
}


//Finish