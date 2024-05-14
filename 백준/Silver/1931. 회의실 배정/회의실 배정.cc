/*
- Title : 1931 - Meeting Room Assignment
- Start Time : 24-05-10, 23:51 | 24-05-11, 01:48
- End Time   : 24-05-11, 00:13 | 24-05-11, 02:25
- Try : 4
*/

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

struct meeting {
    unsigned int startTime;
    unsigned int endTime;
    meeting(int startT, int endT) {
        startTime = startT;
        endTime = endT;
    }

    bool operator<(const meeting& other) const {
        if (endTime == other.endTime)
            return startTime < other.startTime;
        else
            return endTime < other.endTime;
    }
};

int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int N;
    cin >> N;

    vector<meeting> v;

    int cnt = 0;

    for (int i = 0; i < N; i++) {
        unsigned int startTime, endTime;
        cin >> startTime >> endTime;
        meeting m(startTime, endTime);
        v.push_back(m);
    }

    if (v.size() > 0) {
        sort(v.begin(), v.end());
        unsigned int neededStart = v[0].endTime;
        cnt++;
        for (int i = 1; i < v.size(); i++) {
            if (neededStart <= v[i].startTime) {
                cnt++;
                neededStart = v[i].endTime;
            }
        }
    }
    cout << cnt << "\n";
}

//Finish