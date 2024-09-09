/*
- Title : 2238 - Auction
- Start Time : 24-09-09, 20:49
- End Time :   24-09-10, 00:03
- Try : 1
- Category : sorting, tuple
*/

/* 한국어 문제 요약
- 문제
고전적인 경매와 달리 다음과 같은 규칙으로 경매에 낙찰하려고 한다.
우선 가장 적은 수의 사람이 제시한 가격을 찾는다. 이러한 경우가 여럿 있다면, 가장 낮은 가격으로 물건을 팔게 된다. 이때, 그 가격을 제시한 사람들 중에서 가장 먼저 제시한 사람이 물건을 살 수 있게 된다.
각각의 사람들이 제시한 가격이 주어졌을 때, 경매에 낙찰(당첨)되는 사람을 구하는 프로그램을 작성하시오.

- 입력
첫째 줄에 두 정수 U(1 <= U <= 10,000), N(1 <= N <= 100,000)이 주어진다. U는 금액의 상한이고, N은 경매에 참여한 회수이다.
다음 N개의 줄에는 사람 이름 S(공백 없는 알파벳 대소문자 10자 이하)와, 그 사람이 제시한 가격 P(1 <= P <= U, 정수)이 경매에 참여한(가격을 제시한) 순서대로 주어진다.

- 출력
첫째 줄에 낙찰된 사람의 이름과 그 가격을 출력한다.

- 예제
입력 : 
10 4
Lew 10
CD 5
Fe 5
CD 7
출력 :
CD 7
*/

/* 한국어 주석
이 문제는 기본적으로 정렬을 사용하는 문제이다. 정렬을 해야하는 규칙은 2가지이고 데이터는 총 3 가지로 가격, 횟수, 처음 부른 이름이다.
적절한 자료형 2개를 이용하여(맵과 pair 벡터 등) 구현하는 것이 간단히 떠오르지만 여기서는 메모리와 실행 시간 최적화를 위하여 <tuple>의 벡터를 사용하였다.
사용할 때, tuple 자료형은 pair와 매우 다르기 때문에 주의할 필요가 있다. 이 문제에서 금액의 상한은 10000이기에 tuple의 벡터 크기를 10000+1로 고정하여 사용한다.
이를 통해 벡터에서 금액을 검색하지 않고 직접적으로 접근할 수 있다.
이후에는 <algorithm> 헤더에 있는 sort() 함수를 사용하여 벡터를 정렬 하는데, tuple자료형 벡터는 기본 자료형 벡터가 아니라 사용자 정의 비교 함수를 람다 함수(익명 함수)를 사용하여 작성하였다.
마지막으로 정렬된 벡터에서 첫 번째 원소(오름차순으로 정렬한 경우)를 적절히 출력한다.

메모리 감소를 위해서 금액에 대한 자료형으로 int와 short 모두 사용해보았지만 유의미한 차이가 없으므로 자유롭게 선택해도 무방하다.

ChatGPT를 사용해본 결과 pair<string, int>(이름과 횟수)의 벡터로 해결 가능하다. 금액은 이미 고정되어 있고, 선형 탐색으로 가능하다.
하지만 메모리만 아주 조금 개선되었기에 수정하지 않았다. 참고를 위하여 코드 이후에 주석으로 추가해놓았다.
*/

/* English Problem Summary
- Question
Unlike traditional auctions, this auction follows a different set of rules.
First, the price offered by the fewest number of people is chosen. If there are multiple such prices, the item is sold at the lowest price among them.
In this case, the person who offered that price first gets to buy the item.

Given the prices offered by each participant, write a program to determine who wins the auction.

- Input
The first line contains two integers U (1 <= U <= 10,000) and N (1 <= N <= 100,000). U is the upper limit of the price, and N is the number of times people participated in the auction.
The next N lines each contain a name S (a string of up to 10 alphabetic characters, with no spaces) and the price P (1 <= P <= U, an integer) offered by that person, in the order they participated.

- Output
Print the name of the person who wins the auction and the price they offered.

- Example
Input :
10 4
Lew 10
CD 5
Fe 5
CD 7
Output :
CD 7
*/

/* English Comment
This problem primarily involves sorting. There are two rules for sorting, and the data consists of three components: price, count, and the name of the person who first offered the price.
While it's easy to think of using two appropriate data structures, such as a map and a vector of pairs, I used a vector of tuples to optimize both memory and execution time.
When using the tuple data type, it's important to note that it behaves differently from pair, so extra care is needed.
In this problem, since the upper limit of the price is 10,000, I fixed the size of the vector of tuples to 10,000+1.
This allows direct access to the elements without searching the vector by price.
Afterward, I used the sort() function from the <algorithm> header to sort the vector.
Since the vector contains tuples, not basic data types, I implemented a custom comparison function using a lambda (anonymous) function.
Finally, after sorting the vector in ascending order, I appropriately output the first element.

I tried using both int and short as the data type for the prices to reduce memory usage, but there was no significant difference. Therefore, you can freely choose either one.

After using ChatGPT, I found that the problem can be solved using a vector of pair<string, int> (name and count). Since the price is already fixed, a linear search is sufficient.
However, the memory improvement was minimal, so I did not make any changes. For reference, I added it as a comment after the code.
*/

#include<iostream>
#include<vector>
#include<string>
#include<tuple>
#include<algorithm>

using namespace std;

int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(false);

	short U;	// U is money
	int N;	// N is count
	cin >> U >> N;

	const short maxOfU = 10000;
	const int maxOfN = 100000;

	vector<tuple<short, int, string>> vOfMoney(maxOfU + 1, { maxOfU+1, maxOfN + 1, "" });	// tuple's first(0) element is money, tuple's second(1) element is count, tuple's third(2) element is name

	for (int i = 0; i < N; i++) {
		string name;
		cin >> name;
		short money;
		cin >> money;

		if (get<1>(vOfMoney[money]) == maxOfN+1) {
			get<0>(vOfMoney[money]) = money;
			get<2>(vOfMoney[money]) = name;
			get<1>(vOfMoney[money]) = 0;
		}
		(get<1>(vOfMoney[money]))++;
	}

	sort(vOfMoney.begin(), vOfMoney.end(), [](tuple<short, int, string>& a, tuple<short, int, string>& b) {
		if (get<1>(a) != get<1>(b))
			return get<1>(a) < get<1>(b);
		else
			return get<0>(a) < get<0>(b);
		}
	);

	cout << get<2>(vOfMoney[0]) << " " << get<0>(vOfMoney[0]);
}

//Finish


/*
#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main() {
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);

    short U;  // Upper bound of the price
    int N;    // Number of auction participants
    cin >> U >> N;

    const short maxOfU = 10000;
    vector<pair<int, string>> priceInfo(maxOfU + 1, { 0, "" }); // pair<bid count, first name>

    for (int i = 0; i < N; i++) {
        string name;
        cin >> name;
        short money;
        cin >> money;

        if (priceInfo[money].first == 0) {
            // This is the first time this price is offered
            priceInfo[money].second = name;
        }
        priceInfo[money].first++;  // Increment the count of bids for this price
    }

    // Find the price with the fewest bids and, in case of ties, the lowest price
    int minCount = N + 1;
    int minPrice = 0;
    string winner;

    for (int price = 1; price <= U; price++) {
        if (priceInfo[price].first > 0 && priceInfo[price].first < minCount) {
            minCount = priceInfo[price].first;
            minPrice = price;
            winner = priceInfo[price].second;
        }
    }

    cout << winner << " " << minPrice;
}
*/