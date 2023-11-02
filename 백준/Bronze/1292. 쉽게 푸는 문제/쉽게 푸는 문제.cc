#include<iostream>
#include<vector>
using namespace std;

int sum(int x) {
	int result = 0;
	int cnt = 0;
	for (int i = 1; ; i++) {
		for (int j = 1; j <= i; j++) {
			result += i;
			cnt++;
			if (cnt == x)
				break;
		}
		if (cnt == x)
			break;
	}
	return result;
}

int main() {
	int A, B;
	cin >> A >> B;
	try {
		if (A <= 0 || B <= 0)  // natural number check
			throw "The number is not a natural number.";
	}
	catch (const char* s) {
		cout << s;
		exit(1);
	}
	if (B == 1) {
		cout << 1;
	}
	else if (A == 1) {
		int AB = sum(B);
		cout << AB;
	}
	else {
	int AB = sum(B) - sum(A - 1);
	cout << AB;
	}
}