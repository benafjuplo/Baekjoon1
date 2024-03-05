#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int x;
	int y;

	string strx;
	cin >> strx;
	string stry;
	cin >> stry;

	reverse(strx.begin(), strx.end());
	reverse(stry.begin(), stry.end());

	x = stoi(strx);
	y = stoi(stry);

	int sum = x + y;
	string strsum = to_string(sum);

	reverse(strsum.begin(), strsum.end());
	cout << stoi(strsum);
}

//Finish