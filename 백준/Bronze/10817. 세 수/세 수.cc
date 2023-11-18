#include<iostream>

using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int A, B, C;
	cin >> A >> B >> C;
	int M;
	if ((A >= B && B >= C) || (C>=B && B>=A)) {
		M = B;
	}

	if ((B >= A && A >= C) || (C >= A && A >= B)) {
		M = A;
	}

	if ((A >= C && C >= B) || (B >= C && C >= A)) {
		M = C;
	}

	cout << M;
	
}