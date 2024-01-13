#include<iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	

	int T;
	cin >> T;
	
	for (int i = 0; i < T; i++) {
		int H, W, N;
		cin >> H >> W >> N;

		int w;
		w = N / H;
		int r = N % H;
		if (r > 0)
			w++;

		int h;
		h = N - (w - 1) * H;		

		cout << h;
		cout.width(2);
		cout.fill('0');
		cout << w << "\n";
	}
	
}