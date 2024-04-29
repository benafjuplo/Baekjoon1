/* 1476 - Date Calculation */

#include<iostream>

using namespace std;

unsigned int calDate(int E, int S, int M) {
	unsigned int date = 1;
	int e = 1, s = 1, m = 1;

	while (true) {
		if (e == E && s == S && m == M)
			break;
		e++;
		if (e > 15)
			e = 1;
		s++;
		if (s > 28)
			s = 1;
		m++;
		if (m > 19)
			m = 1;
		date++;
	}

	return date;
}

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int E, S, M;
	cin >> E >> S >> M;

	cout << calDate(E, S, M);
}

//Finish