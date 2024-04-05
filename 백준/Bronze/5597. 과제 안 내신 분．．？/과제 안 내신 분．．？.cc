#include<iostream>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	bool stu[31] = { false };

	for (int i = 0; i < 28; i++) {
		int temp;
		cin >> temp;
		stu[temp] = true;
	}

	for (int i = 1; i <= 30; i++) {
		if (!stu[i])
			cout << i << "\n";
	}
}

//Finish