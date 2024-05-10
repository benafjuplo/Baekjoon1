/*
- Title : 9506 - Sum of Divisors
- Start Time : 24-05-10, 03:48
- End Time :  24-05-10, 03:58
- Try : 1
*/

#include<iostream>
#include<vector>
using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	
	while (true) {
		int N;
		cin >> N;
		if (N == -1)
			return 0;

		vector<int> divisor;

		for (int i = 1; i < N; i++) {
			if (N % i == 0)
				divisor.push_back(i);
		}

		int sum = 0;
		for (int i : divisor) {
			sum += i;
		}
		
		if (sum == N) {
			cout << N << " = ";

			for (int i = 0; i < divisor.size();i++) {
				cout << divisor[i];
				if (i != divisor.size() - 1)
					cout << " + ";
			}

			cout << "\n";
		}
		

		else {
			cout << N << " is NOT perfect." << "\n";
		}
	}
	
}

//Finish