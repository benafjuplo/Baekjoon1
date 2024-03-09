#include<iostream>
#include<map>
using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N;
	cin >> N;

	map <int, int> m;
	
	for (int i = 0; i < N; i++) {
		int temp;

		cin >> temp;

		if (m.end() == m.find(temp))
			m[temp] = 1;
		else
			m[temp]++;
	}

	int M;
	cin >> M;

	for (int i = 0; i < M; i++) {
		int temp;
		cin >> temp;
		if (m.end() == m.find(temp))
			cout << 0 << " ";
		else
			cout << m[temp] << " ";
	}
}

//Finish