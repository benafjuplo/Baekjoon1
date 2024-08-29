/*
- Title : 31473 - Sky blue and pink
- Start Time : 24-08-29, 15:00, 16:20
- End Time : 24-08-29,	 15:09, 17:29
- Try : 2(1 : Input miss)
- Category : mathematics, simple
*/

#include<iostream>
#include<cmath>

using namespace std;

int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(false);

	int N;	// 1 <= N <= 1000
	cin >> N;


	// 1<= A, B <= 100. thus, 1 <= sumOfA, sumOfB <= 1000*100 == 100'000
	int sumOfA = 0;
	int sumOfB = 0;

	// Reason of try 1 : input miss
	//for (int i = 0; i < N; i++) {
	//	int A; int B;	// 1<= A, B <= 100. thus, 1 <= sumOfA, sumOfB <= 1000*100 == 100'000
	//	cin >> A >> B;
	//	sumOfA += A;
	//	sumOfB += B;
	//}

	for (int i = 0; i < N; i++) {
		int A;
		cin >> A;
		sumOfA += A;
	}

	for (int i = 0; i < N; i++) {
		int B;
		cin >> B;
		sumOfB += B;
	}


	int a, b;	// -1'000'000 < a, b < 1'000'000

	a = sumOfB;
	b = sumOfA;

	cout << a << " " << b;	
}

//Finish