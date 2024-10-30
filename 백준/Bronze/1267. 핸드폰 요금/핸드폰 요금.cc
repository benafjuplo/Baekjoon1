/*
- Title : 1267 - Cell Phone Charges
- Start Time : 24-10-30, 10:00
- End Time : 24-10-30, 10:07
- Try : 1
- Category : mathematics
- Language : C++14
*/

/* 한국어 문제 요약
- 문제
다음 두 가지 요금제 중 하나를 선택해야 한다.
Y 요금제는 30초마다 10원씩 청구된다. 이 말은 만약 29초 또는 그 보다 적은 시간 통화를 했으면 10원이 청구된다. 만약 30초부터 59초 사이로 통화를 했으면 20원이 청구된다.
M 요금제는 60초마다 15원씩 청구된다. 이 말은 만약 59초 또는 그 보다 적은 시간 통화를 했으면 15원이 청구된다. 만약 60초부터 119초 사이로 통화를 했으면 30원이 청구된다.
저번 달의 통화 시간 목록이 주어지면 어느 요금제를 사용 하는 것이 저렴한지 출력하는 프로그램을 작성하시오.

- 입력
저번 달에 이용한 통화의 개수 N이 주어진다. N은 20보다 작거나 같은 자연수이다. 둘째 줄에 통화 시간 N개가 주어진다. 통화 시간은 10,000보다 작거나 같은 자연수이다.

- 출력
첫째 줄에 싼 요금제의 이름을 출력한다. 그 후에 공백을 사이에 두고 요금이 몇 원 나오는지 출력한다. 만약 두 요금제의 요금이 모두 같으면 Y를 먼저 쓰고 M을 그 다음에 쓴다.
Y 요금제는 Y로, M 요금제는 M으로 출력한다.

- 예제
입력 1 : 
3
40 40 40
출력 1 : 
M 45
입력 2 :
3
61 61 61
출력 2 :
Y M 90
입력 3 :
2
61 10
출력 3 :
Y 40
입력 4 :
2
60 65
출력 4 :
Y M 60
*/

/* 한국어 주석
이 문제는 간단한 수학 문제이다.

사실 M 요금제가 Y 요금제보다 특정 사용 시간을 기준으로 좋을 수 밖에 없다. 하지만 저렴한 요금제를 결정하고 그 요금을 알아내야 하므로 직접 계산을 맞춰야 한다.

추가로 입력 범위가 매우 작으므로 int 자료형으로 해결 가능하다.
간단한 수학으로 해결 가능하므로 추가적인 주석은 남기지 않는다.
*/

/* English Problem Summary
- Question
The Y plan charges 10 won for every 30 seconds. This means that if the call duration is 29 seconds or less, the charge is 10 won. If the call lasts between 30 and 59 seconds, the charge is 20 won.
The M plan charges 15 won for every 60 seconds. This means that if the call duration is 59 seconds or less, the charge is 15 won. If the call lasts between 60 and 119 seconds, the charge is 30 won.
Given a list of last month’s call durations, write a program to determine which plan is cheaper.

- Input
The first line contains the number of calls made last month, N. N is a natural number less than or equal to 20.
The second line contains N call durations. Each call duration is a natural number less than or equal to 10,000.

- Output
Print the name of the cheaper plan on the first line, followed by the total cost. If both plans have the same total cost, print Y first, followed by M.
Use "Y" for the Y plan and "M" for the M plan.

- Example
Input 1 :
3
40 40 40
Output 1 :
M 45
Input 2 :
3
61 61 61
Output 2 :
Y M 90
Input 3 :
2
61 10
Output 3 :
Y 40
Input 4 :
2
60 65
Output 4 :
Y M 60
*/

/* English Comment
This problem is a simple mathematics problem.

In fact, the M plan is better than the Y plan for certain usage times. However, since it’s necessary to determine the cheaper plan and calculate its cost, it needs to be calculated directly.

Additionally, since the input range is very small, it can be handled using the int data type.
No further comments are provided as the problem can be solved with straightforward calculations.
*/

#include<iostream>

using namespace std;

int main() {
	cin.tie(0);
	//cout.tie(0);
	ios_base::sync_with_stdio(false);

	int N;
	cin >> N;

	int aCharges = 0;
	const int BASETIMEA = 30;
	const int BASECOSTA = 10;
	int bCharges = 0;
	const int BASETIMEB = 60;
	const int BASECOSTB = 15;

	while (N--) {
		int time;
		cin >> time;
		aCharges += (1 + time / BASETIMEA) * BASECOSTA;
		bCharges += (1 + time / BASETIMEB) * BASECOSTB;
	}

	if (aCharges == bCharges)
		cout << "Y M " << aCharges;
	else if(aCharges < bCharges)
		cout << "Y " << aCharges;
	else
		cout << "M " << bCharges;

	return 0;
}

//Finish