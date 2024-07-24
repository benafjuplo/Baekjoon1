/*
- Title : 18384 - PRIM
- Start Time : 24-07-24, 14:00
- End Time : 24-07-24, 14:51
- Try : 2(1 : Binary Search Error)
- Category : Prime number, Mathmatics, Sieve of Eratosthenes
*/

#include<iostream>
#include<vector>

using namespace std;

int binarySearch(vector<int>& primeNumber, int x) {
	int left = 0;
	int right = primeNumber.size() - 1;
	int mid = (left + right) / 2;
	while (left < right) {
		mid = (left + right) / 2;
		if (right == mid)
			break;
		if (x == primeNumber[mid])
			return primeNumber[mid];
		else if (x > primeNumber[mid])
			left = mid + 1;
		else
			right = mid;
	}
	if (primeNumber[right] < x)
		return primeNumber[right + 1];
	else
		return primeNumber[right];
}

int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(false);

	int T;
	cin >> T;

	const int maxOfI = 1'000'037 + 1; //+37+1

	vector<int>v(maxOfI, 0);
	for (int i = 2; i < maxOfI; i++) {
		v[i] = i;
	}

	int max = 1'000 + 2;	//+2

	for (int i = 2; i < max; i++) {
		if (v[i] != 0) {
			int factor = 2;
			int eraser = v[i] * factor;
			while (eraser < maxOfI) {
				v[eraser] = 0;
				factor++;
				eraser = v[i] * factor;
			}
		}
	}

	vector<int> primeNumber;

	for (int i = 0; i < maxOfI; i++) {
		if (v[i] != 0)
			primeNumber.push_back(v[i]);
	}

	while (T--) {
		int result = 0;
		for (int i = 0; i < 5; i++) {
			int I;
			cin >> I;
			//Debug
			//cout <<"I : " << I << "binary : " << binarySearch(primeNumber, I) << "\n";
			result += binarySearch(primeNumber, I);
		}
		cout << result << "\n";
	}
}

//Finish