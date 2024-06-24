/*
- Title : 10158 - Ant
- Start Time : 24-06-25, 04:12
- End Time : 24-06-25, 05:21
- Try : 5(1 : Time, 3 : Memory)
- Category : Mathmatics
*/

#include <iostream>
using namespace std;

int main() {
    int w, h, p, q, t;
    cin >> w >> h >> p >> q >> t;

    // x 좌표 계산
    int x = (p + t) % (2 * w);
    if (x > w) {
        x = 2 * w - x;
    }

    // y 좌표 계산
    int y = (q + t) % (2 * h);
    if (y > h) {
        y = 2 * h - y;
    }

    cout << x << " " << y << endl;
    return 0;
}

//#include<iostream>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//
//int main() {
//	cin.tie(NULL);
//	cout.tie(NULL);
//	ios_base::sync_with_stdio(false);
//
//	int w, h;
//	cin >> w >> h;
//
//	int p, q;
//	cin >> p >> q;
//
//	int t;
//	cin >> t;
//
//	int dirX = 1;
//	int dirY = 1;
//
//	vector<pair<int, int>> v;
//		v.push_back(make_pair(p, q));
//
//	
//	if ((w < 500 || h < 500) && w < 10000 && h < 10000) {
//		while (t-- > 0) {
//			p += dirX;
//			q += dirY;
//
//			if (p == 0 || p == w)
//				dirX = -dirX;
//			if (q == 0 || q == h)
//				dirY = -dirY;
//
//			if (v[0].first == p && v[0].second == q && dirX == 1 && dirY == 1) {
//				p = v[t % v.size()].first;
//				q = v[t % v.size()].second;
//				break;
//			}
//			else
//				v.push_back(make_pair(p, q));
//		}
//	}
//
//	// 빠르지만 좁은 공간에서 비효율
//	else {
//		while (t > 0) {
//			int diffX;
//			if (dirX > 0)
//				diffX = min(w - p, t);
//			else
//				diffX = min(p - 0, t);
//			int diffY;
//			if (dirY > 0)
//				diffY = min(h - q, t);
//			else
//				diffY = min(q - 0, t);
//
//			int move = min(diffX, diffY);
//
//			t -= move;
//			p += dirX * move;
//			q += dirY * move;
//
//			if (p == 0 || p == w)
//				dirX = -dirX;
//			if (q == 0 || q == h)
//				dirY = -dirY;
//		}
//	}
//
//	cout << p << " " << q;
//}

//Finish