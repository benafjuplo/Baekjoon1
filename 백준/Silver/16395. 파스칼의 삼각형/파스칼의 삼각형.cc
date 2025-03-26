/*
- Title : 16395 - Pascal's Triangle
- Start Time : 25-03-26, 11:27
- End Time : 25-03-26, 13:16
- Try : 1
- Category : mathematics, dynamic programming, pascal's triangle, binomial coefficient
- Language : C++20
*/

/* 한국어 주석
현재의 파스칼 삼각형은 이전 단계의 파스칼 삼각형에 의해서 결정된다.
규칙이 명확하기에 다이나믹 프로그래밍으로 간단히 구현 가능하다.
C++은 0-베이스 인덱싱임에 유의하여 답안을 출력한다.
*/

#include<iostream>
#include<vector>

using namespace std;

int main() {
	cin.tie(0);
	//cout.tie(0);
	ios_base::sync_with_stdio(false);

	int n, k;
	cin >> n >> k;

	vector<vector<int>> pascal(n, vector<int>(n, 0));

	pascal[0][0] = 1;

	for (int i = 1;i < n;++i) {
		
		pascal[i][0] = 1;
		for (int j = 1; j < i;++j) {
			int left = pascal[i-1][j - 1];
			int right = pascal[i - 1][j];
			pascal[i][j] = left + right;
		}
		pascal[i][i] = 1;
	}
	
	// debug
	//for (int i = 0;i < n;++i) {
	//	for (int j = 0;j < n;++j) {
	//		cout << pascal[i][j] << " ";
	//	}
	//	cout << "\n";
	//}

	cout << pascal[n-1][k-1];

	return 0;
}

// Finish