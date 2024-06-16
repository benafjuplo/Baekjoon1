/*
- Title : 30877 - X marks the Spot
- Start Time : 24-06-16, 02:44
- End Time : 24-06-16, 02:58
- Try : 1
- Category : String, Search-String, Insert-String
*/

#include<iostream>
#include<string>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N; 
	cin >> N;

	string res = "";

	for (int i = 0; i < N; i++) {
		string s, t;
		cin >> s >> t;
		int index = s.find('x');
		if (index != string::npos) {
			char c = t[index];
			if ('a' <= c && c <= 'z')
				c += 'A' - 'a';
			res.push_back(c);	// Better than "res.insert(res.begin() + i, c);"
		}
		else {
			index = s.find('X');
			char c = t[index];
			if ('a' <= c && c <= 'z')	// <cctype>의 toupper(c)로 대체 가능
				c += 'A' - 'a';
			res.push_back(c);
		}
	}

	cout << res << "\n";
}

//Finish