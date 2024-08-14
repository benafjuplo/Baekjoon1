/*
- Title : 28249 - Chili Peppers
- Start Time : 24-08-14, 23:36
- End Time : 24-08-14, 23:41
- Try : 1
- Category : string, conditional statement, if-else, set, unordered_set
*/

#include<iostream>
#include<string>
#include<unordered_map>

using namespace std;

int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(false);

	int N;
	cin >> N;

	unordered_map<string, int> m;
	m["Poblano"] = 1500;
	m["Mirasol"] = 6000;
	m["Serrano"] = 15500;
	m["Cayenne"] = 40000;
	m["Thai"] = 75000;
	m["Habanero"] = 125000;

	int totalSHU = 0;

	for (int i = 0; i < N; i++) {
		string str;
		cin >> str;
		totalSHU += m[str];
	}

	cout << totalSHU;
}

//Finish
