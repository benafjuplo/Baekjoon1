/*
- Title : 5575 - Time Card
- Start Time : 24-06-25, 05:37
- End Time : 24-06-25, 05:49
- Try : 1
- Category : Chrono, Time Duration
*/

#include<iostream>
#include<chrono>

using namespace std;
using namespace std::chrono;


int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int T = 3;
	for (int i = 0; i < T; i++) {
		int startH, startM, startS;
		cin >> startH >> startM >> startS;
		int endH, endM, endS;
		cin >> endH >> endM >> endS;

		auto startTime = hours(startH) + minutes(startM) + seconds(startS);
		auto endTime = hours(endH) + minutes(endM) + seconds(endS);

		auto time = endTime - startTime;
		cout << duration_cast<hours>(time).count() << " " << duration_cast<minutes>(time % hours(1)).count() << " " << duration_cast<seconds>(time % minutes(1)).count() << "\n";
	}
}

//Finish