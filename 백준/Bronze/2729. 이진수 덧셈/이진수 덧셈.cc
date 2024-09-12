/*
- Title : 2729 - Binary Addition
- Start Time : 24-09-12, 04:10
- End Time : 24-09-12, 04:38
- Try : 1
- Category : string, binary
*/

/* 한국어 문제 요약
- 문제
두 이진수가 주어졌을 때, 그 합을 이진수로 출력하는 프로그램을 작성하시오.

- 입력
첫째 줄에 테스트 케이스의 수 T(1 <= T <= 1,000)가 주어진다. 각 테스트 케이스는 숫자 2개로 이루어져있다.
이 숫자는 0과 1로만 이루어진 이진수이며, 길이는 최대 80자리이다. (덧셈 결과는 81자리가 될 수도 있다)
이진수는 0으로 시작할 수도 있다.

- 출력
각 테스트 케이스에 대해 입력으로 주어진 두 이진수의 합을 구해 이진수로 출력한다. 숫자의 앞에 불필요한 0이 붙으면 안 된다.

- 예제
입력 : 
3
1001101 10010
1001001 11001
1000111 1010110
출력 : 
1011111
1100010
10011101
*/

/* 한국어 주석
이 문제는 이진수 덧셈을 구현하는 문제이다.
만약 문제의 주어진 이진수의 크기가 충분히 작았다면, stoi()함수를 사용하여 문자열을 숫자로 변환한 후 이진수로 출력 수 있다.

하지만 이 문제는 최대 80자리의 이진수가 입력으로 주어지므로 long long 자료형으로도 불가능하다. 따라서 문자열로 두 이진수를 입력 받은 후 두 문자열을 수동으로 더해주어야 한다.
이진수 덧셈은 올림(carry)을 잘 처리하면 간단히 구현가능하다. 단지, 입력받은 이진수 들의 길이보다 결과값의 길이가 더 클 수 있다는 것을 유의하고 구현하여야 한다.

마지막으로 문제의 요구사항에 숫자의 앞에 불필요한 0이 붙으면 안 된다고 되어있는 것에 주의하여야 한다.
여기서는 선형으로 탐색 후 0으로 시작히지 않는 지점 substr() 함수를 사용하여 분리하였다. 단, 이렇게 구현시 정답이 오직 0으로 구성된 경우에 대해서 특별히 관리해야 한다.
*/

/* English Problem Summary
- Question
Given two binary numbers, write a program that outputs their sum as a binary number.

- Input
The first line contains the number of test cases T (1 <= T <= 1,000). Each test case consists of two binary numbers.
These numbers consist only of 0 and 1, and their length can be up to 80 digits. (The result of the addition can be up to 81 digits.)
The binary numbers may start with 0.

- Output
For each test case, calculate the sum of the two given binary numbers and output the result as a binary number. Leading zeros should not appear in the output.

- Example
Input :
3
1001101 10010
1001001 11001
1000111 1010110
Output :
1011111
1100010
10011101
*/

/* English Comment
This problem involves implementing binary addition.
If the size of the binary numbers given in the problem was small enough,
the solution could be achieved by using the stoi() function to convert the strings into numbers and then output the result as a binary number.

However, since the input can be up to 80 digits long, even the long long data type is insufficient. Therefore, both binary numbers should be taken as strings, and the addition should be done manually.
Binary addition can be easily implemented if the carry is handled correctly. It's important to note that the result may be longer than the input binary numbers, so the implementation must account for this.

Lastly, it's essential to ensure that the output does not contain unnecessary leading zeros, as specified by the problem.
A linear search can be used to find the first non-zero character, and the substr() function can be applied to separate the result.
Special handling is required for cases where the result consists only of zeros.
*/

#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(false);

	int T;
	cin >> T;

	while (T--) {
		string binaryX;
		cin >> binaryX;
		string binaryY;
		cin >> binaryY;

		string result;

		int lengthOfBinary = max(binaryX.size(), binaryY.size());

		int carry = 0;

		// Binary addition using carry
		for (int i = 0; i <= lengthOfBinary; i++) {
			int x = 0;
			if (i < binaryX.size())
				x = binaryX[binaryX.size() - 1 - i] - '0';
			int y = 0;
			if (i < binaryY.size())
				y = binaryY[binaryY.size() - 1 - i] - '0';

			int sum = x + y + carry;
			carry = 0;

			if (sum > 1) {
				sum -= 2;
				carry = 1;
			}

			result.insert(result.begin(), sum + '0');
		}


		//Delete Zero in left side.
		int zeroStartEnd = 0;

		for (zeroStartEnd = 0; zeroStartEnd < result.size(); zeroStartEnd++) {
			if (result[zeroStartEnd] == '1')
				break;
		}
		
		// Case : result is 0
		if (zeroStartEnd == result.size())
			zeroStartEnd--;

		result = result.substr(zeroStartEnd);

		cout << result << "\n";
	}
}

//Finish