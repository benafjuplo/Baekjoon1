/*
- Title : 27467 - Math Quiz
- Start Time : 24-09-02, ??:??
- End Time : 24-09-02, 00:26
- Try : 1
- Category : mathematics
*/

/* 한국어 문제 요약
- 문제
이차방정식 x^2 + x + 1 = 0의 한 복소근을 w라고 할 때, N개의 정수 A1, A2, ... AN이 주어지면 다음 등식을 만족하는 두 실수 p, q를 구한다.
w^A1 + w^A2 + ... + w^AN = pw + q

- 입력
첫 번째 줄에 정수 N이 주어진다.
두 번째 줄에는 N개의 정수 A1, A2, ..., AN이 주어진다.

- 출력
두 실수 p, q를 출력한다. 단, 정답과의 절대/상대 오차는 10^-9까지 허용한다.

- 제한
2<= N <= 3*10^5
0<= Ai <= 10^9

- 예제
입력 :
3
0 2 2
출력 :
-2.000000000 -1.000000000
*/

/* 한국어 주석
이 문제는 수학적으로 증명하면 간단하게 해결할 수 있다.
2가지 방법으로 증명하였는데 간단한 방법을 먼저 설명한다.
아래 증명의 목표는 복소근 w의 지수들을 상수과 w에 상수 곱한 형태로 만드는 것이다.

증명 1:
우선 w^0 = 1와 w^1 = w 이 두 가지는 자명하다.
다음으로 이차 방정식 x^2 + x + 1 = 0에 복소근 w를 대입한다.
그러면 w^2 + w + 1 = 0로 다시 쓸 수 있다. 왼편에 w^2만을 남기고 나머지를 우편으로 넘기면 w^2 = -w - 1을 얻을 수 있다.
이후부터는 위에서 구한 w^1그리고 w^2를 가지고 구할 수 있다.
w^3 = w^2 * w^1 = (-w - 1) * w = -w^2 - w = -( -w - 1) - w = w + 1 - w = 1
w^4 = w^3 * w = 1 * w = w
w^5 = w^4 * w^1 = w * w = w^2 = -w -1
...

그러면 3을 주기로 반복하여 결과가 나타나는 것을 확인할 수 있다.
따라서 A%3 == 0과 A%3 == 1, A%3 == 2일 때로 나누어 문제를 간단히 할 수 있다.

증명 2:
이 방법은 복소수에 대한 사전 지식이 필요하다.
우선 w^0 = 1과 w^1 = w은 자명하므로 증명은 넘어간다.

증명1과 달리 근의 공식을 사용하여 이차 방정식의 복소근을 직접 구하면 '(-1 +- root(3)i)/2'인 것을 확인할 수 있다.
이 형식을 복소평면에서 복소수의 지수 형태로 바꾸면 'e^+-j2π/3'가 된다.
이 복소수는 크기는 1로 고정되어 있고, 지수를 0, 1, 2, 3, ...으로 계속 변화를 주면 각도만 계속 변화하는데 각각 0, 2π/3, 4π/3, 6π/3, ...이 되는데 사실 6π/3 = 360°= 0°= 0 [rad]이다.
즉, 0, 2π/3, 4π/3으로 세 가지 패턴을 가지고 반복되는데 여기서 각도가 0은 지수가 3으로 나눈 나머지가 0인 경우이고 이것은 w^0과 같으므로 1이다.
각도가 2π/3인 경우에는 지수가 3으로 나눈 나머지가 1인 경우이고 이것은 w^1과 같으므로 w이다.
조금 복잡한 것은 각도가 4π/3인 경우인데 지수가 3으로 나눈 나머지가 2인 경우로 w^2가 대표이다.

+-4π/3인 경우는 그 자체적으로 끝낼 수 없으므로 해석을 해야하는데 각도로 복소평면으로 생각하면 실수 부분은 그대로 이지만 허수 부분은 반전된 형태이다.
직교좌표 형태로 표현하면 '(-1 -+ root(3)i)/2' 이다.
복소근 w부터 시작하여 허수를 먼저 같게하기 위해 마이너스를 곱하면 '-(-1 +- root(3)i)/2 = +1/2 -+root(3)i)/2'가 되는데 실수 +1/2를 -1/2로 만들기 위해 -1을 더하면 가능하다.
복잡하지만 정리하면 w^2 = (-1 -+ root(3)i)/2 = -(-1 +- root(3)i)/2 - 1 = -w - 1이 된다.
다시 정리하면 w^2 = -w - 1이다.

3을 주기로 반복하여 결과가 나타나고 이것을 적절히 표현하였다.
따라서 A%3 == 0과 A%3 == 1, A%3 == 2일 때로 나누어 문제를 간단히 할 수 있다.


위 두 증명을 통해 이후 간단히 모듈러 연산을 사용하여 p와 q를 결정할 수 있다.
*/

/* English problem summary
- Question
Given a complex solution of quadratic equation x^2 + x + 1 = 0, find two real numbers p and q that satisfy the following equation for a given sequence of N integers A1, A2, ..., AN:
w^A1 + w^A2 + ... + w^AN = pw + q

- Input
The first line contains an integer N.
The second line contains N integers A1, A2, ..., AN.

- Output
Output the two real numbers p and q. The absolute/relative error with the correct answer must be within 10^-9.

- Constraints
2<= N <= 3*10^5
0<= Ai <= 10^9

- Exapmle
Input :
3
0 2 2
Output :
-2.000000000 -1.000000000
*/

/* English Comment
This problem can be easily solved through mathematical proof. I have provided two methods of proof, starting with the simpler one.
The goal of the proof below is to express the exponents of the complex solution w in the form of constants and multiples of w.

Proof 1:
First, w^0 = 1 and w^1 = w are self-evident. Next, substitute the complex root w into the quadratic equation x^2 + x + 1 = 0.
This can be rewritten as w^2 + w + 1 = 0. By isolating w^2 on the left-hand side and moving the rest to the right-hand side, we get w^2 = -w - 1.
From this point onward, we can use the previously derived w^1 and w^2 to calculate further values.
w^3 = w^2 * w^1 = (-w - 1) * w = -w^2 - w = -( -w - 1) - w = w + 1 - w = 1
w^4 = w^3 * w = 1 * w = w
w^5 = w^4 * w^1 = w * w = w^2 = -w -1
...

From this, we can observe that the results repeat with a cycle of 3.
Therefore, we can simplify the problem by dividing it into cases where A % 3 == 0, A % 3 == 1, and A % 3 == 2.

Proof 2:
This method requires some prior knowledge of complex numbers.
First, since w^0 = 1 and w^1 = w are self-evident, we will skip proving them.

Unlike Proof 1, by directly solving the quadratic equation using the quadratic formula, we find that the complex roots are '(-1 +- root(3)i)/2'.
When this form is converted to the exponential form of a complex number on the complex plane, it becomes 'e^+-j2π/3'.
This complex number has a fixed magnitude of 1, and as the exponent changes to 0, 1, 2, 3, ..., only the angle changes, corresponding to 0, 2π/3, 4π/3, 6π/3, ....
In fact, 6π/3 = 360°= 0°= 0 [rad].

Therefore, there are three repeating patterns: 0, 2π/3, 4π/3.
Here, the angle of 0 corresponds to cases where the exponent modulo 3 equals 0, which is the same as w^0, so it is 1.
The angle 2π/3 corresponds to cases where the exponent modulo 3 equals 1, which is the same as w^1, so it is w.
The slightly more difficult case is when the angle is 4π/3, which corresponds to the exponent modulo 3 equaling 2, and the representative case is w^2.

For +-4π/3, it cannot be simplified directly, so it must be interpreted.
When considering it as a point on the complex plane, the real part remains the same, but the imaginary part is inverted.
Expressing this in Cartesian coordinates gives '(-1 -+ root(3)i)/2'.
Starting from the complex root w, multiplying by a negative sign to equalize the imaginary parts gives '-(-1 +- root(3)i)/2 = +1/2 -+root(3)i)/2'. Adding -1 to change the real part +1/2 to -1/2 results in the final form.
Although complex, in summary, w^2 = (-1 -+ root(3)i)/2 = -(-1 +- root(3)i)/2 - 1 = -w - 1.
Finally, w^2 = -w - 1.

The results repeat with a cycle of 3, and this can be expressed appropriately.
Therefore, the problem can be simplified by dividing it into cases where A % 3 == 0, A % 3 == 1, and A % 3 == 2.


Using these two proofs, the values of \( p \) and \( q \) can be easily determined through simple modular arithmetic.
*/


#include<iostream>
#include<iomanip>

using namespace std;

int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(false);

	int N; // Number of exponents
	cin >> N;

	// pw + q
	int p = 0; 
	int q = 0;
	
	for (int i = 0; i < N; i++) {
		int A;	// exponent
		cin >> A;

		int rest = A % 3;

		switch (rest) {
		case 0:
			q++;
			break;
		case 1:
			p++;
			break;
		case 2:
			p--;
			q--;
			break;
		default:
			break;
		}
	}

	cout << p << " " << q;
}

//Finish