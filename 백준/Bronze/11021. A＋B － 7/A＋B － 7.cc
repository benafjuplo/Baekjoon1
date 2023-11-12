#include<iostream>
#include<string>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int T;
	cin >> T;
	for (int i = 1; i <= T; i++) {
		int A, B;
		cin >> A >> B;
		cout << "Case #" << i<<": " << A + B << "\n";
	}
}