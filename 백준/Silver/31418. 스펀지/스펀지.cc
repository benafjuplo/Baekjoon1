/*
- Title : 31418 - Sponge
- Start Time : 24-06-07, 01:50, 21:?
- End Time :   24-06-07, 03:23, 21:31
- Try : 8(Modular Arithmetic Confusion : 7)
*/

#include<iostream>

using namespace std;

long  long calSize(int W, int H, int T, int x, int y) {
	long long minX, minY, maxX, maxY;

	minX = x - T;
	if (minX < 1)
		minX = 1;
	maxX = x + T;
	if (maxX > W)
		maxX = W;
	minY = y - T;
	if (minY < 1)
		minY = 1;
	maxY = y + T;
	if (maxY > H)
		maxY = H;

	return (maxY - minY + 1) * (maxX - minX + 1);
}

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int W, H, K, T;
	cin >> W >> H >> K >> T;
	// Map size = H * W

	if (T == 0) {
		cout << 1 << "\n";
		return 0;
	}

	const long long cModulo = 998'244'353;

	long long res = 1;

	for (int i = 0; i < K; i++) {
		int x, y;
		cin >> x >> y;
		res = res * ((calSize(W, H, T, x, y)) % cModulo);
		res %= cModulo;
	}

	res %= cModulo;

	cout << res << "\n";
}

//Finish