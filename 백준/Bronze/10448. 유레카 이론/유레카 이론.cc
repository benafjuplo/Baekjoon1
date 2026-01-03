/*
- Title : 10448 - Eureka Theorem
- Start Time : 26-01-03, 02:49
- End Time : 26-01-03, 03:01
- Try : 1
- Category : mathematics, brute force
- Language : C++20
*/

/* 한국어 주석
*/

#include<iostream>
#include<vector>
#include<unordered_set>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	//cout.tie(0);

	const int limit = 1000;
	vector<int> triangleN;
	
	// preprocess
	for (int i = 1 ; ; ++i) {
		int x = i * (i + 1) / 2;
		if (x >= limit)
			break;
		triangleN.push_back(x);
	}

	unordered_set<int> eurekaNum;

	for (int i = 0; i < triangleN.size(); ++i) {
		for (int j = i; j < triangleN.size(); ++j) {
			for (int k = j; k < triangleN.size(); ++k) {
				int x = triangleN[i] + triangleN[j] + triangleN[k];
				if (x > limit)
					break;
				eurekaNum.insert(x);
			}
		}
	}
	
	int t;
	cin >> t;

	while (t--) {
		int x;
		cin >> x;
		cout << eurekaNum.count(x) << "\n";
	}

	return 0;
}
