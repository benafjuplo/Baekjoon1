/*
- Title : 8911 -Turtle
- Start Time : 24-06-17, 06:15
- End Time : 24-06-17, 06:37
- Try : 1
- Category : Coordinate System, 4 Directions, Making a Rectangle
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int T;
	cin >> T;

	for (int mainLoop = 0; mainLoop < T; mainLoop++) {
		string str;
		cin >> str;

		int minX = 0;
		int maxX = 0;
		int minY = 0;
		int maxY = 0;

		int x = 0;
		int y = 0;

		int dir = 0;

		int moveX[4] = { 0, 1, 0, -1 };
		int moveY[4] = { 1, 0, -1, 0 };

		for (int i = 0; i < str.size(); i++) {
			if (str[i] == 'F') {
				x += moveX[dir];
				y += moveY[dir];

				if (minX > x)
					minX = x;

				if (maxX < x)
					maxX = x;

				if (minY > y)
					minY = y;

				if (maxY < y)
					maxY = y;
			}

			else if (str[i] == 'B') {
				x -= moveX[dir];
				y -= moveY[dir];

				if (minX > x)
					minX = x;

				if (maxX < x)
					maxX = x;

				if (minY > y)
					minY = y;

				if (maxY < y)
					maxY = y;
			}
			
			else if (str[i] == 'L') {
				dir--;
				if (dir < 0)
					dir = 3;
			}

			else if (str[i] == 'R') {
				dir++;
				if (dir > 3)
					dir = 0;
			}
		}
		
		cout << (maxX - minX) * (maxY - minY) << "\n";
	}

}

//Finish