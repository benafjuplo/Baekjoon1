#include<iostream>
#include<vector>
using namespace std;

struct build {
	int x;	// weight
	int y;	// height
	int grade = 1;
	build(int a, int b) {
		x = a;
		y = b;
	}
	bool operator>(build b) {
		if (x > b.x && y > b.y) {
			return true;
		}
		else return false;
	}
};

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N;
	cin >> N;
	vector<build> p;
	for (int i = 0; i < N; i++) {
		int x, y;
		cin >> x >> y;
		build tempB(x, y);
		p.push_back(tempB);
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (j == i)
				continue;
			else {
				if (p[j] > p[i])
					p[i].grade++;
			}
		}
	}

	for (int i = 0; i < N; i++) {
		cout << p[i].grade << " ";
	}

	
}