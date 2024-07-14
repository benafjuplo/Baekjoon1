/*
- Title : 1731 - Inference
- Start Time : 24-07-14, 04:47
- End Time : 24-07-14, 05:00
- Try : 1
- Category : Mathmatics, Sequence, Arithmetic Sequence, Geometric Sequence
*/

#include<iostream>

using namespace std;

int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(false);

	int N;
	cin >> N;

	long long d = 0;	// Arithmetic Sequence
	unsigned int r = 0;	// Geometric Sequence

	unsigned int first;
	cin >> first;
	unsigned int second;
	cin >> second;
	d = second - first;
	if(second%first == 0)
		r = second / first;
	unsigned int third;
	cin >> third;
	if (r != 0) {
		if (third - second == d)
			r = 0;
		else
			d = 0;
	}
	unsigned int last = third;

	if (N > 3) {
		int T = N - 3;
		unsigned int temp;
		while (T--)
			cin >> temp;
		last = temp;
	}

	if (r == 0)
		cout << last + d << "\n";
	else
		cout << last * r << "\n";
}

//Finish