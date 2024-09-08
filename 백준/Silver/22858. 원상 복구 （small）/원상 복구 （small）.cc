/*
- Title : 22858 - Restoration (small)
- Start Time : 24-09-08, 14:23
- End Time : 24-09-08, 15:07
- Try : 1
- Category : simulation
*/

/* 한국어 문제 요약
- 문제
P1, P2, ..., PN의 수가 적혀 있는 N개의 카드가 있다.
1부터 N까지 수가 하나씩 존재하는 수열 D1, D2, ..., Di, ..., DN이 있다. 이때 각 i에 대해 Di번째 카드를 i번째로 가져오는 작업을 셔플이라고 부른다.

예를 들어, P1, P2, ..., PN이 1, 4, 5, 3, 2이고, D1, D2, ... , DN가 4, 3, 1, 2, 5라고 가정해보자. 이 카드를 한번 섞으면 3, 5, 1, 4, 2가 된다.
S는 카드를 섞은 후를 의미한다.
위 방식을 그대로 K번 셔플한 카드의 정보와 D의 정보를 알고 있다고 할 때, 원래 카드는 어떤 배치를 이루고 있었는지 구해라.

- 입력
첫번째 줄에는 카드의 개수 N과 카드를 섞은 횟수인 K가 공백으로 구분되어 주어진다.
두번째 줄에는 K번 카드를 섞은 후 카드의 배치를 의미하는 Si가 공백으로 구분되어 총 N개 주어진다.
세번째 줄에는 총 N개의 Di이 공백으로 구분되어 주어진다.

- 출력
원래 카드의 배치인 P1부터 PN까지의 값들을 공백으로 구분해서 출력한다.

- 제한
1 <= N <= 10^4
1 <= K <= 10^3
1 <= Di <= N
1 <= Pi, Si <= 10^6
Pi는 정수

- 예제
입력 1 : 
5 2
4 1 3 5 2
4 3 1 2 5
출력 1 :
1 4 5 3 2

입력 2 :
4 1
4 3 2 1
4 3 2 1
출력 2 : 
1 2 3 4
*/

/* 한국어 주석
이 문제는 주어진 규칙을 구현하고 직접 K번 시뮬레이션 하면된다.
이 때 두 개의 변수를 교환할 때 임시 변수를 사용하듯 카드를 시뮬레이션 할 때 총 2개의 벡터가 필요하다는 것만 잘 생각하면 된다.

문제 자체의 구현은 간단하지만 실행 시간 개선을 위하여 메모리를 사용하려고 하였지만 메모리를 복사하는 시간이 오히려 발목을 잡아 메모리와 실행 시간 모두 더 낮은 결과를 보여주었다.
메모리 없이 직접 시뮬레이션 하는 것이 더 효율적이다.
*/

/* English Problem Summary
- Question
There are N cards labeled P1, P2, ..., PN with numbers written on them.
Additionally, there is a sequence of numbers D1, D2, ..., Di, ..., DN where each number from 1 to N appears exactly once.
For each i, the action of moving the Di-th card to the i-th position is called a shuffle.

For example, if the sequence of cards P1, P2, ..., PN is 1, 4, 5, 3, 2 and the sequence D1, D2, ..., DN is 4, 3, 1, 2, 5, then shuffling the cards once results in the sequence 3, 5, 1, 4, 2.
The sequence S represents the state of the cards after shuffling them.
Given the information about the sequence of the cards after shuffling them K times and the sequence D, determine the original order of the cards.

- Input
The first line contains two integers N and K separated by a space, where N is the number of cards and K is the number of times the cards have been shuffled.
The second line contains N integers Si separated by spaces, representing the order of the cards after K shuffles.
The third line contains N integers Di separated by spaces, representing the shuffle sequence.

- Output
Print the original order of the cards P1 to PN, separated by spaces.

- Constraint
1 <= N <= 10^4
1 <= K <= 10^3
1 <= Di <= N
1 <= Pi, Si <= 10^6
Pi is integer.

- Example
Input 1 :
5 2
4 1 3 5 2
4 3 1 2 5
Output 1 :
1 4 5 3 2

Input 2 :
4 1
4 3 2 1
4 3 2 1
Output 2 :
1 2 3 4
*/

/* English Comment
This problem can be solved by directly simulating the process for K shuffles based on the given rules.
You need to remember that, similar to using a temporary variable when swapping two values, simulating the shuffling process requires two vectors.

While the implementation of the problem is simple, I initially tried to use memory to improve execution time.
However, the time taken to copy memory became a bottleneck, resulting in both higher memory usage and longer execution time.
Therefore, simulating the process directly without additional memory is more efficient.
*/

#include<iostream>
#include<vector>

using namespace std;

int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(false);

	int N, K;
	cin >> N >> K;

	vector<int> cardFinal(N + 1, 0);
	for (int i = 1; i <= N; i++) {
		cin >> cardFinal[i];
	}

	//Debug : Test for large input
	/*for (int i = 1; i <= N; i++) {
		cardFinal[i] = i;
	}*/

	//vector<int> cardD(N + 1, 0);	// shuffle
	vector<int> reverseCardD(N + 1, 0);	// reverse shuffle
	for (int i = 1; i <= N; i++) {
		int D;
		cin >> D;
		//Debug : Test for large input
		/*D = i+1;
		if (i == N)
			D = 1;*/
		reverseCardD[i] = D;
	}

	//vector<vector<int>> memoryCard;

	//memoryCard.push_back(cardFinal);

	int cnt = 1;

	vector<int> oldCard = cardFinal;
	vector<int> newCard(N + 1, 0);

	// Simulation
	for (; cnt <= K; cnt++) {
		for (int i = 1; i <= N; i++) {
			newCard[reverseCardD[i]] = oldCard[i];	// i -> D
		}

		oldCard = newCard;

		//if (newCard == cardFinal) {
		//	break;
		//}

		/*else {
			memoryCard.push_back(newCard);
			oldCard = newCard;
		}*/
	}

	vector<int> resultCard;

	/*if (cnt < K) {
		int rest = K % cnt;
		resultCard = memoryCard[rest];
	}

	else
		resultCard = oldCard;*/

	resultCard = oldCard;

	for (int i = 1; i <= N; i++)
		cout << resultCard[i] << " ";
}

//Finish