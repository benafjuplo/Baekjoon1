/*
- Title : 6014 - Shorter Musical Notes 
- Start Time : 24-07-25, 15:23
- End Time : 24-07-25, 16:00
- Try: 1
- Category : Binary Search
*/

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(false);

	int N, Q;
	cin >> N >> Q;

	vector<int> notes(N+1);

	int current = 0;

	notes[0] = 0;

	for (int i = 1; i <= N; i++) {
		int note;
		cin >> note;
		current += note;
		notes[i] = current;
	}

	while (Q--) {
		int query;
		cin >> query;
		int index = lower_bound(notes.begin(), notes.end(), query) - notes.begin();
		int result = notes[index];
		if (result == query)
			cout << index + 1 << "\n";
		else
			cout << index << "\n";
	}
}

//Finish