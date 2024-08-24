/*
- Title : 9316 - Hello Judge
- Start Time : 24-08-24, 10:54
- End Time : 24-08-24, 10:56
- Try : 1
- Category : simple, base, cout, basic, print, loop
*/

#include<iostream>

using namespace std;

int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(false);

	int N;
	cin >> N;

	for (int i = 1; i <= N; i++) {
		cout << "Hello World, Judge " << i << "!\n";
	}
}

//Finish