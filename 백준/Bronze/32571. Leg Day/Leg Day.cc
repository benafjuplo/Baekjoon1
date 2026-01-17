/*
- Title : 32571 - Leg Day
- Start Time : 26-01-17, 08:46
- End Time : 26-01-17, 09:09
- Try : 1
- Category : string
- Language : C++20
*/

/* 한국어 주석
윈도우 콘솔을 UTF-8 모드로 변경은 system("chcp 65001")로 가능하다.
*/

#include<iostream>
#include<string>
#include<vector>

//#include<cstdlib> // test

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	//cout.tie(0);

	//system("chcp 65001");	// test

	vector<string> emogi(3);

	emogi[0] = "🦵";
	emogi[1] = "💪";
	emogi[2] = "😎";

	int n;
	cin >> n;

	vector<int> activity(n);

	for (int i = 0; i < n; ++i) {
		string str;
		cin >> str;
		if (str.find("rest") != string::npos)
			activity[i] = 2;
		else if (str.find("leg") != string::npos)
			activity[i] = 0;
		else
			activity[i] = 1;
	}
	
	int seq = 0;

	for (int i = 1; i <= 31; ++i) {
		cout << emogi[activity[seq++]];
		if (seq >= n)
			seq = 0;
		
		if (i % 7 == 0)
			cout << "\n";
	}

	return 0;
}
