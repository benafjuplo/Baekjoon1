/*
- Title : 9063 - Land
- Start Time : 24-05-21, 16:32
- End Time : 24-05-21, 16:47
- Try : 1
*/

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int N;
    cin >> N;

    vector<int> vX;
    vector<int> vY;
    for (int i = 0; i < N; i++) {
        int x, y;
        cin >> x >> y;
        vX.push_back(x);
        vY.push_back(y);
    }

    int minX, minY, maxX, maxY;
    sort(vX.begin(), vX.end());
    sort(vY.begin(), vY.end());
    minX = vX.front();
    maxX = vX.back();
    minY = vY.front();
    maxY = vY.back();

    cout << (maxX - minX) * (maxY - minY);    // N == 1  또는 점들이 한줄로 나열된경우(대각선 제외)에 대한 예외 처리는 필요 없음
}


//Finish