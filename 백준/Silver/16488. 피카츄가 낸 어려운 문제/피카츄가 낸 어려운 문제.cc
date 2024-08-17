/*
- Title : 16488 - Pikachu's Difficult Question
- Start Time : 24-08-17, 11:06
- End Time : 24-08-17, 11:17
- Try : 2(1 : int size)
- Category : mathematics, long long, trigonometric functions
*/

/*
Let A = (x, y), B = (0, 0), C = (c. 0), P = (t, 0), the angle (ABP) is theta.
The length of line segment AP^2 is given by:
	AP^2 = N^2 + t^2 - 2cos(theta)NT = N^2 + t^2 - 2xt
The length of line segment BP = t, and the length of line segment CP = c - t = 2x - t.
Thus, the product of the line segments BP and CP is:
	BP * CP = 2xt - t^2.
Now, adding AP^2 and BP * CP:
	AP^2 + BP * CP =  N^2 + t^2 - 2xt + 2xt - t^2 = N^2.
Therefore, the final solution of problem is N^2 * K.
*/

#include<iostream>

using namespace std;

int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(false);

	long long N;
	cin >> N;
	long long K;
	cin >> K;

	cout << N * N * K;
}

//Finish