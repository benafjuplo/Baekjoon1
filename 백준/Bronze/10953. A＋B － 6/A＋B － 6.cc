#include<iostream>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int T;
	cin >> T;

	for (int i = 0; i < T; i++) {
		int a;
		char temp;
		int b;
		cin >> a >> temp >> b;
		cout << a + b << "\n";
	}

}