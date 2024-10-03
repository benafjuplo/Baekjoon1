/*
- Title : 27590 - Sun and Moon
- Start Time : 24-10-03, 20:04
- End Time : 24-10-03, 20:16
- Try : 1
- Category : brute force, simulation
- Language : C++14
*/

/* 한국어 문제 요약
- 문제
최근에 일식이 있었다.
일식은 태양과 달이 특정 위치에 일렬로 정렬될 때 발생한다.
태양과 달에 대해 각각 몇 년 전에 올바른 위치에 있었는지, 그 위치로 돌아오는데 몇 년이 걸리는지를 알고 있다.
다음 일식이 발생할 때까지 남은 연도 수를 구하시오.

- 입력
첫 번째 줄에는 ds와 ys가 주어진다. (0 <= ds < ys <= 50).
ds는 태양이 몇 년 전에 올바른 위치에 있었는지를 나타내며, ys는 태양이 원래 위치로 돌아오는 데 걸리는 연도 수를 나타낸다.

두 번째 줄에는 dm와 ym이 주어진다. (0 <= dm < ym <= 50).
dm은 달이 몇 년 전에 올바른 위치에 있었는지를 나타내며, ym는 달이 원래 위치로 돌아오는 데 걸리는 연도 수를 나타낸다.

입력은 현재 일식이 발생하지 않으며, 다음 일식은 5000년 이내에 발생하도록 주어진다.

- 출력
다음 일식까지 남은 연도 수를 단일 정수로 출력한다.

- 예제
입력 : 
3 10
1 2
출력 : 
7
*/

/* 한국어 주석
이 문제는 최소공배수 또는 최대공약수를 사용하여 해결할 수 있어 보이지만 해결법을 발견하지 못하였다.
대신 문제의 설명에 주어진 "결과는 5000년 이내"라는 조건에 주목하여 문제를 해결하였다.

우선 결과 값을 resultYear라고 정의한다. 조건에 따르면 지금 당장 일식이 일어나지 않는 상태이므로, resultYear는 1부터 5000까지의 범위이다.
(일반적으로 within은 5000을 포함하지 않지만 가끔식 모호한 경우가 있으므로 5000을 포함하여 작성하였다.)
그 이후 1부터 5000까지의 연도에 대해 각각 일식이 일어났는지 확인하다.
어려운 부분은 일식인지 확인하는 방법이다.

여기서는 resultYear % ys == (ys-ds)%ys이고 resultYear % ym == (ym-dm)%ym인 경우 일식이 일어난다고 확인하였다.
*/

/* English Problem Summary
- Question
There was a recent solar eclipse.
A solar eclipse occurs when the sun and the moon align in specific positions.
For both the sun and the moon, we know how many years ago they were in the correct position and how many years it takes for them to return to that position.
Calculate the number of years remaining until the next solar eclipse occurs.

- Input
The first line contains two integers, ds and ys. (0 ≤ ds < ys ≤ 50)
ds represents how many years ago the sun was in the correct position, and ys represents the number of years it takes for the sun to return to its original position.

The second line contains two integers, dm and ym. (0 ≤ dm < ym ≤ 50)
dm represents how many years ago the moon was in the correct position, and ym represents the number of years it takes for the moon to return to its original position.

The input guarantees that there is no solar eclipse currently occurring, and the next solar eclipse will occur within 5000 years.

- Output
Print a single integer representing the number of years remaining until the next solar eclipse.

- Example
Input :
3 10
1 2
Output :
7
*/

/* English Comment
This problem might seem solvable using the least common multiple (LCM) or greatest common divisor (GCD), but no solution was found using that approach.
Instead, the condition mentioned in the problem description, "the result will be within 5000 years," was used to solve it.

First, define the result as resultYear. According to the condition, since a solar eclipse is not happening right now, resultYear will range from 1 to 5000.
(While "within" typically means not including 5000, ambiguity sometimes arises, so 5000 was included.)
Next, each year from 1 to 5000 is checked to see if a solar eclipse occurs.
The challenging part is determining when an eclipse happens.

Here, an eclipse occurs when resultYear % ys == (ys - ds) % ys and resultYear % ym == (ym - dm) % ym.
*/

#include<iostream>

using namespace std;

int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(false);

	// sun
	int ds, ys;
	cin >> ds >> ys;
	// moon
	int dm, ym;
	cin >> dm >> ym;
	
	int resultYear = 1;

	for (; resultYear <= 5000; resultYear++) {
		//check the eclipse
		if (resultYear % ys == (ys-ds)%ys && resultYear % ym == (ym-dm)%ym)
			break;
	}

	cout << resultYear;
}

//Finish