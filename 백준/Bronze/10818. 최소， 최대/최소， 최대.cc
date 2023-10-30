#include<iostream>
#include<vector>
using namespace std;
/*N개의 정수가 주어진다. 이때, 최솟값과 최댓값을 구하는 프로그램을 작성하시오.*/
int main() {
	int N;	// Input N, natural number
	cin >> N;
	try {
		if (N <= 0)  // natural number check
			throw "The number is not a natural number.";
	}
	catch (const char* s) {
		cout << s;
	}
	
	vector <int> integer;
	for (int i = 0; i < N; i++) {
		int temp;
		cin >> temp;
		integer.push_back(temp);
	}
	int min = integer[0];
	int max = integer[0];
	for (int i = 1; i < N; i++) {
		if (min > integer[i])		
			min = integer[i];
		if (max < integer[i])
			max = integer[i];
	}
	cout << min << " " << max;
}