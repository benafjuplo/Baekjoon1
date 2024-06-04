/*
- Title : 1620 - I am the Pokemon Master, Lee Dasom
- Start Time : 24-05-03, 01:17
- End Time : 24-05-03, 01:44
- Try : 1
*/

#include <iostream>
#include<map>
#include<string>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N, M;
	cin >> N >> M;

	map <string, string> m;

	for (int i = 1; i <= N; i++) {
		string str;
		cin >> str;
		m.insert({ str, to_string(i) });
		m.insert({ to_string(i), str });
	}

	for (int i = 0; i < M; i++) {
		string str;
		cin >> str;
		cout << m[str] << "\n";
	}
}

//Finish