/*
- Title : 2548 - Representative Natural Number
- Start Time : 24-07-08, 20:29
- End Time : 24-07-08, 21:45
- Try : 4(3 : Unclear problem)
- Category : Unclear problem, Simple, Sort
*/

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	int N;
	cin >> N;

	vector<int> numbers(N);
	for (int i = 0; i < N; i++) {
		cin >> numbers[i];
	}

	sort(numbers.begin(), numbers.end());

	cout << numbers[(N - 1) / 2] << "\n";
}

/*
#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>

using namespace std;

int calV(const vector<int>& v,  int x) {
	int res = 0;
	for (int i = 0; i < v.size(); i++) {
		int diff = v[i] - x;
		if (diff < 0)
			diff *= -1;
		res += diff;
	}
	return res;
}

int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(false);

	int N;
	cin >> N;

	vector<int> v(N);

	for (int i = 0; i < N; i++) {
		cin >> v[i];
	}

	sort(v.begin(), v.end());

	int res = v.back();
	int minV = INT_MAX;
	int left = v.front();
	int	right = v.back();

	while (left < right) {
		int leftV = calV(v, left);
		int rightV = calV(v, right);
		int mid = (left + right) / 2;
		int midV = calV(v, mid);
		minV = min(leftV, rightV);
		if (minV == leftV) {
			res = left;
			right = mid;
		}
		else {
			res = right;
			if (mid == left) {
				break;
			}
			left = mid;
		}
	}

	cout << res;
}
*/