#include<iostream>
#include<string>
using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N;
	cin >> N;
	int seq = 666;
	for (int i = 1; i < N; ) {
		seq++;
		string seqS = to_string(seq);
		if (seqS.find("666") == string::npos) {
			continue;
		}
		else {
			i++;
		}
	}

	cout << seq;
}