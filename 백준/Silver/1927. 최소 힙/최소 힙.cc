/*
- Title : 1927 - Min Heap
- Start Time : 24-05-29, 21:51
- End Time : 24-05-29, 21:59
- Try : 1
*/

#include<iostream>
#include<vector>
#include<queue>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	priority_queue <long long, vector<long long>, greater<long long>> minHeap;

	int N;
	cin >> N; // (1 ≤ N ≤ 100,000)

	for (int i = 0; i < N; i++) {
		long long x;
		cin >> x;	// 231보다 작은 자연수 또는 0
		if (x == 0) {
			if (minHeap.empty()) {
				cout << 0 << "\n";
			}
			else {
				cout << minHeap.top() << "\n";
				minHeap.pop();
			}
		}
		else {
			minHeap.push(x);
		}
	}

}


//Finish