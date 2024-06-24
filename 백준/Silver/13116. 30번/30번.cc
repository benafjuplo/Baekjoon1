/*
- Title : 13116 - 30th
- Start Time : 24-06-19, 12:54
- End Time : 24-06-19, 13:13
- Try : 1
- Category : Tree, LCA
*/

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int T;
	cin >> T;

	for (int i = 0; i < T; i++) {
		int A, B;
		cin >> A >> B;
		vector<int> parentA;
		int x = A;
		while (true) {
			parentA.push_back(x);
			if (x == 1)
				break;
			x /= 2;
		}
		x = B;
		while (true) {
			if (find(parentA.begin(), parentA.end(), x) != parentA.end())
				break;
			x /= 2;
		}
		cout << x * 10 << "\n";
	}
}

//Finish