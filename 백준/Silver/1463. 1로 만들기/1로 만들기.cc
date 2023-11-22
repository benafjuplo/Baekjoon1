#include<iostream>
#include<climits>
#include<vector>
#include<algorithm>

using namespace std;

int make1(int x) {
	int temp;
	vector<int> v;
	for(int i = 1; i<=x; i++){
		//Initial
		if (i == 1)
			v.push_back(0);
		else if (i == 2)
			v.push_back(1);
		else if (i == 3)
			v.push_back(1);

		// From Bottom
		else {
			int cnt = INT_MAX;
			if (i % 3 == 0) {
				temp = 1 + v[i / 3 - 1];
				cnt = min(cnt, temp);
			}
			if (i % 2 == 0) {
				temp = 1 + v[i / 2 - 1];
				cnt = min(cnt, temp);
			}
			{
				temp = 1 + v[i - 2];
				cnt = min(cnt, temp);
			}
			v.push_back(cnt);
		}
	}
	return v[x - 1];
}



int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N;
	cin >> N;
	cout << make1(N);
}