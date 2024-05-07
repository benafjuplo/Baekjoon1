/*
 - Title : 2108 - Statistics
 - Start Time : 24-05-04, 20:15
 - End Time : 24-05-04, 21:03
 - Try : 1
*/

#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N;
	cin >> N;

	long long sum = 0;

	vector<int> Count(8001, 0);

	vector<int> v;

	int maxCount = 0;

	for (int i = 0; i < N; i++) {
		int temp;
		cin >> temp;
		Count[temp + 4000]++;
		if (maxCount < Count[temp + 4000])
			maxCount = Count[temp + 4000];
		sum += temp;
		v.push_back(temp);
	}

	sort(v.begin(), v.end());

	double arithmeticAverage = round((double)sum / N);
	int int_arithmeticAverage = arithmeticAverage;
	cout << int_arithmeticAverage << "\n";

	int median = v[v.size()/2];
	cout << median << "\n";

	int mode = 0;
	int cnt = 0;

	auto it = Count.begin();
	while (cnt != 2) {
		it = find(it, Count.end(), maxCount);
		if (it == Count.end())
			break;
		if (it != Count.end()) {
			cnt++;
			if (cnt == 1) {
				mode = it - Count.begin() - 4000;
				it++;
			}
			if (cnt == 2) {
				mode = it - Count.begin() - 4000;
				break;
			}
		}
	}

	cout << mode << "\n";

	int range = v[v.size() - 1] - v[0];
	cout << range << "\n";

}

//Finish