/*
- Title : 25373 - Cramming
- Start Time : 24-06-27, 07:53
- Ene Time : 24-06-27, 08:21
- Try : 2(1: Mathmatics Mistake)
- Category : Mathmatics, Sum of sequence
*/

#include<iostream>

using namespace std;

inline bool checkN(int N, int l) {
	int sum = 0;
	for (int i = l; i > 0; i--) {
		sum += i;
	}
	return N <= sum;
}

int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(false);

	long long l = 1;		// result

	long long N;
	cin >> N;

	//Linear Search
	if (N < 21) {
		for (l = 5; l > 0; l--) {
			if (!checkN(N, l)) {
				l++;
				break;
			}				
		}
	}
	
	// l >= (N+21)/7
	else {
		l = (N + 21) / 7;
		long long mod = (N + 21) % 7;
		if (mod > 0)
			l++;
	}

	if (l == 0)
		l = 1;

	cout << l << "\n";

}

//Finish