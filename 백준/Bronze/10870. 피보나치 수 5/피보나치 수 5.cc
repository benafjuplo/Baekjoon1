#include<iostream>
#include<vector>
using namespace std;

int main() {
	int N;
	cin >> N;
	vector<int> fibonacci;

	fibonacci.push_back(0);	// 0번
	fibonacci.push_back(1); // 1번
	
	for (int i = 2; i <= N; i++) {
		int temp = fibonacci[i-1] + fibonacci[i-2];
		fibonacci.push_back(temp);
	}
	cout << fibonacci[N];
}