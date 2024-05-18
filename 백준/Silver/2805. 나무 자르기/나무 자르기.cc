/*
- Title : 2805 - Cutting Trees
- Start Time : 24-05-15, 00:37
- End Time : 24-05-15, 02:33
- Try : 2
*/

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

long long calCutted(vector<long long>& tree, long long x) {
	int size = tree.size();
	long long sum = 0;

	for (int i = 0; i < size; i++) {
		if (tree[i] > x)
			sum += tree[i] - x;
	}

	return sum;
}

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	long long N, M;
	cin >> N >> M;
	vector<long long> tree(N);
	//vector<long long> tree(1'000'000, 1'000'000'000);		// input debug for time and mem limit

	for (int i = 0; i < N; i++) {
		cin >> tree[i];
	}

	sort(tree.begin(), tree.end());

	long long left, mid, right;
	left = 0;
	right = tree.back();
	mid = (left + right) / 2;

	//range max - 1,000,000,000,000,000 - OK in long long

	// Binary Search
	long long cutLeft, cutMid, cutRight = 0;

	while (left <= right) {
		cutLeft = calCutted(tree, left);
		cutRight = calCutted(tree, right);

		if (cutLeft < M || M < cutRight)
			break;

		mid = (left + right) / 2;
	
		cutMid = calCutted(tree, mid);

		if (cutMid == M)
			break;

		if (cutMid <= M && M <= cutLeft) {
			right = mid - 1;
		}

		else {
			left = mid + 1;
		}
	}

	if (calCutted(tree, mid) < M)
		mid--;

	cout << mid;
}

//Finish