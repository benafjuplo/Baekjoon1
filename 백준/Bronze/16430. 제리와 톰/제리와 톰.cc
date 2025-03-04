/*
- Title : 16430 - Jerry and Tom
- Start Time : 25-03-04, 21:43
- End Time : 25-03-04, 21:54
- Try : 1
- Category : mathematics, elementary arithmetic, proof
- Language : C++20
*/

/* 한국어 주석
"양의 정수 a와 b가 서로소일 때 b-a와 b 또한 서로소이다."에 대한 증명은 다음과 같다.
1. b-a와 b가 서로소가 아니라고 가정해보자. 그러면 b-a와 b를 공통으로 나누는 인수 1이 아닌 정수 d가 존재한다.
2. 수식으로 정리하면 b = d * k, b - a = d * m이 된다.
3. 좌식과 우식을 빼면 b - (b - a) = d * k - d * m = d * (k - m)이 되고 이는 b - (b - a)는 d로 나누어진 다는 것을 의미한다.
4. 그런데 b - (b - a)는 a이고 a와 b를 동시에 나누는 d는 존재할 수 없으므로 b-a와 b가 서로소가 아니라는 가정은 옳지 않다.
5. 따라서 양의 정수 a와 b가 서로소일 때 b-a와 b 또한 서로소이다.
따라서 바로 출력하면 된다.
*/

#include<iostream>

using namespace std;

int main() {
	cin.tie(0);
	//cout.tie(0);
	ios_base::sync_with_stdio(false);

	int a, b;
	cin >> a >> b;
	cout << b - a << " " << b;

	return 0;
}

//Finish