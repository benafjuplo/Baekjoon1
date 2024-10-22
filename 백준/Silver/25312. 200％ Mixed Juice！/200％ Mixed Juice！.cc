/*
- Title : 25312 - 200% Mixed Juice!
- Start Time : 24-10-20, 02:37
- End Time : 24-10-20, 04:55
- Try : 8(1 : Debug output not deleted, 3 : Time out due to floating point calculation, 3 : int data type size)
- Category : long long, avoiding floating point operations, gcd, pair, sorting
- Language : C++14
*/

/* 한국어 문제 요약
- 문제
음료수가 담긴 병이 총 N개 있다. i번째 병에는 음료수가 총 wi ℓ만큼 담겨있고, 음료수에는 설탕이 총 vi mg만큼 들어 있다.
이 음료수들 중 일부를 섞어서 총용량이 정확히 M ℓ인 혼합 음료수를 만들려고 한다. 이때, 병에 있는 음료수를 일부만 사용해도 된다.
혼합 음료수의 설탕량은 섞은 음료수들 각각에 들어 있는 설탕량의 합으로 결정된다. 설탕은 음료수에 균일하게 녹아 있기 때문에, 어떤 병에 든 음료수를 일부만 사용할 경우 설탕 역시 그 비율만큼 들어가게 된다.
즉, i번째 음료수를 ai ℓ만큼 (0 <= ai <= wi) 섞는다면, i번째 음료수에 해당하는 설탕량은 (ai * vi / wi) mg이다.
음료수를 섞어 총용량이 정확히 M ℓ인 혼합 음료수를 만들었을 때, 여기에 들어갈 수 있는 설탕량의 최댓값을 출력하여라.

- 입력
첫 줄에는 두 정수 N과 M이 공백으로 구분되어 주어진다. (1 <= N <= 100,000; 1 <= M <= w1 + w2 + ... + wN)
다음 N개의 줄의 i번째 줄에는 두 정수 wi와 vi가 공백으로 구분되어 주어진다. (1 <= wi, vi <= 100,000)

- 출력
총용량이 정확히 Mℓ인 혼합 음료수에 들어갈 수 있는 설탕량의 최댓값을 기약분수로 표현했을 때 a/b mg이라고 하자. 이때 a와 b를 /를 사이에 두고 차례로 출력한다.

- 예제
입력 :
3 6
2 3
3 5
5 8
출력 : 
49/5
*/

/* 한국어 주석
이 문제는 분수의 덧셈, 기약분수에 대한 원리와 부동소수점 연산을 피하며 정렬을 사용해야 하는 문제이다.

우선 입력되는 값을 받아 저장해야 하는데 여기서는 pair를 사용하였고 첫 번째 원소는 vi, 두 번째 원소는 wi를 가리킨다.

그 후 정렬을 해야하는데 vi/wi가 큰 것이 앞으로 가야한다. 하지만 이렇게 하면 부동소수점 연산을 필요로 한다. 이것을 피하기 위해 비교할 때 양변에 wi를 곱한다. (양수 값이므로 부등호의 방향 변화가 없다.)

이 후 M만큼 정렬된 순서대로 더하면 되는데 처음부터 끝까지 분수 연산을 할 것 같지만 실제로는 wi만큼 사용할 수 있다면 결국 설탕은 vi만큼 사용하게 되므로 정수의 덧셈이 된다.
대신에 마지막에는 분수의 덧셈이 되므로 분수의 덧셈을 수행 후 기약분수를 만들기 위해 gcd를 구하여 분모 분자에 나누어 준다.

매우 중요한 점은 일부분의 크기가 int 범위를 벗어나므로 long long 자료형을 적절히 사용해야 한다.
*/

/* English Problem Summary
- Question
There are a total of N bottles of beverages. The i-th bottle contains wi liters of beverage, and it contains vi mg of sugar.
Some of these beverages are to be mixed to create a blended drink with a total volume of exactly M liters. You are allowed to use only a portion of the beverage in each bottle if needed.
The sugar content of the blended drink is determined by the sum of the sugar amounts in the beverages used.
Since the sugar is uniformly dissolved in the beverage, if only a portion of a bottle is used, the sugar from that bottle is also included in the same proportion.
In other words, if ai liters of the i-th beverage are used (0 <= ai <= wi), the sugar amount from the i-th beverage would be (ai * vi / wi) mg.
The task is to calculate the maximum possible sugar content of a blended drink with an exact volume of M liters.

- Input
The first line contains two integers, N and M, separated by a space (1 <= N <= 100,000; 1 <= M <= w1 + w2 + ... + wN).
The next N lines, each containing two integers wi and vi, separated by a space, represent the amount of beverage (wi) and the amount of sugar (vi) in the i-th bottle (1 <= wi, vi <= 100,000).

- Output
The output should be in the form of a fraction a/b when expressed as an irreducible fraction, representing the maximum sugar content in mg that can be included in a blended drink of exactly M liters.
Output a and b separated by a slash (/).

- Example
Input :
3 6
2 3
3 5
5 8
Output :
49/5
*/

/* English Comment
This problem involves the addition of fractions, principles of irreducible fractions, and avoiding floating-point operations while using sorting.

First, the input values need to be stored, and here, a pair is used where the first element represents vi (sugar content) and the second element represents wi (amount of beverage).

Next, sorting needs to be performed, where the ratio vi/wi should be in descending order. However, doing this directly would require floating-point operations.
To avoid this, both sides of the comparison are multiplied by wi (since the values are positive, there is no change in the inequality direction).

Then, as you proceed to add up the beverages in the sorted order, it seems like you would be performing fraction addition throughout.
However, if you can use the full wi amount of a beverage, you simply add vi to the total sugar, which turns it into an integer addition.
Only the last part requires fraction addition. After performing the fraction addition, the greatest common divisor (gcd) is calculated to reduce the fraction to its irreducible form.

A very important point is that since some values may exceed the range of an int, it is necessary to appropriately use the long long data type.
*/

#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

// Euclidean algorithm : Recursion version
long long gcd(long long a, long long b) {
	if (a == b)
		return a;
	// if a < b, exchange a and b.
	else if (a < b) {
		long long temp = a;
		a = b;
		b = temp;
	}
	long long r = a % b;	// remainder
	if (r == 0)
		return b;
	else
		return gcd(b, r);
}

int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(false);

	int N;
	long long M;
	cin >> N >> M;

	// pair's first element = vi, pair's second element = wi
	vector<pair<int, int>> juices(N);

	for (int i = 0; i < N; i++) {
		// wi >> vi
		cin >> juices[i].second >> juices[i].first;
	}

	sort(juices.begin(), juices.end(),
		[](pair<int, int>& a, pair<int, int>& b) {
			//return (double)a.first / a.second > (double)b.first / b.second;
			return (long long)a.first * b.second > (long long)b.first * a.second;
		}
	);

	pair<long long, long long> maxSugar(0, 1);

	for (int i = 0; i < N; i++) {
		if (M > juices[i].second) {
			maxSugar.first += juices[i].first;
			M -= juices[i].second;
		}
		else {
			maxSugar.first = (long long)juices[i].first * M + (long long)maxSugar.first * juices[i].second;
			maxSugar.second = juices[i].second;
			long long divisor = gcd(maxSugar.first, maxSugar.second);
			maxSugar.first /= divisor;
			maxSugar.second /= divisor;
			break;
		}
	}

	cout << maxSugar.first << "/" << maxSugar.second;
}

//Finish
