/*
- Title : 30087 - Promotion Agency Seminar
- Start Time : 24-06-19, 06:08
- End Time : 24-06-19, 06:15
- Try : 2(Typing Error : 1)
- Category : Map, String, Basic I/O
*/

#include<iostream>
#include<string>
#include<unordered_map>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	unordered_map<string, string> m(7);

	m["Algorithm"] = "204";
	m["DataAnalysis"] = "207";
	m["ArtificialIntelligence"] = "302";
	m["CyberSecurity"] = "B101";
	m["Network"] = "303";
	m["Startup"] = "501";
	m["TestStrategy"] = "105";

	int N;
	cin >> N;

	for (int i = 0; i < N; i++) {
		string str;
		cin >> str;
		cout << m[str] << "\n";
	}
}

//Finish
