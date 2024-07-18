/*
- Title : 13771 - Presents
- Start Time : 24-07-18, 08:54
- End Time : 24-07-18, 08:58
- Try : 1
- Category : Sorting
*/

#include<iostream>
#include<vector>
#include<algorithm>
#include<iomanip>

using namespace std;

int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(false);

	int N;
	cin >> N;

	vector<double> v(N);

	for (int i = 0; i < N; i++)
		cin >> v[i];

	sort(v.begin(), v.end());

	cout << fixed << setprecision(2);

	cout << v[1];
}

//Finish