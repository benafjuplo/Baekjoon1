#include<iostream>

using namespace std;

int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(false);

	int a, b;
	cin >> a >> b;
	while (a != 0 && b != 0) {
		if (a > b)
			cout << "Yes\n";
		else
			cout << "No\n";
		cin >> a >> b;
	}
}