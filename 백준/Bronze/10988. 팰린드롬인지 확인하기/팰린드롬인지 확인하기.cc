/*
- Title : 10988 - Checking if it is a Palindrome
- Start Time : 24-05-20, 06:28
- End Time : 24-05=20, 06:32
- Try : 1
*/

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	string str1;
	cin >> str1;

	string str2 = str1;
	reverse(str2.begin(), str2.end());
	
	cout << (str1 == str2);
}

//Finish