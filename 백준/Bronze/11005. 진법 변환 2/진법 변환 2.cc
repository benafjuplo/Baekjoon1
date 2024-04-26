/* 11005 - Base Conversion 2 */

#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	char base[36];
	for (int i = 0; i < 10; i++) {
		base[i] = i+'0';
	}
	for (int i = 10; i < 36; i++) {
		base[i] = i-10 + 'A';
	}

	int N;
	cin >> N; // Number

	int B;
	cin >> B; // Base

	int start = 0;
	for(start = 0;;start++) {
		if (N / pow(B, start) < 1) {
			start--;
			break;
		}
	}

	string result = "";
	for (; start >= 0; start--) {
		int di = N / pow(B, start);
		result += base[di];
		N -= di * pow(B, start);
	}

	cout << result;
}

//Finish