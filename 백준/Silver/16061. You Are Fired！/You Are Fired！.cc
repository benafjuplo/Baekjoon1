/*
- Title : 16061 - You are Fired!
- Start Time : 24-07-28, 10:01
- End Time : 24-07-28, 10:16
- Try : 1
- Category : sorting, pair
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

	int n, d, k;
	cin >> n >> d >> k;

	vector<pair<string, int>> sc(n);

	for (int i = 0; i < n; i++) {
		cin >> sc[i].first >> sc[i].second;
	}

	sort(sc.begin(), sc.end(), [](pair<string, int>& a, pair<string, int>& b) {return a.second > b.second; });

	int sum = 0;
	int cnt = 0;

	for (cnt = 0; cnt < k; cnt++) {
		sum += sc[cnt].second;
		if (sum >= d)
			break;
	}

	if (cnt != k)
		cnt++;

	if (sum < d)
		cout << "impossible" << "\n";
	else {
		cout << cnt << "\n";
		for(int i = 0 ;i<cnt;i++)
		cout << sc[i].first << ", YOU ARE FIRED!" << "\n";
	}

}

//Finish