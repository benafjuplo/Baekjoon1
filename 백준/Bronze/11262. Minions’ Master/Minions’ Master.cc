/*
- Title : 11262 - Minions' Master
- Start Time : 24-07-18, 11:22
- End Time : 24-07-18, 11:58
- Try : 2(1 : Round-off type)
- Category : Mathmatics, Round-off, Round half up
*/

#include<iostream>
#include<vector>
#include<iomanip>
#include<cmath>

using namespace std;

int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(false);

	int T;
	cin >> T;

	while (T--) {
		int N;
		cin >> N;
		vector<double> v(N);

		double total = 0;

		for (int i = 0; i < N; i++) {
			cin >> v[i];
			total += v[i];
		}

		double average = total / N;

		int cnt = 0;

		for (int i = 0; i < N; i++) {
			if (v[i] > average)
				cnt++;
		}

		cout << fixed << setprecision(3);

		double overpower = (double)cnt * (double)100 / N;

		// Round half up
		average = floor(average * 1000 + 0.5) / 1000;
		overpower = floor(overpower * 1000 + 0.5) / 1000;
		
		cout << average << " " << overpower << "%" << "\n";
	}

}

//Finish