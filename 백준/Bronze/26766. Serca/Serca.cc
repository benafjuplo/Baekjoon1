/*
- Title : 26766 - Serca
- Start Time : 24-11-30, 23:35
- End Time : 24-11-30, 23:35
- Try : 2(1 : right space)
- Category : string, simple, basic
- Language : C++14
*/

/* 한국어 문제 요약
- 문제
N번 아래와 같은 아스키아트로 이루어진 하트를 그리는 프로그램을 작성하라.
 @@@   @@@ 
@   @ @   @
@    @    @
@         @
 @       @ 
  @     @  
   @   @   
	@ @    
	 @     

- 입력
입력의 첫 번째(유일한) 줄에는 출력할 하트 수를 지정하는 하나의 양의 정수 N이 포함된다. 이 숫자는 최소 1에서 최대 100,000이다.

- 출력
프로그램은 정확히 N개의 하트를 아래에 하나씩 출력해야 한다.

- 예제
입력 1 : 
2
출력 1 : 
 @@@   @@@
@   @ @   @
@    @    @
@         @
 @       @ 
  @     @  
   @   @   
	@ @    
	 @      
 @@@   @@@
@   @ @   @
@    @    @
@         @
 @       @
  @     @
   @   @
	@ @
	 @
*/

/* 한국어 주석
이 문제는 주어진 형식의 하트 모양 아스키아트를 N번 출력하는 문제이다.

문자열을 이용해서 미리 하트 모양을 만들어 N번 반복하거나 하트 모양을 출력하는 반복문을 N번 반복하여도 된다.

하트 모양의 오른쪽에 공백을 주의해서 출력한다.
*/

/* English Problem Summary
- Problem
Write a program that draws an ASCII art heart as shown below exactly N times.
 @@@   @@@
@   @ @   @
@    @    @
@         @
 @       @
  @     @
   @   @
	@ @
	 @

- Input
The first (and only) line of input contains a single positive integer N, specifying the number of hearts to be printed. This number is between 1 and 100,000.

- Output
The program should print exactly N hearts, one below the other.

- Example
Input 1 :
2
Output 1 :
 @@@   @@@
@   @ @   @
@    @    @
@         @
 @       @
  @     @
   @   @
	@ @
	 @
 @@@   @@@
@   @ @   @
@    @    @
@         @
 @       @
  @     @
   @   @
	@ @
	 @
*/

/* English Comment
This problem involves printing the given ASCII art heart N times.

The solution can either predefine the heart as a string and print it N times using a loop or use a loop to directly output the heart pattern N times.

Pay close attention to the trailing spaces when printing the heart shape.
*/

#include<iostream>
#include<string>

using namespace std;

int main() {
	cin.tie(0);
	//cout.tie(0);
	ios_base::sync_with_stdio(false);

	string heart = " @@@   @@@\n";
	heart += "@   @ @   @\n";
	heart += "@    @    @\n";
	heart += "@         @\n";
	heart += " @       @ \n";
	heart += "  @     @  \n";
	heart += "   @   @   \n";
	heart += "    @ @    \n";
	heart += "     @     \n";

	int N;
	cin >> N;

	while (N--)
		cout << heart;

	return 0;
}

//Finish