/*
- Title : 31052 - Relocation
- Start Time : 24-11-13, 21:31
- End Time : 24-11-13, 21:41
- Try : 1
- Category : unordered_map, map, 1-based indexing vector
- Language : C++14
*/

/* 한국어 문제 요약
- 문제
단일 선에 위치한 회사들의 위치가 주어진다. 따라서 두 회사의 거리는 두 회사의 위치의 차와 같다.
회사의 위치를 업데이트 하거나 두 회사 간의 거리를 출력하는 요청을 처리하는 프로그램을 작성하라.

- 입력
첫 번째 줄에 N과 Q가 주어진다. N은 앱이 추적하는 회사 수(2 <= N <= 100,000), Q는 처리할 요청의 수(1 <= Q <= 100,000)이다.
다음 줄에는 공백으로 구분된 초기 위치를 나타내는 정수 Xi(1 <= Xi <= 10^9)가 i=1 부터 i=N의 순서대로 N개 주어진다.
이후 공백으로 구분된 3개의 정수로 이루어진 Q개의 줄이 주어진다. 이때 두 가지 형태가 가능하며 각각 다음과 같이 처리한다.
1 C X, 이는 회사 C를 위치 X로 이동하는 것을 요청한다.
2 A B, 이는 회사 A와 B 사이의 회사 간 거리를 요청한다.
1 <= A, B, C <= N 그리고 1 <= X <= 10^9가 보장된다. 두 회사가 같은 위치를 공유할 수 있다. 또한 최소 하나 이상의 두 번째 유형의 요청이 보장된다.

- 출력
두 번째 유형에 대하여 회사 간 거리를 출력한다.

- 예제
입력 : 
5 10
5 2 8 1 4
1 2 10
2 4 5
2 1 3
1 4 3
2 1 5
2 5 2
1 4 1
2 2 4
1 3 15
2 4 1
출력 : 
3
3
1
6
9
4
*/

/* 한국어 주석
이 문제는 회사의 위치를 저장하여 요청에 따라 특정 회사의 위치를 업데이트 하거나 특정 두 회사 사이의 거리를 출력하는 문제이다.

이러한 방식은 직관적으로 unordered_map이 떠오른다. unordered_map 또한 매우 빠른 접근이 가능하므로 이 문제에서 사용 가능하다.
하지만 회사의 위치는 숫자이므로 <int, int> 형식의 unordered_map 대신 <int> 자료형의 vector를 사용할 수 있다.
vector를 사용하면 unordred_map을 사용하는 것보다 메모리와 시간 소모에서 더 많은 이점을 얻을 수 있다.
*/

/* English Problem Summary
- Question
The positions of companies located on a single line are given. The distance between two companies is defined as the absolute difference between their positions.
Write a program to handle requests for updating a company's position or querying the distance between two companies.

- Input
The first line contains two integers, N and Q, where N is the number of companies being tracked by the app (2 <= N <= 100,000), 
and Q is the number of requests to process (1 <= Q <= 100,000).
The second line contains N integers Xi (1 <= Xi <= 10^9), representing the initial positions of the companies in order from i=1 to i=N.
The next Q lines each contain three integers, describing one of the following two types of requests:
1 C X - Requests moving company C to position X.
2 A B - Queries the distance between company A and company B.

It is guaranteed that:
1 ≤ A, B, C ≤ N.
1 ≤ X ≤ 10^9.
At least one request of the second type is guaranteed.

- Output
For each second type of request, output the distance between the two companies.

- Example
Input : 
5 10
5 2 8 1 4
1 2 10
2 4 5
2 1 3
1 4 3
2 1 5
2 5 2
1 4 1
2 2 4
1 3 15
2 4 1
Output : 
3
3
1
6
9
4
*/

/* English Comment
This problem involves storing the locations of companies and responding to requests to either update a specific company's location or calculate the distance between two companies.

Using a data structure like unordered_map may initially seem ideal for this problem, given its efficient access and update capabilities.
However, since company indices are numeric and sequential, a vector of integers (vector<int>) can be used instead of an unordered_map<int, int>.
The vector approach is more memory-efficient and faster than unordered_map in this context, as it allows direct indexing with lower overhead.
*/

#include<iostream>
#include<vector>
//#include<unordered_map>
#include<cmath>

using namespace std;

int main() {
	cin.tie(0);
	//cout.tie(0);
	ios_base::sync_with_stdio(false);

	int N, Q;
	cin >> N >> Q;

	vector<int> locations(N + 1);	 // 1-based indexing vector

	for (int i = 1; i <= N; ++i) {
		cin >> locations[i];
	}

	/*unordered_map <int, int> locations;

	for (int i = 1; i <= N; ++i) {
		int location;
		cin >> location;
		locations[i] = location;
	}*/

	while (Q--) {
		int operation;
		cin >> operation;

		if (operation == 1) {
			int company, location;
			cin >> company >> location;
			locations[company] = location;
		}
		else {
			int company1, company2;
			cin >> company1 >> company2;
			cout << abs(locations[company1] - locations[company2]) << "\n";
		}
	}

	return 0;
}

//Finish