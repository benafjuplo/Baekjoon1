#include<iostream>
#include<string>
using namespace std;


int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int A, B, C;
	cin >> A >> B >> C;
	int m = A*B*C;

	string s = to_string(m);
	int cnt[10] = { 0 };
	for (int i = 0; i < s.size(); i++) {
		for (int j = 0; j < 10; j++) {
			if (s[i] == '0'+j)
				cnt[j]++;
		}
	}

	for (int j = 0; j < 10; j++) {
			cout << cnt[j]<<"\n";
	}

}