/*
- Title : 5591 - Maximum Sum(最大の和)
- Start Time : 24-06-17, 22:11
- End Time : 24-06-17, 22:33
- Try : 2(Range of iteration : 1)
- Category : Sliding Window
*/

#include<iostream>
#include<vector>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int  n, k;
	cin >> n >> k;

	vector<int> v(n);

	//INPUT
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}

	//Sliding Window
	int max = 0;
	int sum = 0;
	for (int i = 0; i < k; i++) {
		sum += v[i];
	}

	max = sum;

	for (int i = 1; i <= n - k; i++) {		// Range 
		sum -= v[i - 1];
		sum += v[i + k - 1];
		if (max < sum)
			max = sum;
	}

	cout << max;
}

//Finish