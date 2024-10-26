/*
- Title : 4999 - Aaah!
- Start Time : 24-10-06, 23:21
- End Time : 24-10-06, 23:25
- Try : 1
- Category : basic, simple, string
- Language : C++14
*/

/* 한국어 문제 요약
- 문제
목이 아픈 환자가 병원에 갔다. 의사는 환자에게 "aaah"를 말해보라고 시켰다.
하지만 환자는 의사가 요구하는 만큼 소리를 내지 못할 수도 있다.

각 의사는 특정 길이의 "aah"를 요구한다.
예를 들어, 어떤 의사는 "aaaaaah"를 요구하기도 하고, "h"만 요구하는 의사도 있다.
모든 의사는 자신이 원하는 길이의 "aah"를 듣지 못하면 진단을 내릴 수 없다.

환자가 낼 수 있는 "aah"의 길이와 의사가 요구하는 "ahh"의 길이가 주어질 때, 환자가 그 병원에 가야하는지 여부를 판별하는 프로그램을 작성하시오.

- 입력
입력은 두 줄로 이루어져 있다.
첫째 줄은 환자가 가장 길게 낼 수 있는 "aaah"이다.
둘째 줄은 의사가 듣기를 원하는 "aah"이다.
두 문자열은 모두 a와 h로만 이루어져 있다. a의 개수는 0보다 이상, 999 이하이고, 항상 h는 마지막에 하나만 붙는다.

- 출력
환자가 그 병원에 가야하면 "go"를, 아니면 "no"를 출력한다.

- 예제
입력 1:
aaah
aaaaah
출력 1:
no
입력 2:
aaah
ah
출력 2:
go
*/

/* 한국어 주석
이 문제는 문자열의 길이를 비교하는 문제이다.

문제의 설명은 길어 보이지만, 실제 구현은 간단하다.
두 문자열을 입력받아 길이를 비교한 후, 첫 번째 문자열이 더 길거나 같으면 "go"를 그렇지 않으면 "no"를 출력한다.
*/

/* English Problem Summary
- Question
A patient with a sore throat went to the hospital. The doctor asked the patient to say "aaah".
However, the patient may not be able to make the sound as long as the doctor requires.

Each doctor has a specific length of "aah" they expect.
For example, one doctor might require "aaaaaah", while another might only require "h".
If the doctor doesn't hear the length of "aah" they need, they cannot make a diagnosis.

Given the length of "aah" the patient can say and the length the doctor requires, write a program to determine if the patient should go to that hospital.

- Input
The input consists of two lines.
The first line is the longest "aaah" the patient can say.
The second line is the "aah" the doctor expects to hear.
Both strings consist only of 'a' and 'h', with a count of 'a' between 0 and 999, and exactly one 'h' at the end.

- Output
If the patient should go to that hospital, print "go"; otherwise, print "no".

- Example
Input 1:
aaah
aaaaah
Output 1:
no
Input 2:
aaah
ah
Output 2:
go
*/

/* English Comment
This problem involves comparing the lengths of two strings.

Although the problem description may seem lengthy, the actual implementation is simple.
Input two strings, compare their lengths, and if the first string is longer or equal in length, print "go"; otherwise, print "no".
*/

#include<iostream>
#include<string>

using namespace std;

int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(false);

	string patient;
	string doctor;

	cin >> patient >> doctor;

	if (patient.size() >= doctor.size())
		cout << "go";
	else
		cout << "no";

}

//Finish