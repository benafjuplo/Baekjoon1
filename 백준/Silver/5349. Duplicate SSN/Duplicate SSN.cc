/*
- Title : 5349 - Duplicate SSN
- Start Time : 24-07-18, 09:26
- End Time : 24-07-18, 09:33
- Try : 2(1 : Header Miss)
- Category : unordered_set, sorting
*/

#include<iostream>
#include<vector>
#include<string>
#include<unordered_set>
#include<algorithm>

using namespace std;

int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(false);

	unordered_set <string> total;
	unordered_set <string> result;

	while (true) {
		string str;
		cin >> str;
		if (str == "000-00-0000")
			break;
		if (!total.insert(str).second) {
			result.insert(str);
		}
	}

	vector<string> resV(result.begin(), result.end());
	sort(resV.begin(), resV.end());

	for (auto &s : resV) {
		cout << s << "\n";
	}
}

//Finish