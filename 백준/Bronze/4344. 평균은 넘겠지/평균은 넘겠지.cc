#include<iostream>
#include<vector>
#include<queue>

using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int C;
    cin >> C;

    for (int i = 0; i < C; i++) {
        int N;
        cin >> N;
        priority_queue<int> q;
        double average = 0;
        for (int j = 0; j < N; j++) {
            int tempI;
            cin >> tempI;
            average += tempI;
            q.push(tempI);
        }
        average /= N;
        double cnt = 0;
        for (int j = 0; j < N; j++) {
            if (q.top() > average)
                cnt++;
            else
                break;
            q.pop();
        }
        double percent = cnt / N * 100;
        cout.precision(6);
        cout << percent << "%" << "\n";
    }
}