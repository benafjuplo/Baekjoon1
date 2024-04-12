/*2420 - Make a Difference(Safari World)*/
#include<iostream>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	long long N, M;
	cin >> N >> M;

	long long dif = 0;

	if (N > M)
		dif = N - M;
	else
		dif = M - N;

	cout << dif;
}
//Finish
