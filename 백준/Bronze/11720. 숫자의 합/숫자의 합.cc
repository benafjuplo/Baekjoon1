#include<iostream>

using namespace std;

int main() {
	int N;
	cin >> N;
	int total = 0;
	for (int i = 0; i < N; i++) {
		char temp;
		cin >> temp;
		int x = temp - '0';
		total += x;
	}
	cout << total;
}