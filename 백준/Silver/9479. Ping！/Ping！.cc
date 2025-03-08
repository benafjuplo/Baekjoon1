/*
- Title : 9479 - Ping!
- Start Time : 25-03-07, 14:17
- End Time : 25-03-07, 15:21
- Try : 1
- Category : string, simulation, greedy algorithm
- Language : C++20
*/

/* 한국어 주석
이 문제는 주어진 조건의 신호들이 모두 겹쳐서 들려올 때의 신호를 가지고 어떤 주기를 가진 신호들이 존재하는지 찾는 문제이다.
0을 제외하고 1부터 시작하여 왼쪽부터 오른쪽으로 차례로 홀수와 짝수를 힌트로 주기적인 신호가 필요한지 판단하면서 진행한다.
*/

#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main() {
	cin.tie(0);
	//cout.tie(0);
	ios_base::sync_with_stdio(false);

	string line;
	cin >> line;

	while (line != "0") {
		//vector<bool> existPings(line.size(), false);
		vector<int> cntPings(line.size(), 0);

		for (int i = 1; i < line.size();++i) {
			if (line[i]-'0' != cntPings[i] % 2) {
				cout << i << " ";
				//existPings[i] = true;
				for (int j = i;j < line.size();j += i) cntPings[j]++;
			}
		}

		/*for (int i = 1; i < line.size();++i) {
			if (existPings[i]) cout << i << " ";
		}*/
		cout << "\n";

		cin >> line;
	}

	return 0;
}

//Finish