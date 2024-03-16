#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>
#include<string>
#include<iterator>
using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	//Initialize 1
	vector<int> v;

	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		int temp;
		cin >> temp;
		v.push_back(temp);
	}

	vector<int>input;

	for (int i = 1; i <= n; i++) {
		input.push_back(i);
	}
	//Initialize 1


	bool ok = true;
	int cnt = 0;
	vector<int> s; // Use like stack

	vector<char> ans;
	for (int i = 0; i < n;) {

		if (s.size() == 0 && cnt >= n) {
			ok = false;
			break;
		}

		if (s.size() == 0) {
			ans.push_back('+');
			s.push_back(input[cnt]);
			cnt++;
			continue;
		}


		if (s.size() > 1) {
			if (v[i] <= s[s.size() - 2]) {
				ok = false;
				break;
			}
		}

		if(s.size()>0)
			if (v[i] == s.back()) {
				s.pop_back();
				ans.push_back('-');
				i++;
				continue;
			}

		if (v[i] != s.back() && v[i] > s.back()) {
			ans.push_back('+');
			s.push_back(input[cnt]);
			cnt++;
			continue;
		}
	}

	if (!ok)
		cout << "NO";
	else {
		for (int i = 0; i < ans.size(); i++) {
			cout << ans[i] << "\n";
		}
	}

}


//Finish