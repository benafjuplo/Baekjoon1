#include<iostream>
#include<string>
using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N;
	cin >> N;

	int i;
	if (N - 60 < 0)
		i = 1;
	else
		i = N - 60;
	for (; i < N; i++) {
		int dis = i;
		string str;
		str = to_string(i);
		for (int j = 0; j < str.size(); j++) {
			dis += str[j] - '0';
		}

		if (dis == N)
			break;
	}
	int res = 0;
	
	if (i != N)
		res = i;
	
	cout << res;
}