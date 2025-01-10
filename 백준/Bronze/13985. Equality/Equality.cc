/*
- Title : 13985 - Equality
- Start Time : 25-01-10, 21:00
- End Time : 25-01-10, 21:04
- Try : 3(1 : debug output, 1 : integer type dummy)
- Category : mathematics, simple, basic, elementary arithmetic
- Language : C++20
*/

/* 한국어 주석
'+'기호와 '='기호를 입력을 받고 사용하지 않는다.
*/

#include<iostream>

using namespace std;

int main() {
	cin.tie(0);
	//cout.tie(0);
	ios_base::sync_with_stdio(false);

	int a, b, c;
	char dummy;
	cin >> a >> dummy >> b >> dummy >> c;
	if (a + b == c) cout << "YES";
	else cout << "NO";

	return 0;
}

//Finish