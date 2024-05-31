/*
- Title : 11279 - Max Heap
- Start Time : 24-05-31, 11:30
- End Time : 24-05-31, 11:36
- Try : 1
*/

#include<iostream>
#include<queue>
using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N;
	cin >> N;

	priority_queue<int> maxHeap;

	for (int i = 0; i < N; i++) {
		int x;
		cin >> x;

		if (x == 0) {
			if (maxHeap.empty())
				cout << 0 << "\n";
			else {
				cout << maxHeap.top() << "\n";
				maxHeap.pop();
			}
		}
		else {
			maxHeap.push(x);
		}
	}

}

//Finish