#include<iostream>

using namespace std;

int main(){
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int H, M;
	cin >> H >> M;
	// 45m 앞으로
	M = M - 45;
	if (M < 0) {
		
		int Negative = 0-M;
		
		if (H > 0) {
			
			H = H - 1;
			M = 60 - Negative;
		}
		else {
			H = 23;
			M = 60 - Negative;
		}
	}
	
	cout << H << " "  << M;
}