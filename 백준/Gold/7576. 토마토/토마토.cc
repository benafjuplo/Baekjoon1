#include<iostream>
#include<queue>
using namespace std;

struct point {
	int x;
	int y;
	point(int a, int b) {
		x = a;
		y = b;
	}
};

int** t;
int m, n;
queue <point> q;

void debugshow() {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << t[i][j] << " ";
		}
		cout << "\n";
	}
	cout << "\n";
}

bool change(int i, int j) {
	//LEFT
	bool result = false;	// check change
	if (j - 1 >= 0) {
		if (t[i][j - 1] == 0) {
			t[i][j - 1] = 1;
			result = true;
			q.push(point(j - 1, i));
		}
	}
	//UP
	if (i - 1 >= 0) {
		if (t[i - 1][j] == 0) {
			t[i - 1][j] = 1;
			result = true;
			q.push(point(j, i-1));
		}

	}
	//RIGHT
	if (j + 1 < m) {
		if (t[i][j + 1] == 0) {
			t[i][j + 1] = 1;
			result = true;
			q.push(point(j+1, i));
		}
	}
	//DOWN
	if (i + 1 < n) {
		if (t[i + 1][j] == 0) {
			t[i + 1][j] = 1;
			result = true;
			q.push(point(j, i+1));
		}
	}
	return result;
}

void de() {
	for (int i = 0; i < n; i++) {
		delete[] t[i];
	}
	delete[] t;
}

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);	

	cin >> m >> n;
	t = new int* [n];
	for (int i = 0; i < n; i++) {
		t[i] = new int[m];
	}

	int day = 0;
	// number of 1, 0, -1
	int num[3] = {0};
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> t[i][j];
			if (t[i][j] == 1) {
				q.push(point(j, i));
				num[0]++;
			}
			if (t[i][j] == 0)
				num[1]++;
			if (t[i][j] == -1)
				num[2]++;
		}
	}

	// if there is no 0(==only 1) => 0
	if (num[1] == 0) {
		cout << 0;
		de();
		return 0;
	}

	// if there is no 1(==only 0) => -1 
	if (num[0] == 0) {
		cout << -1;
		de();
		return 0;
	}

	// simulation
	bool Noroute = true;
	while(true){
		bool c = false;
		day++;
		int seq = q.size();
		for(int i = 0 ; i<seq ; i++) {
			point p = q.front();
			q.pop();
			if (change(p.y, p.x))
				c = true;
		}

		if (c == false) {
			//Check Tomato
			bool zero = false;
			for (int i = 0; i < n; i++) {
				for (int j = 0; j < m; j++) {
					if (t[i][j] == 0) {
						zero = true;
					}
				}
			}
			if (zero == false)
				Noroute = false;
			break;
		}
	}
	day--;

	// there is no route 1 to 0 => -1
	if (Noroute) {
		cout << -1;
		de();
		return 0;
	}

	// else print day.
	cout << day;
	de();
}