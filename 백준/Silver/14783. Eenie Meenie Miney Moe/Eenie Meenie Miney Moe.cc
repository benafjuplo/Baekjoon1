/*
- Title : 14783 - Eenie Meenie Miney Moe 
- Start Time : 24-07-28, 11:27, 13:35
- End Time : 24-07-28,   11:41, 14:20
- Try : 1
- Category : circle
*/

#include<iostream>
#include<vector>

using namespace std;

int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(false);

	int N, L;
	cin >> N >> L;

	vector<int> deleteCow(L);

	for (int i = 0; i < L; i++) {
		cin >> deleteCow[i];
		deleteCow[i]--;
	}

	// Calculate

	vector<int> cow(N);
	for (int i = 0; i < N; i++)
		cow[i] = i + 1;

	int seq = 0;
	int pos = 0;

	while (cow.size() != 1) {
		pos += deleteCow[seq]%cow.size();
		if (pos >= cow.size())
			pos -= cow.size();

		auto it = cow.erase(cow.begin() + pos);
		pos = it - cow.begin();

		seq++;
		if (seq >= L)
			seq -= L;
	}

	cout << cow[0];
}

//Finish