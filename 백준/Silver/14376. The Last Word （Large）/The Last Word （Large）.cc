/*
- Title : 14376 - The Last Word (Large)
- Start Time : 24-07-29, 14:37
- End Time : 24-07-29, 15:02
- Try : 1
- Category : string, sorting, insert-sorting
*/

#include<iostream>
#include<string>

using namespace std;

int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(false);
	
	int T;
	cin >> T;

	for (int i = 1; i <= T; i++) {
		string ori;
		cin >> ori;
		string res;

		for (int j = 0; j < ori.size(); j++) {
			if (j == 0)
				res.insert(res.begin(), ori[j]);
			else {
				if(ori[j]>=res[0])
					res.insert(res.begin(), ori[j]);
				else
					res.insert(res.end(), ori[j]);
			}
		}

		cout << "Case #" << i << ": " << res << "\n";
	}
}

//Finish