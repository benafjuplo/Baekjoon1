/*
- Title : 15894 - Math is Physical Education
- Start Time : 24-05-31, 10:57
- End Time : 24-05-31, 11:07
- Try : 1
*/

#include<iostream>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	long long n;

	cin >> n;

	cout << 4 * n;

	// Top = 1 * n, Side = 2 * (1 * n), Bottom= n * 1
	// Top = n, Side = 2 * n, Bottom = n
	// Result = 4 * n
}

//Finish