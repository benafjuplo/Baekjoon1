/*
- Title : 1672 - DNA decoding
- Start Time : 25-08-23, 02:07
- End Time : 25-08-23, 02:19
- Try : 1
- Category : string, simulation
- Language : C++20
*/

/* 한국어 주석
주어진 해독표를 테이블로 만들면 간단히 해결할 수 있다.
*/

#include<iostream>
#include<string>

using namespace std;

inline int idx(char c) {
	// Map bases to indices: A->0, G->1, C->2, T->3
	switch (c) {
	case 'A': return 0;
	case 'G': return 1;
	case 'C': return 2;
	case 'T': return 3;
	}
	return -1; // Should never happen for valid input
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	//cout.tie(0);

	int N;
	string s;
	if (!(cin >> N)) return 0;
	cin >> s;

	// Decode table as specified (rows: A,G,C,T; columns: A,G,C,T)
	const char table[4][4] = {
		{'A','C','A','G'},
		{'C','G','T','A'},
		{'A','T','C','G'},
		{'G','A','G','T'}
	};

	char cur = s[N - 1];              // Start with the last base
	for (int i = N - 2; i >= 0; --i)   // Fold from right to left
		cur = table[idx(s[i])][idx(cur)];

	cout << cur << '\n';
	return 0;
}

// Finish