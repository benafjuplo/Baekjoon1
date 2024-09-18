/*
- Title : 20352 - Circus
- Start Time : 24-09-18, 20:33
- End Time : 24-09-18, 20:41
- Try : 1
- Category : mathematics, round-off, pi, circle
*/

/* 한국어 문제 요약
- 문제
원형 서커스 텐트의 주위에 서커스 텐트의 둘레와 같은 길이로 울타리 벽을 세우려고 한다.
서커스 텐트의 면적이 정수로 주어질 때, 울타리를 위한 최소 길이를 구하시오.

- 입력
서커스 텐트의 면적 a가 정수로 주어진다. (1 <= a <= 10^18)
단위는 제곱미터이다.

- 출력
서커스 울타리 벽에 필요한 울타리의 총 길이를 미터 단위로 출력한다.
정답은 최대 절대 또는 상대 오차가 10^-6 이내여야 한다.

- 예제
입력 1 :
64
출력 1 :
28.3592616145
입력 2 :
1234
출력 2 :
124.526709336
*/

/* 한국어 주석
이 문제는 원의 둘레와 면적에 관한 문제이다.
주어진 값은 원의 면적으로, 원의 면적 공식은 파이 * 반지름^2이다.
이를 통해 반지름을 구한 후, 원의 둘레 공식인 2 * 파이 * 반지름을 사용하여 둘레를 구한다.
이 때 오차 범위를 10^-6 이내로 맞추기 위하여 파이를 <cmath> 헤더의 M_PI 상수를 사용하거나, 직접 7자리 이상의 파이 값을 선언하여 사용할 필요가 있다.
마지막으로는 적당히 10자리 정도에서 반올림하여 출력하면 된다.
*/

/* English Problem Summary
- Question
A circular fence is to be built around a circus tent, with the fence having the same length as the circumference of the tent.
Given the area of the circus tent as an integer, find the minimum length of the fence required.

- Input
The input consists of a single integer a, which represents the area of the circus tent in square meters (1 <= a <= 10^18).

- Output
Print the total length of the fence required in meters. The answer must have an absolute or relative error of no more than 10^-6.

- Example
Input 1 :
64
Output 1 :
28.3592616145
Input 2 :
1234
Output 2 :
124.526709336
*/

/* English Comment
This problem involves the circumference and area of a circle.
The given value is the area of the circle, and the formula for the area is π * radius^2.
Using this, the radius can be calculated, and then the circumference can be found using the formula 2 * π * radius.
To ensure the error is within 10^-6, it is necessary to either use the constant M_PI from the <cmath> header or declare a value of π with at least 7 decimal places manually.
Finally, rounding the result to around 10 decimal places before outputting should be sufficient.
*/

#define _USE_MATH_DEFINES

#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(false);

	double area;
	cin >> area;
	double radius = sqrt(area / M_PI);
	double length = M_PI * radius * 2;
	
	cout << fixed << setprecision(10) << length;
}

//Finish