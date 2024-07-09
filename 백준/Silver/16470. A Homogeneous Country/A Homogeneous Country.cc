/*
- Title : 16470 - A Homogeneous Country
- Start Time : 24-07-10, 00:49
- End Time : 24-07-10, 01:07
- Try : 1
- Category : mathmatics, unordered_map, fixed, precision
*/

#include<iostream>
#include<string>
#include<unordered_map>
#include<iomanip>

using namespace std;

int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(false);

	unordered_map<string, int> m;
	int total = 0;
	string str;
	
	while (getline(cin, str)) {
		m[str]++;
		total++;
	}

	if (total == 0) {
		cout << 1;
		return 0;
	}

	double sumOfPPow2 = 0;

	for(auto x : m) {
		double p = (double)x.second / total;
		sumOfPPow2 += p * p;
	}

	cout << fixed << setprecision(6);
	cout << 1 - sumOfPPow2 << "\n";
}

//Finish