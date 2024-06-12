/*
- Title : 28113 - Public Transportation on Information Island
- Start Time : 24-06-13, 01:41
- End Time : 24-06-13, 01:47
- Try : 1
- Category : Simple, Basic, Easy, Useless Input, Comparison, Mathematics
*/

#include<iostream>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int A, N, B;
	cin >> N >> A >> B;

	if (A < B)
		cout << "Bus" << "\n";
	else if (A > B)
		cout << "Subway" << "\n";
	else
		cout << "Anything" << "\n";
}

//Finish