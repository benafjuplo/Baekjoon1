/*
- Title : 3568 - iSharp
- Start Time : 24-09-01, 22:50
- End Time : 24-09-01, 23:45
- Try : 1
- Category : string, parsing, substr
*/

/*Korean Comment
이 문제는 문자열을 다루는 문제이다. 백준에서는 '파싱'으로 분류되어 있다.
입력은 한 줄의 문자열로 주어지는데 이 문자열을 먼저 공백을 기준으로 나눈다.
공백을 기준으로 나눌 때 C++에서는 문자열 스트림 혹은 서브 문자열로 쉽게 나눌 수 있다.
여기서는 문자열 스트림을 이용하여 공백 기준으로 나눈 후 결과를 문자열 벡터에 저장하였다.
나누어진 첫 번째 문자열은 공통 변수형으로, 이 값은 추가적인 처리 없이 과정의 마지막에 사용되므로 따로 보관하고 문자열 벡터에서는 삭제한다.
그 다음, 문자열 벡터에 맨 뒤의 쉼표(',') 혹은 세미콜론(';')을 제거한다.
문자열 벡터에는 변수명과 추가적인 변수형이 혼합된 형태로 저장되어 있다.
이것을 다시 변수명과 추가적인 변수형으로 분리해야 하는데, 추가적인 변수형은 '[]', '&' 또는 '*'만 가능하므로 쉽게 분리 가능하다.
C++에서는 문자열의 내부 함수 중 find()와 substr()을 적절히 조합하여 이를 구현할 수 있다.
이 후 원래 문자열 벡터에는 변수명만 남기고 추가적인 변수형은 새로운 문자열 벡터에 저장한다.
문제의 규칙에 따르면 추가적인 변수형은 순서를 뒤집어주어야 하는데 <algorithm> 헤더에 정의되어있는 reverse()함수를 사용하면 가능하다.
하지만 reverse() 함수를 사용한 이후에 '[]'은 원래 상태로 되돌려야 한다. 간단히 선형 탐색 중 ']'을 찾고 이후 회복시켜주는 형태로 가능하다.
마지막으로, 공통 변수형 + 추가적인 문자열 + " " + 변수명 + ";"을 반복문으로 합쳐준 후 출력한다.
*/

/*English Comment
This problem involves handling strings. On Baekjoon, it is categorized as 'parsing'.
The input is given as a single line of text, which is first split based on spaces.
In C++, this can be easily done using string streams or substrings when splitting by spaces.
Here, the string is split based on spaces using a string stream, and the results are stored in a string vector.
The first string in the split result is a common data type, which is used at the end of the process without any additional processing,
so it is kept separately and removed from the string vector.
Next, any trailing commas (',') or semicolons (';') in the string vector are removed.
The string vector contains both variable names and additional data types mixed together.
These need to be separated again into variable names and additional data types,
but since the additional data types can only be '[]', '&', or '*', they can be easily separated.
In C++, this can be implemented by appropriately combining the string's internal functions find() and substr().
After that, only the variable names remain in the original string vector, and the additional data types are stored in a new string vector.
According to the problem's rules, the order of the additional data types must be reversed,
which can be done using the reverse() function defined in the <algorithm> header.
However, after using the reverse() function, '[]' needs to be restored to its original state.
This can be done by performing a simple linear search for ']' and then restoring it.
Finally, the common data type + additional strings + " " + variable name + ";" is concatenated in a loop and output.
*/


#include<iostream>
#include<string>
#include<sstream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(false);

	string lineInput;
	getline(cin, lineInput);

	stringstream ss(lineInput);
	
	vector<string> vectorOfString;

	// Separate based on space(' ') using stringstream
	string separatedStr;
	while (ss >> separatedStr) {
		vectorOfString.push_back(separatedStr);
	}

	//First separated string is common type
	string commonType = vectorOfString[0];
	vectorOfString.erase(vectorOfString.begin());

	//delete comma and semicolon
	for (int i = 0; i < vectorOfString.size(); i++) {
		vectorOfString[i].erase(vectorOfString[i].size() - 1);
	}

	vector<string> additionalType(vectorOfString.size(), "");

	//separate string into name and additional type
	for (int i = 0; i < vectorOfString.size(); i++) {
		int splitPoint = 0;
		for (int j = 0;j< vectorOfString[i].size(); j++) {
			if (vectorOfString[i][j] == '*' || vectorOfString[i][j] == '[' || vectorOfString[i][j] == '&') {
				splitPoint = j;
				break;
			}
		}
		if (splitPoint != 0) {
			additionalType[i] = vectorOfString[i].substr(splitPoint);
			//addtional type need to reverse
			reverse(additionalType[i].begin(), additionalType[i].end());
			//recover "][" to "[]"
			for (int j = 0; j < additionalType[i].size(); j++) {
				if (additionalType[i][j] == ']') {
					additionalType[i][j] = '[';
					additionalType[i][j+1] = ']';
					j++;
				}
			}
			// delete addtional type in origial string
			vectorOfString[i] = vectorOfString[i].substr(0, splitPoint);
		}
	}
	
	//concatenate and print
	for (int i = 0; i < vectorOfString.size(); i++) {
		vectorOfString[i] = commonType + additionalType[i] + " " + vectorOfString[i] + ";";
		cout << vectorOfString[i] << "\n";
	}
}

//Finish