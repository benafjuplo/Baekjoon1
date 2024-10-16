/*
- Title : 13288 - A New Alphabet
- Start Time : 24-10-16, 06:06
- End Time : 24-10-16, 06:37
- Try : 1
- Category : string, replace, ASCII
- Language : C++14
*/

/* 한국어 문제 요약
- 문제
새로운 알파벳(New Alphabet)이 개발되었다.
새로운 알파벳은 일대다 변역이다(영어 앞파벳의 한 문자가 1~6개의 다른 문자로 번역됨).
대문자와 소문자 모두 변환되며, 다른 문자는 그대로 유지된다.
각각의 알파벳에 대하여 다음과 같이 변환하여야 한다.
a -> @
b -> 8
c -> (
d -> |)
e -> 3
f -> #
g -> 6
h -> [-]
i -> |
j -> _|
k -> |<
l -> 1
m -> []\/[]
n -> []\[]
o -> 0
p -> |D
q -> (,)
r -> |Z
s -> $
t -> ']['
u -> |_|
v -> \/
w -> \/\/
x -> }{
y -> `/
z -> 2

위의 규칙에 따라 입력받은 문자열을 변환하여 출력하라.

- 입력
줄바꿈으로 끝나는 한 줄의 텍스트가 주어진다.
텍스트에는 ASCII 범위 32-126(공백에서 틸드까지)의 모든 문자와 9(탭)가 포함될 수 있다.
문제에서 설명한 문자(A-Z, a-z)만 번역해야 하며, 알파벳이 아닌 문자는 그대로 출력해야 한다(수정하지 않아야 함). 입력은 최대 10,000자이다.

- 출력
각 글자(소문자와 대문자)를 새로운 알파벳(New Alphabet)에 맞게 번역하여 입력 텍스트를 출력한다.

- 예제
입력 1 : 
All your base are belong to us.
출력 1 :
@11 `/0|_||Z 8@$3 @|Z3 8310[]\[]6 ']['0 |_|$.
입력 2 :
What's the Frequency, Kenneth?
출력 2 :
\/\/[-]@'][''$ ']['[-]3 #|Z3(,)|_|3[]\[](`/, |<3[]\[][]\[]3']['[-]?
입력 3 :
A new alphabet!
출력 3 :
@ []\[]3\/\/ @1|D[-]@83']['!
*/

/* 한국어 주석
이 문제는 정해진 규칙대로 문자열을 변환하는 문제이다.
하지만 일대다 대응할 때가 있으므로 단순 문자 대체만으로는 불가능하다.

해결 방법은 여러 가지가 있다.

우선 if-else문을 반복하는 것이다.
이 방법은 매우 간단하고 직관적이다. 
이 방법은 다시 두 가지로 나눌 수 있는데 새로운 문자열 생성하여 그것에 더하는 방법과 <string> 라이브러리의 replace()함수를 이용하는 것이다.
첫 번째 방법은 새로운 메모리를 사용해야 하고, 두 번째 방법은 제자리 알고리즘(in-place algorithm)이기에 메모리 사용이 적지만 조금더 복잡하고 실수할 가능성이 있다.
실제로 두 방법의 메모리 사용차이는 문제에서 주어진 조건에서 유의미하지 않으므로 첫 번째 방법을 추천한다.

다른 방법은 <unordered_set> 라이브러리에 맵핑하여 변형하는 것이다. 첫 번째 방법과 똑같이 새로운 문자열과 replace()함수 중 하나를 사용할 수 있다.
이 방법은 추가적인 메모리를 사용하지만 유지보수 입장과 코드의 가변성이 좋아진다.
*/

/* English Problem Summary
- Question
A New Alphabet has been developed with a one-to-many character mapping (each English letter is translated into 1 to 6 other characters).
Both uppercase and lowercase letters are converted, while other characters remain unchanged.
The translations for each letter are as follows:
a -> @
b -> 8
c -> (
d -> |)
e -> 3
f -> #
g -> 6
h -> [-]
i -> |
j -> _|
k -> |<
l -> 1
m -> []\/[]
n -> []\[]
o -> 0
p -> |D
q -> (,)
r -> |Z
s -> $
t -> ']['
u -> |_|
v -> \/
w -> \/\/
x -> }{
y -> `/
z -> 2

Convert the input string according to the rules above and output the result.

- Input
A single line of text is given, ending with a newline character.
The text may contain any ASCII characters in the range 32-126 (space to tilde) and tab characters (9).
Only the characters specified in the problem (A-Z, a-z) should be translated; non-alphabetic characters should remain unchanged. The input can be up to 10,000 characters.

- Output
Translate each uppercase and lowercase letter in the input according to the New Alphabet and print the converted text.

- Example
Input 1 :
All your base are belong to us.
Output 1 :
@11 `/0|_||Z 8@$3 @|Z3 8310[]\[]6 ']['0 |_|$.
Input 2 :
What's the Frequency, Kenneth?
Output 2 :
\/\/[-]@'][''$ ']['[-]3 #|Z3(,)|_|3[]\[](`/, |<3[]\[][]\[]3']['[-]?
Input 3 :
A new alphabet!
Output 3 :
@ []\[]3\/\/ @1|D[-]@83']['!
*/

/* English Comment
This problem involves converting a string according to predefined rules.
Since the New Alphabet uses one-to-many mappings, a simple character replacement approach alone isn’t sufficient.

There are multiple possible solutions:

One approach is to use a series of if-else statements.
This method is simple and intuitive, with two variations:
1. Create a new string and append the converted characters to it.
2. Use the <string> library’s replace() function to modify the string in place.

The first method requires additional memory, while the second is an in-place algorithm with lower memory usage but can be more complex and error-prone.
Given the problem constraints, the memory difference is negligible, so the first method is recommended.

Another approach is to use an <unordered_map> for character mapping. Like the first method, either a new string or the replace() function can be used.
This approach uses additional memory but improves code maintainability and flexibility.
*/

#include<iostream>
#include<string>

using namespace std;

int main() {
	cin.tie(0);
	cout.tie(0);

	string str;

	getline(cin, str);

	string newStr;

	for (int i = 0; i < str.size(); i++) {
		// Table's left side : a ~ m
		if (str[i] == 'a' || str[i] == 'A')
			newStr += '@';
		else if (str[i] == 'b' || str[i] == 'B')
			newStr += '8';
		else if (str[i] == 'c' || str[i] == 'C')
			newStr += '(';
		else if (str[i] == 'd' || str[i] == 'D')
			newStr += "|\)";
		else if (str[i] == 'e' || str[i] == 'E')
			newStr += '3';
		else if (str[i] == 'f' || str[i] == 'F')
			newStr += '#';
		else if (str[i] == 'g' || str[i] == 'G')
			newStr += '6';
		else if (str[i] == 'h' || str[i] == 'H')
			newStr += "[-]";
		else if (str[i] == 'i' || str[i] == 'I')
			newStr += '|';
		else if (str[i] == 'j' || str[i] == 'J')
			newStr += "_|";
		else if (str[i] == 'k' || str[i] == 'K')
			newStr += "|<";
		else if (str[i] == 'l' || str[i] == 'L')
			newStr += '1';
		else if (str[i] == 'm' || str[i] == 'M')
			newStr += "[]\\/[]";
		// Table's right side : n ~ z
		else if (str[i] == 'n' || str[i] == 'N')
			newStr += "[]\\[]";
		else if (str[i] == 'o' || str[i] == 'O')
			newStr += '0';
		else if (str[i] == 'p' || str[i] == 'P')
			newStr += "|D";
		else if (str[i] == 'q' || str[i] == 'Q')
			newStr += "(,)";
		else if (str[i] == 'r' || str[i] == 'R')
			newStr += "|Z";
		else if (str[i] == 's' || str[i] == 'S')
			newStr += '$';
		else if (str[i] == 't' || str[i] == 'T')
			newStr += "']['";
		else if (str[i] == 'u' || str[i] == 'U')
			newStr += "|_|";
		else if (str[i] == 'v' || str[i] == 'V')
			newStr += "\\/";
		else if (str[i] == 'w' || str[i] == 'W')
			newStr += "\\/\\/";
		else if (str[i] == 'x' || str[i] == 'X')
			newStr += "}{";
		else if (str[i] == 'y' || str[i] == 'Y')
			newStr += "`/";
		else if (str[i] == 'z' || str[i] == 'Z')
			newStr += '2';
		else
			newStr += str[i];
	}

	cout << newStr;


	//for (int i = 0; i < str.size(); i++) {
	//	// Table's left side : a ~ m
	//	if (str[i] == 'a' || str[i] == 'A')
	//		str[i] = '@';
	//	else if (str[i] == 'b' || str[i] == 'B')
	//		str[i] = '8';
	//	else if (str[i] == 'c' || str[i] == 'C')
	//		str[i] = '(';
	//	else if (str[i] == 'd' || str[i] == 'D') {
	//		str.replace(i, 1, "|\)");
	//		i++;
	//	}
	//	else if (str[i] == 'e' || str[i] == 'E')
	//		str[i] = '3';
	//	else if (str[i] == 'f' || str[i] == 'F')
	//		str[i] = '#';
	//	else if (str[i] == 'g' || str[i] == 'G')
	//		str[i] = '6';
	//	else if (str[i] == 'h' || str[i] == 'H') {
	//		str.replace(i, 1, "[-]");
	//		i += 2;
	//	}
	//	else if (str[i] == 'i' || str[i] == 'I')
	//		str[i] = '|';
	//	else if (str[i] == 'j' || str[i] == 'J') {
	//		str.replace(i, 1, "_|");
	//		i++;
	//	}
	//	else if (str[i] == 'k' || str[i] == 'K') {
	//		str.replace(i, 1, "|<");
	//		i++;
	//	}
	//	else if (str[i] == 'l' || str[i] == 'L')
	//		str[i] = '1';
	//	else if (str[i] == 'm' || str[i] == 'M') {
	//		str.replace(i, 1, "[]\\/[]");
	//		i += 5;
	//	}
	//	// Table's right side : n ~ z
	//	else if (str[i] == 'n' || str[i] == 'N') {
	//		str.replace(i, 1, "[]\\[]");
	//		i += 4;
	//	}
	//	else if (str[i] == 'o' || str[i] == 'O')
	//		str[i] = '0';
	//	else if (str[i] == 'p' || str[i] == 'P') {
	//		str.replace(i, 1, "|D");
	//		i++;
	//	}
	//	else if (str[i] == 'q' || str[i] == 'Q') {
	//		str.replace(i, 1, "(,)");
	//		i += 2;
	//	}
	//	else if (str[i] == 'r' || str[i] == 'R') {
	//		str.replace(i, 1, "|Z");
	//		i++;
	//	}
	//	else if (str[i] == 's' || str[i] == 'S')
	//		str[i] = '$';
	//	else if (str[i] == 't' || str[i] == 'T') {
	//		str.replace(i, 1, "']['");
	//		i += 3;
	//	}
	//	else if (str[i] == 'u' || str[i] == 'U') {
	//		str.replace(i, 1, "|_|");
	//		i += 2;
	//	}
	//	else if (str[i] == 'v' || str[i] == 'V') {
	//		str.replace(i, 1, "\\/");
	//		i++;
	//	}
	//	else if (str[i] == 'w' || str[i] == 'W') {
	//		str.replace(i, 1, "\\/\\/");
	//		i += 3;
	//	}
	//	else if (str[i] == 'x' || str[i] == 'X') {
	//		str.replace(i, 1, "}{");
	//		i++;
	//	}
	//	else if (str[i] == 'y' || str[i] == 'Y') {
	//		str.replace(i, 1, "`/");
	//		i++;
	//	}
	//	else if (str[i] == 'z' || str[i] == 'Z')
	//		str[i] = '2';
	//}

	//cout << str;
}

//Finish