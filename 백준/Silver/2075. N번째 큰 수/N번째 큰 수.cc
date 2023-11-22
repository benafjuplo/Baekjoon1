#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int N;
	cin >> N;

	int* arr = new int[N*N];

	for (int i = 0; i < N*N; i++) {
		int temp;
		cin >> temp;
		arr[i] = temp;
	}
	
	
	sort(arr, arr+N*N, greater<int>());

	cout << arr[N - 1];

	delete[] arr;
}