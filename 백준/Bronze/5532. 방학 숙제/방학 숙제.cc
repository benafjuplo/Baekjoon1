/*
- Title : 5532 - Homework 
- Start Time : 24-06-19, 06:27
- End Time : 24-06-19, 06:32
- Try : 1
- Category : Mathmatics
*/

#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int L, A, B, C, D;
	cin >> L >> A >> B >> C >> D;

	int math = A / C;
	if (A % C > 0)
		math++;
	int korean = B / D;
	if (B % D > 0)
		korean++;

	cout << L - max(math, korean) << "\n";
}

//Finish