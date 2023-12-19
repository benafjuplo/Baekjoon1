#include<iostream>
#include<string>

using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	string str1, str2;
	cin >> str1 >> str2;

	char temp = str1[2];
	str1[2] = str1[0];
	str1[0] = temp;

	temp = str2[2];
	str2[2] = str2[0];
	str2[0] = temp;
	
	int number1 = stoi(str1);
	int number2 = stoi(str2);

	if (number1 > number2)
		cout << number1;
	else
		cout << number2;
}