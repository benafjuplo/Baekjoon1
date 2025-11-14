/*
- Title : 32978 - Oh right, the garlic!
- Start Time : 25-11-14, 16:45
- End Time : 25-11-14, 16:48
- Try : 1
- Category : string, unordered_set
- Language : C++20
*/

/* 한국어 주석
설명 생략.
*/

#include<iostream>
#include<string>
#include<unordered_set>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	//cout.tie(0);

	int n;
	cin >> n;

	unordered_set<string> ingredients;

	for (int i = 0; i < n; i++) {
		string ingredient;
		cin >> ingredient;
		ingredients.insert(ingredient);
	}

	for (int i = 0 ; i < n - 1; i++) {
		string ingredient;
		cin >> ingredient;
		ingredients.erase(ingredient);
	}

	for (const string& ingredient : ingredients) {
		cout << ingredient << '\n';
	}

	return 0;
}

// Finish