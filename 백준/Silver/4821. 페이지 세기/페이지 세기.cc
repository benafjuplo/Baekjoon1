/*
- Title : 4821 - Page Count
- Start Time : 24-09-01, 12:56, 14:00
- End Time :   24-09-01, 13:21, 14:18
- Try : 1
- Category : string, bitmask, substr
*/

/* Korean Comment
이 문제는 크게 두 가지 파트로 나눌 수 있다.
첫 번째는 입력받은 문자열을 처리하기에 적절한 형태로 변환하는 것이다. 백준에서는 '파싱'으로 분류하고 있다.
두 번째는 변환된 페이지 범위 리스트를 계산하는 것이다.
먼저 입력을 받으면 문자열 형태이다. 이 문자열을 쉼표(',')를 분리하여 각 부분을 문자열 벡터에 저장한다.
그 후 문자열 벡터를 순차적으로 하이픈('-')가 있으면 하이픈 기준으로 로우(low)와 하이(high)로 나누었다. 만약 하이픈이 없다면 단일 페이지로 간주하였다.
이렇게 정리된 데이터를 비트마스크(bitmask)를 이용하여 관리하며 이것을 '비트페이지(bitPage)'라고 명명하였다. C++에는 <bitset> 헤더로 간단하게 구현할 수 있다. <bitset> 헤더는 C++ 98부터 제공된다.
정리된 비트페이지는 <bitset> 헤더에 정의된 count() 함수를 통해 쉽게 카운팅할 수 있다.
이 구현 과정에서 로우와 하이가 같은 경우와 같이 특별한 케이스들을 주의 깊게 처리해야 한다.
*/

/* English Comment
This problem can be divided into two main parts.
The first part is converting the input string into an appropriate format for processing, which is categorized as 'parsing' on Baekjoon.
The second part is calculating the list of transformed page ranges.
First, when input is received, it is in the form of a string. This string is split by commas (',') and each part is stored in a string vector.
Then, the string vector is sequentially checked for the presence of a hyphen ('-').
If a hyphen is found, the string is divided into low and high based on the hyphen. If there is no hyphen, it is considered a single page.
The organized data is managed using a bitmask, which is named 'bitPage'.
In C++, this can be easily implemented using the <bitset> header, which has been available since C++ 98.
The organized bitPage can be easily counted using the count() function defined in the <bitset> header.
During this implementation process, special cases, such as when low and high are the same, must be handled with care.
*/

#include<iostream>
#include<vector>
#include<string>
#include<bitset>

using namespace std;

void separateWithComma(vector<string>& separatedString, string listOfRange) {
	int pos = 0;	// set with 0
	int newPos = 0;		// set with 0
	while (newPos != string::npos) {
		newPos = listOfRange.find(',', pos);
		separatedString.push_back(listOfRange.substr(pos, newPos-pos));	// Beware when using substr function parameter. substr(pos, count)
		pos = newPos + 1;
	}
}

void separateWithHyphen(bitset<1001> &bitPage, vector<string> separatedString, int totalPages) {
	for (int i = 0; i < separatedString.size(); i++) {
		int pos = separatedString[i].find('-');
		//case : there is no hyphen('-')
		if (pos == string::npos) {
			int page = stoi(separatedString[i]);
			if (0 < page && page <= totalPages)
				bitPage.set(page);
		}
		//case : there is hyphen
		else {
			int low = stoi(separatedString[i].substr(0, pos));
			int high = stoi(separatedString[i].substr(pos + 1));
			if (low <= high && 0 < low)
				for (int j = low; j <= high; j++) {
					if (j > totalPages)
						break;
					bitPage.set(j);
				}
		}
	}
}

int calculatePages(string strListOfRange, int totalPages) {
	vector<string> separatedString;

	separateWithComma(separatedString, strListOfRange);

	//cout << "Debug - Finish : separateWithComma\n";

	bitset<1001> bitPage(0);

	separateWithHyphen(bitPage, separatedString, totalPages);

	//cout << "Debug - Finish : separateWithHyphen\n";

	return bitPage.count();
}

int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(false);

	int totalPages = 1;

	while (totalPages != 0) {
		cin >> totalPages;
		if (totalPages == 0)
			break;

		string listOfRange;
		cin >> listOfRange;

		cout << calculatePages(listOfRange, totalPages) << "\n";
	}
}

//Finish