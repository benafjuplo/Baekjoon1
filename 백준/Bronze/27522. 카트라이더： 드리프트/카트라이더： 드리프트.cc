/*
- Title : KartRider: Drift
- Start Time : 24-06-06, 19:00
- End Time : 24-06-06, 19:22
- Try : 1
*/

#include<iostream>
#include<string>
#include<map>
#include<chrono>

using namespace std;
using namespace std::chrono;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	map<duration<long long, milli>, string> m;
	
	for (int i = 0; i < 8; i++) {
		string str;
		cin >> str;

		duration<long long, milli> time = minutes(str[0]-'0') + seconds(stoi(str.substr(2,2))) + milliseconds(stoi(str.substr(5,3)));

		cin >> str;
		m[time] = str;
	}

	int red = 0;
	int blue = 0;

	int score[8] = { 10, 8, 6, 5, 4, 3, 2, 1 };

	int seq = 0;

	for (auto pair : m) {
		
		if (pair.second == "R")
			red += score[seq];
		else
			blue += score[seq];
		seq++;
	}

	if (red > blue)
		cout << "Red";
	else
		cout << "Blue";
}

//Finish