/*
- Title : 9872 - Record Keeping
- Start Time : 24-07-21, 12:45
- End Time : 24-07-21, 12:51
- Try : 1
- Category : Sorting, unordered_map, string
*/

#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<unordered_map>

using namespace std;

int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(false);

	int N;
	cin >> N;

	unordered_map<string, int> m;

	int res = 0;

	while (N--) {
		vector<string> v(3);
		for (int i = 0; i < 3; i++) {
			cin >> v[i];
		}

		sort(v.begin(), v.end());

		string str = v[0] + " " + v[1] + " " + v[2];
		
		if (++m[str] > res)
			res = m[str];
	}

	cout << res;
}

//Finish