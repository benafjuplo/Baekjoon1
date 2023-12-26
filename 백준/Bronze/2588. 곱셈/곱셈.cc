#include<iostream>
#include<string>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	string a;
	string b;
	cin >> a;
	cin >> b;

	int three;
	three = stoi(a) * (b[2] - '0');
	cout << three << "\n";

	int four;
	four = stoi(a) * (b[1] - '0');
	cout << four << "\n";

	int five;
	five = stoi(a) * (b[0] - '0');
	cout << five << "\n";

	int six;
	six = stoi(a) * stoi(b);
	cout << six << "\n";

}