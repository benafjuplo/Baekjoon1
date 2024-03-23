#include<iostream>
#include<string>
using namespace std;

int factorial(int n) {
	int cnt = 0;

	long long f = 1;

	for (int i = 2; i <= n; i++) {

		f *= i;

		string str = to_string(f);
		int cur = 0;
		for (int j = 0; j < str.size(); j++) {
			if (str[str.size() - 1 - j] == '0')
				cur++;
			else
				break;
		}
		cnt += cur;
		for (int j = 0; j < cur; j++)
			str.pop_back();
		f = stoll(str);

		if (f > 1000'000'000'000) {
			f %= 1000'000'000'000;
		}

	}

	return cnt;
}

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N;
	cin >> N;

	cout << factorial(N);
}


//Finish