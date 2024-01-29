#include<iostream>
#include<algorithm>
#include<vector>
#include<iterator>
using namespace std;

struct point {
	int x;
	int y;
};

struct compare {
	bool operator()(point a, point b) {
		if (a.y != b.y) {
			if (a.y < b.y)
				return true;
			else
				return false;
		}
		else {
			if (a.x < b.x)
				return true;
			else
				return false;
		}
	}
};

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N;
	cin >> N;
		
	vector<point> v;

	for (int i = 0; i < N; i++) {
		int x;
		int y;
		cin >> x >> y;

		point P;
		P.x = x;
		P.y = y;
		v.push_back(P);
	}

	sort(v.begin(), v.end(), compare());

	for (int i = 0; i < N; i++) {
		cout << v[i].x << " " << v[i].y << "\n";
	}

}