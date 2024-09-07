/*
- Title : 4821 - Page Count
- Start Time : 24-09-01, 12:56, 14:00
- End Time :   24-09-01, 13:21, 14:18
- Try : 1
- Category : string, bitmask, substr
*/

/* 한국어 문제 요약
- 문제
워드, 한글, 메모장과 같은 워드 프로세서에서 인쇄를 할 때, 페이지 범위를 직접 입력하여 지정할 수 있다. 예를 들면, 다음과 같이 입력할 수 있다.
10-15,25-28,8-4,13-20,9,8-8

사용자는 위처럼 인쇄하고자 하는 범위를 콤마로 구분하여 입력할 수 있다. 각 인쇄 범위는 양의 정수 하나 또는 하이픈(-)로 구분된 두 양의 정수이다.
수 두 개로 이루어진 범위에서 앞의 수를 low, 뒤의 수를 high라고 한다. 만약, low > high인 경우에는 이 범위는 인쇄하지 않는다.
또, 인쇄 범위가 문서의 범위를 넘어가는 경우에는 출력할 수 있는 페이지만 출력한다. 페이지 번호는 1부터 시작한다.
인쇄 범위는 겹칠 수 있다. 겹치는 페이지는 여러 번 인쇄하는 것이 아니고, 한 번만 인쇄해야 한다. (위의 예제에서 13, 14, 15는 두 범위에 포함된다)
인쇄 범위가 주어졌을 때, 출력해야 하는 페이지의 수를 구하는 프로그램을 작성하시오.

- 입력
입력은 여러 개의 테스트 케이스로 이루어져 있다. 각 테스트 케이스의 첫째 줄에는 문서의 총 페이지 수가 주어진다.
둘째 줄에는 인쇄 범위가 문제 설명에 나온 형식과 같이 주어진다.
입력의 마지막에는 0이 하나 주어진다.
문서는 많아야 1000페이지이고, 인쇄 범위의 길이는 1000글자를 넘지 않는다.

- 출력
각 테스트 케이스에 대해서, 출력해야 하는 페이지의 수를 출력한다.

- 예제
입력 : 
30
10-15,25-28,8-4,13-20,9,8-8
19
10-15,25-28,8-4,13-20,9,8-8
0
출력 : 
17
12
*/

/* 한국어 주석
이 문제는 크게 두 가지 파트로 나눌 수 있다.
첫 번째는 입력받은 문자열을 처리하기에 적절한 형태로 변환하는 것이다. 백준에서는 '파싱'으로 분류하고 있다.
두 번째는 변환된 페이지 범위 리스트를 계산하는 것이다.
먼저 입력을 받으면 문자열 형태이다. 이 문자열을 쉼표(',')를 분리하여 각 부분을 문자열 벡터에 저장한다.
그 후 문자열 벡터를 순차적으로 하이픈('-')가 있으면 하이픈 기준으로 로우(low)와 하이(high)로 나누었다. 만약 하이픈이 없다면 단일 페이지로 간주하였다.
이렇게 정리된 데이터를 비트마스크(bitmask)를 이용하여 관리하며 이것을 '비트페이지(bitPage)'라고 명명하였다. C++에는 <bitset> 헤더로 간단하게 구현할 수 있다. <bitset> 헤더는 C++ 98부터 제공된다.
정리된 비트페이지는 <bitset> 헤더에 정의된 count() 함수를 통해 쉽게 카운팅할 수 있다.
이 구현 과정에서 로우와 하이가 같은 경우와 같이 특별한 케이스들을 주의 깊게 처리해야 한다.
*/

/* English Problem Summary
- Question
When you execute a word processor's print command, you are normally prompted to specify the pages you want printed. You might, for example, enter:
10-15,25-28,8-4,13-20,9,8-8

The expression you enter is a list of print ranges, separated by commas.
Each print range is either a single positive integer, or two positive integers separated by a hyphen.
In the latter case we call the first integer low and the second one high. A print range for which low > high is simply ignored.
A print range that specifies page numbers exceeding the number of pages is processed so that only the pages available in the document are printed.
Pages are numbered starting from 1.
Some of the print ranges may overlap. Pages which are common to two or more print ranges will be printed only once. (In the example given, pages 13, 14 and 15 are common to two print ranges.)

- Input
The input will contain data for a number of problem instances. For each problem instance there will be two lines of input.
The first line will contain a single positive integer: the number of pages in the document.
The second line will contain a list of print ranges, as defined by the rules stated above.
End of input will be indicated by 0 for the number of pages.
The number of pages in any book is at most 1000. The list of print ranges will be not be longer than 1000 characters.

- Output
For each problem instance, the output will be a single number, displayed at the beginning of a new line. It will be the number of pages printed by the print command.

- Constraint

- Example
Input :
30
10-15,25-28,8-4,13-20,9,8-8
19
10-15,25-28,8-4,13-20,9,8-8
0
Output :
17
12
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
//Submit