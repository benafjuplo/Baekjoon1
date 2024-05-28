/*
- Title : 5073
- Start Time : 24-05-21, 17:10
- End Time   : 24-05-21, 17:??
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

    vector<int> v(3);
    while (true) {
        cin >> v[0] >> v[1] >> v[2];
        sort(v.begin(), v.end());
        if (v[0] == 0)
            break;

        if (!(v[2] < v[1] + v[0])) {
            cout << "Invalid" << "\n";
            continue;
        }
        if ((v[0] == v[1]) && (v[1] == v[2])) {
            cout << "Equilateral" << "\n";
            continue;
        }
        if ((v[0] == v[1]) || (v[1] == v[2]) || v[0] == v[2]) {
            cout << "Isosceles" << "\n";
            continue;
        }
        else {
            cout << "Scalene" << "\n";
            continue;
        }
    }
}

//Finish