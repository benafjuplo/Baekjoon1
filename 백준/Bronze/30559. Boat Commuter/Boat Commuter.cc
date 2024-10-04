/*
- Title : 30559 - Boat Commuter
- Start Time : 24-10-04, 18:16
- End Time : 24-10-04, 19:15
- Try : 1
- Category : simulation
- Language : C++14
*/

/* 한국어 문제 요약
- 문제
부두를 오가는 보트 서비스가 있다.
m개의 교통 카드로 승객들은 각자 결제하며, 교통 카드는 1부터 m까지 번호가 매겨져 있다.
각 부두에는 승객이 사용할 단 하나의 카드 단말기가 설치되어 있다.

여행 비용은 다음 규칙에 따라 결정된다.
1. 여행이 i 부두에서 시작되고 j 부두에서 끝났으며, i와 j가 같지 않은 경우 비용은 |i - j| 이다. 
2. 여행이 어딘가에서 시작되었지만 끝나지 않은 경우 비용은 100이다.
3. 여행이 같은 부두에서 시작되고 끝나는 경우에도 비용이 100이 청구된다.

일련의 카드 단말기 이벤트들이 주어지며, 각 이벤트는 부두의 번호 pi와 카드번호 ci로 구성된다.
이때, 서비스 업체가 각 카드에 청구해야 할 금액을 계산하시오.

- 입력
첫 번째 줄에는 세 개의 정수가 주어진다. : 부두의 수 n, 교통 카드의 수 m, 이벤트의 수 k ( 2 <= n <= 50, 1 <= m,k <= 10^5)
다음 k줄에는 각각의 이벤트가 시간 순서대로 주어진다.
각 ith 이벤트는 pi와 ci의 두 개의 정수로 구성된다. (1 <= pi <= n, 1 <= ci <= m)

- 출력
각 m개의 교통 카드에 대하여 청구해야 할 금액을 공백으로 구분하여 출력하시오.

- 예제
입력 : 
3 3 5
1 1
1 2
1 2
3 1
2 3
출력 : 
2 100 100
*/

/* 한국어 주석
이 문제는 카드 단말기 이벤트가 입력으로 주어졌을 때, 이를 처리하여 각 카드에 청구할 금액을 계산하는 문제이다.
문제를 단순하게 생각하면 한 카드에 대해 최대 2번의 이벤트가 발생할 것으로 오해할 수도 있다.
하지만 문제에서는 해당 사항에 대하여 제한을 두지 않았으므로 같은 카드에 대해 3번 이상 이벤트를 발생할 수 있는 경우도 고려해야 한다.

카드 단말기 메모리를 카드의 개수인 m크기의 int형 vector로 초기값은 0으로 초기화하고 v라고 정의한다. (아래 코드에서는 가독성 및 편의성을 위하여 m+1로 하였다.)
청구할 금액 벡터도 위와 같은 크기로 초기값은 0으로 초기화하고 charges라고 정의한다.
그 후 k번 만큼 부두 번호 p와 카드 번호 c를 입력받고 각각에 대하여 아래 절차를 따른다.
 1. v[c]가 초기값이면 해당 카드에 첫 이벤트가 발생한 것으로 보고 v[c]에 부두 번호를 기록한다.
 2. v[c]가 초기값이 아니면 두 부두를 비교하고 부두가 다르면 |i-j|를 charges[c]에 더하고, 부두가 같으면 100을 charges[c]에 더한다.

k번의 입력을 처리 한 후 각 카드 단말기 메모리에 초기값과 다른 값이 있으면 문제의 규칙 3번에 따라 100을 charges[i]에 더한 후 값을 출력한다.
만약 초기값과 같으면 charges[i]를 출력한다.

비용 계산은 최대의 경우에도 int 자료형을 넘지 않으므로 모든 자료형을 int로 사용해도 된다.
*/

/* English Problem Summary
- Question
There is a boat service operating between piers.
Passengers pay for their journey using m transportation cards, each numbered from 1 to m.
At each pier, there is a single card reader installed for passengers to use.

The travel cost is determined by the following rules:
1. If a journey starts at pier i and ends at pier j, and i is not equal to j, the cost is |i - j|.
2. If a journey starts but does not end, the cost is 100.
3. If a journey starts and ends at the same pier, the cost is also 100.

A series of card reader events is given, where each event consists of the pier number pi and the card number ci.
Calculate the amount to be charged to each card based on these events.

- Input
The first line contains three integers: the number of piers n, the number of transportation cards m, and the number of events k (2 ≤ n ≤ 50, 1 ≤ m, k ≤ 10^5).
The next k lines contain the events in chronological order.
Each ith event consists of two integers pi and ci (1 ≤ pi ≤ n, 1 ≤ ci ≤ m).

- Output
Print the amount to be charged to each of the m transportation cards, separated by spaces.

- Example
Input :
3 3 5
1 1
1 2
1 2
3 1
2 3
Output :
2 100 100
*/

/* English Comment
This problem involves processing card reader events and calculating the amount charged to each card based on the events.
At first glance, one might mistakenly think that at most two events can occur for a single card.
However, since the problem does not impose any such restriction, cases where more than two events occur for the same card must also be considered.

Initialize a vector of size m (the number of cards) with int values set to 0, representing the memory of the card readers.
Call this vector v (for readability and convenience, in the code it is initialized as size m+1).
Similarly, initialize another vector of the same size to store the charges for each card, also initialized to 0, and call it charges.
Then, for each of the k events, where a pier number p and card number c are provided, proceed with the following steps:
1. If v[c] is at its initial value, it means the card is being used for the first time, so store the pier number in v[c].
2. If v[c] is not at its initial value, compare the pier numbers. If the piers are different, add |i - j| to charges[c]. If the piers are the same, add 100 to charges[c].

After processing all k events, for each card where the card reader memory v[i] is different from its initial value, add 100 to charges[i] according to rule 3 of the problem.
If the memory is still at its initial value, simply print charges[i].

Even in the maximum case, the cost calculations will not exceed the int data type, so it is safe to use int for all variables.
*/

#include<iostream>
#include<vector>
#include<cmath>

using namespace std;

int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(false);

	int n;	// the number of piers
	int m;	// the number of travel cards
	int k;	// the number of events

	cin >> n >> m >> k;

	vector<int> charges(m + 1, 0);	// 1-base index
	vector<int> v(m+1, 0);			// 1-base index

	const int PENALTY = 100;

	while (k--) {
		// p : pier, c : card
		int p, c;
		cin >> p >> c;
		if (v[c] == 0)
			// Tap in
			v[c] = p;
		else {
			// Tap out
			if (v[c] == p)
				charges[c] += PENALTY;
			else
				charges[c] += abs(v[c] - p);
			v[c] = 0;
		}
	}

	for (int i = 1; i <= m; i++) {
		if (v[i] == 0) {
			cout << charges[i] << " ";
		}
		else {
			cout << charges[i] + PENALTY << " ";
		}	
	}
}

//Finish