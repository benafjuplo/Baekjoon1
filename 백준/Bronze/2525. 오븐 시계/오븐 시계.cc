#include<iostream>

using namespace std;

int main() {
	int h, m;
	cin >> h >> m;

	int dm;
	cin >> dm;
	
	m += dm;
	while (m > 59) {
		h++;
		m -= 60;
	}

	if (h > 23)
		h -= 24;

	cout << h << " " << m;
}