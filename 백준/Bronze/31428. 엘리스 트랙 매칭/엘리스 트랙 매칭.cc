/*
- Title : 31428 - Alice Track Matching
- Start Time : 24-06-06, 03:36
- End Time : 24-06-06, 03:40
- Try : 1
*/

#include<iostream>
#include<vector>
using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N;
	cin >> N;

	vector<char> v(N);

	for (int i = 0; i < N; i++) {
		char c;
		cin >> c;
		v[i] = c;
	}

	char alice;
	cin >> alice;

	int cnt = 0;

	for (int i = 0; i < N; i++) {
		if (v[i] == alice)
			cnt++;
	}

	cout << cnt << "\n";
}

//Finish