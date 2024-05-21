/*
- Title : Born in 1998, am I 2541 in Thailand?!
- Start Time : 24-05-20, 02:44
- End Time : 24-05-20, 02,47
- Try : 1
*/

#include<iostream>

#define DIFF 543

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int y; // 1000 <= y <= 3000;
	cin >> y;
	//y - diff = res
	//2541 - diff = 1998 or diff = 2541 - 1998 = 543
	int res = y - DIFF;

	cout << res;
}

//Finish