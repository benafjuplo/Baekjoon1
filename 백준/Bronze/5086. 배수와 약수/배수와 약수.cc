#include<iostream>

using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);


	int A, B;
	while (true) {
		cin >> A >> B;
		if (A == 0 && B == 0)
			break;
		if (A % B == 0) {
			cout << "multiple\n";
		}
		else if (B % A == 0) {
			cout << "factor\n";
		}
		else {
			cout << "neither\n";
		}		
	}
}