/*
- Title : 19740 - How Many Tests
- Start Time : 24-12-14, 15:18
- End Time : 24-12-14, 15:25
- Try : 1
- Category : string, maximum
- Language : C++20
*/

/* 한국어 문제 요약
- 문제
프로그래밍 대회에 n개의 테스트가 있다. 테스트는 1부터 n까지 번호가 매겨져 있으며, 파일로 저장된다.
파일 관리자는 파일명을 문자열로 판단하기 때문에 "10"이 "2"보다 앞에 오는 문제가 발생한다.
이를 방지하기 위해 파일명 앞에 0을 추가하여 정렬된다. 예를 들어, 위의 경우에는 "02", "10"이 올바른 순서가 된다. 모든 파일명은 필요한 만큼 최소 선행 0을 포함한다.
예를 들어, 10개의 테스트가 있다면 "01", "02", ..., "09", "10"과 같은 파일명이 사용된다. 하지만 일부 테스트가 누락되어 남아 있는 파일명이 k개뿐이다.
이때 n의 가능한 최솟값과 최댓값을 구하는 프로그램을 작성하라.

- 입력
첫 번째 줄에는 남아 있는 파일의 개수, 정수 k(1 ≤ k ≤ 1,000)가 주어진다.
다음 k개의 줄에는 파일명이 주어진다. 각 파일명은 비어 있지 않으며, 길이는 모두 동일하고 9를 초과하지 않는다. 파일명에 "0"만 있는 경우는 없다.

- 출력
가능한 최소 테스트 횟수와 최대 테스트 횟수를 두 줄로 나누어 출력한다.

- 예제
입력 : 
3
05
10
08
출력 : 
10
99
*/

/* 한국어 주석
이 문제는 파일명을 이용해 최대 및 최소 테스트 개수를 찾아내는 문제이다.

문제의 파일명은 사전순으로 정렬하여도 숫자순이 되도록 하기 위해서 선행 0이 붙어있다. 파일명의 길이는 모두 같으므로 파일명 하나에 대하여 확인한 길이를 기준으로 최대 테스트 개수는 10^length - 1이라는 것을 쉽게 알 수 있다.
다음으로 최소 테스트 개수를 구하는 방법은 입력된 파일명을 숫자로 변환한 뒤, 그 중 최댓값을 최소 테스트 개수로 사용하는 것이다.
그러나 k=1일 때 파일명이 "0001"인 경우를 생각해 보자. 위와 같은 방식으로 구현하면 최소 테스트 개수는 "1"이 되지만, 실제 정답은 "1000"이다.
따라서 파일명의 최댓값과 10^(length-1) 중 큰 값을 최소 테스트 개수로 사용해야 한다.

파일명의 최대 길이는 9이므로 모든 연산은 int 자료형으로 구현할 수 있다.
*/

/* English Problem Summary
- Problem
In a programming competition, there are n tests. The tests are numbered from 1 to n and are saved as files.
The file manager determines the filenames as strings, which creates a problem where "10" appears before "2".
To prevent this, leading zeros are added to filenames to ensure proper sorting.
For example, in the above case, "02" would come before "10". Each filename contains the minimum necessary leading zeros.
For example, if there are 10 tests, the filenames would be "01", "02", ..., "09", "10".
However, some tests are missing, and only k filenames remain.
Given these filenames, determine the possible minimum and maximum values of n.

- Input
The first line contains an integer k (1 ≤ k ≤ 1,000), the number of remaining files.
The following k lines each contain a filename. Each filename is non-empty, of uniform length, and does not exceed 9 characters.
A filename cannot consist only of "0".

- Output
Print the possible minimum value of n on the first line and the maximum value of n on the second line.

- Example
Input :
3
05
10
08
Output :
10
99
*/

/* English Comment
This problem involves finding the maximum and minimum possible number of tests based on given filenames.

The filenames are designed to sort lexicographically as numbers by adding leading zeros.
Since all filenames are of equal length, determining the maximum number of tests is straightforward: `10^(length) - 1`, where "length" is the length of a filename.
To find the minimum number of tests, convert each filename to its numerical value. The largest value among these can represent the minimum number of tests.
However, consider the edge case where `k=1` and the filename is "0001". Simply using the maximum filename value would give `1` as the result, but the correct answer is `1000`.
Thus, the minimum number of tests is the greater of the maximum filename value and `10^(length - 1)`.

Since the maximum filename length is 9, all calculations can safely be performed using the int data type.
*/

#include<iostream>
#include<cmath>
#include<string>

using namespace std;

int main() {
	cin.tie(0);
	//cout.tie(0);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;

	int maxInput;

	// Read the first input to determine maxLength
	string firstInput;
	cin >> firstInput;
	int maxLength = firstInput.size();
	maxInput = stoi(firstInput);
	n--;

	// Process remaining inputs
	while (n--) {
		int x;
		cin >> x;
		if (maxInput < x) maxInput = x;
	}

	// minimum result is higher value between maxInput and 10^(maxLength-1).
	int resultMin = max((int)pow(10, maxLength - 1), maxInput);
	// maximum result is 10^maxLength - 1
	int resultMax = pow(10, maxLength) - 1;

	cout << resultMin << "\n" << resultMax;

	return 0;
}

//Finish