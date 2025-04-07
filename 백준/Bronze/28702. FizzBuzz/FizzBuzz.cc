/*
- Title : 28702 - FizzBuzz
- Start Time : 25-03-24, 15:32
- End Time : 25-03-24, 15:49
- Try : 1
- Category : mathematics, string
- Language : C++20
*/

/* 한국어 주석
이 문제는 단순히 1부터 99999999(8자리 숫자)까지 직접 구하면 시간 안에 계산 불가능하다.

문제 자체는 간단하게 눈치챌 수 있다.
주어진 문자열 3개 중 하나 이상의 숫자가 있다면 그 숫자의 위치를 기준으로 +x를 하고 그것을 문제의 FizzBuzz 규칙을 적용하면 된다는 것이다.

가장 중요한 것은 문자열 3개 중 항상 하나 이상의 숫자가 보장되는가이다.

간단하게 확인 가능하다.
숫자의 경우, 3의 배수도 아니고 5의 배수도 아니어야 한다.
자연수가 있을 때 3의 배수는 3번에 한 번씩 돌아오고, 5의 배수는 5번에 한 번씩 돌아온다.
숫자 3개 묶음에 영향을 주려면 규칙 3개가 동시에 들어맞는 경우가 있거나 규칙이 주기가 더 빨라야 하는데 규칙의 개수는 2개이고, 5는 주기가 3보다 느리고 3은 주기가 같다.
따라서 3개가 한 번에 규칙의 영향을 받을 경우는 발생하지 않기에 간단한 풀이가 가능하다.
*/

#include<iostream>
#include<string>
#include<cctype>

using namespace std;

int main() {
	cin.tie(0);
	//cout.tie(0);
	ios_base::sync_with_stdio(false);

	string a, b, c;
	cin >> a >> b >> c;

	int n = 0;
	string str = "";

	if (isdigit(a[0])) {
		n = stoi(a) + 3;
	}

	else if (isdigit(b[0])) {
		n = stoi(b)+2;
	}

	else if (isdigit(c[0])) {
		n = stoi(c)+1;
	}

	if (n % 3 == 0 && n % 5 == 0)
		str = "FizzBuzz";
	else if (n % 3 == 0 && n % 5 != 0)
		str = "Fizz";
	else if (n % 3 != 0 && n % 5 == 0)
		str = "Buzz";
	else if (n % 3 != 0 && n % 5 != 0)
		str = to_string(n);

	cout << str;
	return 0;
}

// Finish