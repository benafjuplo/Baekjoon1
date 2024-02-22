#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int num[5];
	for (int i = 0; i < 5; i++) {
		cin >> num[i];
	}
	sort(begin(num), end(num));
	int average = num[0] + num[1] + num[2] + num[3] + num[4];
	average /= 5;
	

	cout << average << "\n" << num[2];



}