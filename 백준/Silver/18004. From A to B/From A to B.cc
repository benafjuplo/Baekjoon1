/*
- Title : 18004 - From A to B
- Start Time : 24-08-14, 00:47, 02:14
- End Time : 24-08-14,   01:55, 02:46
- Try : 5(4 : mathematics)
- Category : mathematics 
*/

/*
You need to divide a as much as possible to minimize it.
It becomes clear that dividing b all at once creates a segment that is too large if you think of it as a vertical line.
For example, if you divide a by 4, then by 2, and move it once, the segment is 1 unit. However, if you move before dividing a, the segment is 16 units.
*/


#include<iostream>

using namespace std;

int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(false);

	int a, b;
	cin >> a >> b;

	int operations = 0;

	// there is no 
	while (a > b) {
		if (a % 2 == 0) {
			a /= 2;  // If a is even, divide by 2
		}
		else {
			a += 1;  // If a is odd, subtract 1 (reverse of addition)
		}
		operations++;
	}

	operations += b - a;

	cout << operations;
}
