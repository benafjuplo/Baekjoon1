/*
- Title : 23544 - Kindeer Surprise
- Start Time : 24-08-02, 17:55
- End Time : 24-08-02, 17:59
- Try : 1
- Category : unordered_set, string
*/

#include <iostream>
#include<string>
#include<unordered_set>

using namespace std;

int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(false);

	int N;
	cin >> N;
	unordered_set<string> s;

	for (int i = 0; i < N; i++) {
		string str;
		cin >> str;
		s.insert(str);
	}

	cout << N - s.size() << "\n";
}

//Finish