/*
- Title : 23810 - Print @ Pattern - Reversed ㅋ Shape
- Start Time : 25-04-23, 22:03
- End Time : 
- Try : 
- Category : 
- Language : C++20
*/

/* 한국어 주석
*/

#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	//cout.tie(0);

	int N;
	cin >> N;

	vector<string> v = { "@@@@@", "@", "@@@@@" ,"@", "@" };

	for (auto& s : v) {
		for (int i = 0; i < N; ++i) {
			for (int j = 0; j < N; ++j) {
				cout << s;
			}
			cout << "\n";
		}
	}

	return 0;
}


