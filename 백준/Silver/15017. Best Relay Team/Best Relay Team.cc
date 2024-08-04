/*
- Title : 15017 - Best Relay Team
- Start Time : 24-08-04, 17:01
- End Time : 24-08-04, 17:26
- Try : 1
- Category : string, pair, struct, sorting
*/

#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;

	vector<pair<string, double>> firstLegs(n);
	vector<pair<string, double>> otherLegs(n);

	for (int i = 0; i < n; i++) {
		string str;
		cin >> str;
		firstLegs[i].first = str;
		otherLegs[i].first = str;
		double firstLeg;
		cin >> firstLeg;
		firstLegs[i].second = firstLeg;
		double otherLeg;
		cin >> otherLeg;
		otherLegs[i].second = otherLeg;
	}

	sort(firstLegs.begin(), firstLegs.end(), [](pair<string, double>& a, pair<string, double>& b) {return a.second < b.second; });
	sort(otherLegs.begin(), otherLegs.end(), [](pair<string, double>& a, pair<string, double>& b) {return a.second < b.second; });

	vector<string> resultMember;
	double resultTime = 10'000'000;

	for (int i = 0; i < 4; i++) {
		vector<string> member;
		double time = 0;
		member.push_back(firstLegs[i].first);
		time += firstLegs[i].second;
		for (int j = 0; j < n; j++) {
			if (member.size() == 4)
				break;
			if (otherLegs[j].first == member[0])
				continue;
			member.push_back(otherLegs[j].first);
			time += otherLegs[j].second;
		}
		if (time < resultTime) {
			resultTime = time;
			resultMember = member;
		}
	}

	cout << resultTime << "\n";

	for (int i = 0; i < 4; i++) {
		cout << resultMember[i] << "\n";
	}
}

//Finish