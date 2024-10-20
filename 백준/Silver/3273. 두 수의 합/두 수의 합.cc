/*
- Title : 3273 - Sum of Two Numbers
- Start Time : 24-10-19, 19:33
- End Time : 24-10-19, 19:49
- Try : 2(1 : special case : i==j)
- Category : binary search, sorting
- Language : C++14
*/

/* 한국어 문제 요약
- 문제
n개의 서로 다른 양의 정수 a1, a2, ..., an으로 이루어진 수열이 있다. ai의 값은 1보다 크거나 같고, 1000000보다 작거나 같은 자연수이다.
자연수 x가 주어졌을 때, ai + aj = x (1 ≤ i < j ≤ n)을 만족하는 (ai, aj)쌍의 수를 구하는 프로그램을 작성하시오.

- 입력
첫째 줄에 수열의 크기 n이 주어진다. 다음 줄에는 수열에 포함되는 수가 주어진다. 셋째 줄에는 x가 주어진다. (1 ≤ n ≤ 100000, 1 ≤ x ≤ 2000000)

- 출력
문제의 조건을 만족하는 쌍의 개수를 출력한다.

- 예제
입력 : 
9
5 12 7 10 9 1 2 3 11
13
출력 : 
3
*/

/* 한국어 주석
이 문제는 수열에서 목표 값 x과 같게 만들 수 있는 두 쌍을 찾는 문제이다.

우선 문제에서 가장 중요한 제한 사항은 "서로 다른" 이라는 조건이다. 따라서 자기 자신과 쌍을 맺는 경우는 없다. 또한 쌍은 왼쪽이 오른쪽보다 작다. 따라서 같은 종류로 2가지 경우가 만들어지지 않는다.

이러한 조건 하에서 <algorithm> 라이브러리에서 sort() 함수로 오름차순으로 정렬한 후 lower_bound() 함수를 사용하여 목표값과 왼쪽 쌍의 값의 차를 이진 탐색한다.
만약 찾으면 쌍의 개수를 증가시키고 그렇지 않으면 넘어간다.

C++의 빠른 처리 속도 덕분에 정렬과 간단한 조건을 추가하면 이중 반복문으로도 제한시간 내에 처리 가능하다.
*/

/* English Problem Summary
- Question
Consider a set of n distinct positive integers a1, a2, …, an, having values between 1 and 1000000 and an integer x.
Write a program to determine the number of pairs (ai, aj), where 1 ≤ i < j ≤ n and ai + aj = x.

- Input
The first line of the standard input contains the integer n (1 ≤ n ≤ 100000).
The second line contains n integers - the elements of the set. On the third line the integer x is given (1 ≤ x ≤ 2000000).

- Output
The program should output on a single line of the standard output an integer - the calculated number of pairs.

- Example
Input : 
9
5 12 7 10 9 1 2 3 11
13
Output : 
3
*/

/* English Comment
This problem is about finding pairs in a sequence whose sum equals a target value x.

The key constraint in this problem is that the pairs must be "distinct," meaning that an element cannot be paired with itself.
Additionally, each pair should be unique, with the left element being smaller than the right element, which ensures that no duplicate pairs are counted.

Under these constraints, the solution involves sorting the sequence in ascending order using the sort() function from the <algorithm> library.
After sorting, for each element on the left side of the pair, the lower_bound() function is used to perform a binary search to find the right element that,
when added to the left element, equals the target value x. If such an element is found, the count of pairs is increased; otherwise, the loop continues to the next element.

Thanks to C++'s fast execution speed, sorting the sequence and using binary search ensures that even an approach involving nested loops
with additional conditions can be processed within the time limits.
*/

#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;

	vector<int> v(n);

	for (int i = 0; i < n; i++)
		cin >> v[i];

	int target;
	cin >> target;

	// ascending order
	sort(v.begin(), v.end());

	long long cnt = 0;

	for (int i = 0; i < n - 1; i++) {
		// Binary search
		int index = lower_bound(v.begin(), v.end(), target - v[i]) - v.begin();
		// Ensure that the found index is valid and meets the conditions
		if (index>i && index <= n - 1)
			if (v[index] == target - v[i])
				cnt++;
	}

	// simple O(n^2) version

	// descending order
	//sort(v.rbegin(), v.rend());
	
	/*for (int i = 0; i < n; i++) {
		for (int j = n-1; j > i; j--) {
			if (v[i] + v[j] == target)
				cnt++;
			if (v[i] + v[j] > target)
				break;
		}
	}*/

	cout << cnt;
}

//Finish