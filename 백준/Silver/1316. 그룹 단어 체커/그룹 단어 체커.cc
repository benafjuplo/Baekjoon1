#include<iostream>
#include<string>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N;
	cin >> N;
	int cnt = 0;
	for (int i = 0; i < N; i++) {
		string str;
		cin >> str;
		char ignore = str[0];
		bool check['z' + 1 - 'a'] = { false };
		check[str[0] - 'a'] = true;
		for (int j = 0; j < str.size(); j++) {			
			if (ignore == str[j])
				continue;
			if (check[str[j] - 'a']) {
				cnt--;
				break;
			}
			check[str[j] - 'a'] = true;
			ignore = str[j];
		}
		cnt++;
	}

	cout << cnt;


}