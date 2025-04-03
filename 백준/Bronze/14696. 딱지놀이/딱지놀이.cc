/*
- Title : 14696 - Ttakji Game
- Start Time : 25-04-02, 10:55
- End Time : 25-04-02, 11:06
- Try : 1
- Category : simple, mathematics, elementary arithmetic
- Language : C++20
*/

/* 한국어 주석
string과 stringstream을 사용하면 입출력으로 인한 지연을 빠르게 할 수도 있겠지만
코드 복잡성이 큰 의미없이 매우 증가할 것이므로 생략한다.
*/

#include<iostream>
#include<vector>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	//cout.tie(0);

	int n;
	cin >> n;

	while (n--) {
		int a;
		cin >> a;
		vector<int> v1(5, 0);

		for (int i = 0;i < a;++i) {
			int x;
			cin >> x;
			v1[x]++;
		}
		
		int b;
		cin >> b;
		vector<int> v2(5, 0);

		for (int i = 0;i < b;++i) {
			int x;
			cin >> x;
			v2[x]++;
		}

		// star
		if (v1[4] != v2[4]) {
			if (v1[4] > v2[4])
				cout << "A\n";
			else
				cout << "B\n";
		}
		// circle
		else if (v1[3] != v2[3]) {
			if (v1[3] > v2[3])
				cout << "A\n";
			else
				cout << "B\n";
		}
		// rect
		else if (v1[2] != v2[2]) {
			if (v1[2] > v2[2])
				cout << "A\n";
			else
				cout << "B\n";
		}
		// triangle
		else if (v1[1] != v2[1]) {
			if (v1[1] > v2[1])
				cout << "A\n";
			else
				cout << "B\n";
		}
		else
			cout << "D\n";
	}

	return 0;
}

// Finish