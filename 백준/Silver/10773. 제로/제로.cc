#include<iostream>
#include<stack>
using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	stack <int> s;

	int k;

	cin >> k;

	for (int i = 0; i < k; i++) {
		int temp;
		cin >> temp;
		if (temp == 0)
			s.pop();
		else
			s.push(temp);
	}

	int sum = 0;

	while (!s.empty()) {
		sum += s.top();
		s.pop();
	}
	
	cout << sum;
}