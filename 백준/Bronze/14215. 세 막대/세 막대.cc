/*
- Title : 14215 - Tree Bars
- Start Time : 24-05-21, 17:53
- End Time   : 24-05-21, 17:??
- Try : 1
*/

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool checkCondition(vector<int> v) {
    sort(v.begin(), v.end());
    if (v[2] < v[1] + v[0])
        return true;
    else
        return false;
}

bool isPossible(vector<int> v, int minus) {    // x <= y <= z
    bool result = false;
    for (int i = 0; i < 3; i++) {
        v[i] -= minus;
        result = checkCondition(v);
        v[i] += minus;
        if (result)
            break;
    }
    return result;
}

int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    vector<int> v(3);
    cin >> v[0] >> v[1] >> v[2];

    int minus = 0;

    while (true) {
        if (isPossible(v, minus))
            break;
        minus++;
    }

    cout << v[0] + v[1] + v[2] - minus;
}

//Finish