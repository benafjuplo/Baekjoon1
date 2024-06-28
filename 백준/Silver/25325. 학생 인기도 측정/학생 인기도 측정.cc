/*
- Title : 25325 - Measuring Student Popularity
- Start Time : 24-06-28, 07:31
- End Time : 24-06-28, 08:25
- Try : 1
- Category : map, string, vector, sort, pair, getline
*/

#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<map>
#include<iterator>

using namespace std;

int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;

	map<string, int> m;


	for (int i = 0; i < n; i++) {
		string str;
		cin >> str;
		m[str] = 0;
	}

	string d;
	getline(cin, d);

	for (int i = 0; i < n; i++) {
		string str;
		getline(cin, str);

		int newpos = str.find(" ");
		int pos = 0;

		while (newpos != string::npos) {
			m[str.substr(pos, newpos - pos)]++;
			pos = newpos + 1;
			newpos = str.find(" ", pos + 1);
		}
		m[str.substr(pos)]++;
	}

	vector < pair<string, int>> v(m.begin(), m.end());

	sort(v.begin(), v.end(), [](const pair<string, int>& a, const pair<string, int>& b) {if (a.second != b.second) return a.second > b.second; else return a.first < b.first; });

	for (auto p : v) {
		cout << p.first << " " << p.second << "\n";
	}

}

//Finish