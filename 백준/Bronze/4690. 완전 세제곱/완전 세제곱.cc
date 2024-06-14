/*
- Title : 4690 - Perfect Cubes
- Start Time : 24-06-13, 01:55
- End Time : 24-06-13, 02:11
- Try : 4(Mistake in Understanding the Problem : 3)
- Category : Unclear Question, Brute Force, Mathmatics, Performance Issues with <cmath>
*/

#include <iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	for (int a = 2; a <= 100; a++) {
		int cube = a * a * a;
		for (int b = 2; b < a; b++) {
			for (int c = b; c < a; c++) {
				for (int d = c; d < a; d++) {
					int triple = b * b * b + c * c * c + d * d * d;
					if (cube == triple)
						cout << "Cube = " << a << ", Triple = (" << b << "," << c << "," << d << ")" << "\n";
				}
			}
		}
	}
}

//Finish