/*
- Title : 23235 - The Fastest Sorting Algorithm In The World
- Start Time : 24-12-09, 17:11
- End Time : 24-12-09, 17:14
- Try : 1
- Category : string, getline, simple, basic
- Language : C++14
*/

/* 한국어 문제 요약
- 문제
이 문제에서 사용할 알고리즘은 O(1) 또는 상수 시간으로 정렬한다. 이 알고리즘은 입력이 이미 고속 액세스 메모리에 있는 배열이고 입력이 이미 정렬되어 있다고 가정한다.
세계에서 가장 빠른 정렬 알고리즘을 사용하여 예시와 같이 문제를 해결하라.

- 입력
입력에는 여러 테스트 케이스가 포함되어 있으며, 각각은 정렬할 배열을 설명한다. 각 배열은 정수 0 < N ≤ 100으로 시작한다.
N 뒤에는 정렬할 N개의 정수가 오는데, 이는 감소하지 않는 순서로 제공된다. 정렬할 모든 정수는 0~100000 범위에 있다.
마지막 테스트 케이스 뒤에는 단일 0이 주어진다.

- 출력
각 테스트 케이스에 대해 1부터 시작하여 테스트 케이스 번호와 "Sorting... done!" 텍스트를 차례로 출력한다.

- 예제
입력 : 
5 21 44 48 48 64
6 8 19 22 49 53 62
8 5 9 14 17 24 25 27 61
4 13 21 28 35
5 31 38 44 49 60
0
출력 : 
Case 1: Sorting... done!
Case 2: Sorting... done!
Case 3: Sorting... done!
Case 4: Sorting... done!
Case 5: Sorting... done!
*/

/* 한국어 주석
이 문제는 입력 데이터를 단순히 읽고 특정 형식으로 출력하는 문제이다.
문제에서 언급된 "O(1) 정렬 알고리즘"은 입력 데이터가 이미 정렬되어 있다는 조건에서 정렬 작업을 생략함으로써 정렬이 상수 시간에 수행된다는 의미로 해석할 수 있다.

입력의 각 테스트 케이스는 N과 정렬된 N개의 숫자를 포함하며, 이를 단순히 무시하고 주어진 출력 형식에 따라 결과를 작성하면 된다.
getline()을 사용하여 입력을 처리하면 줄 단위로 데이터를 효율적으로 읽어들일 수 있다.
*/

/* English Problem Summary
- Problem
The algorithm used in this problem sorts in O(1) or constant time. This algorithm assumes the input is an array already in high-speed access memory and pre-sorted.
Solve the problem using the world's fastest sorting algorithm, as illustrated in the example.

- Input
The input consists of multiple test cases, each describing an array to be sorted. Each array begins with an integer 0 < N ≤ 100.
After N, there are N integers to sort, provided in non-decreasing order. All integers to sort are within the range 0-100000.
A single 0 follows the last test case.

- Output
For each test case, sequentially print the test case number starting from 1, followed by the text "Sorting... done!".

- Example
Input :
5 21 44 48 48 64
6 8 19 22 49 53 62
8 5 9 14 17 24 25 27 61
4 13 21 28 35
5 31 38 44 49 60
0
Output :
Case 1: Sorting... done!
Case 2: Sorting... done!
Case 3: Sorting... done!
Case 4: Sorting... done!
Case 5: Sorting... done!
*/

/* English Comment
This problem involves reading input data and producing output in a specific format.
The "O(1) sorting algorithm" mentioned in the problem can be interpreted as skipping the sorting process entirely, as the input data is already sorted.

Each test case in the input contains N and N sorted numbers, which can be ignored for the output.
Simply format the result according to the specified output requirements. Using `getline()` for input processing allows efficient line-by-line data handling.
*/

#include<iostream>
#include<string>

using namespace std;

int main() {
	cin.tie(0);
	//cout.tie(0);
	ios_base::sync_with_stdio(false);

	string str;
	getline(cin, str);

	int cnt = 1;

	while (str != "0") {
		cout << "Case " << cnt++ << ": Sorting... done!" << "\n";
		getline(cin, str);
	}
	
	return 0;
}

//Finish