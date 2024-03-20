#include<iostream>

using namespace std;

long long cal(long long A, long long B) {
	long long res = (A + B) * (A - B);
	return res;
}

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	long long A, B;
	cin >> A >> B;

	cout << cal(A, B);
}

//Finish