/*
- Title : 2720 - Laundry Owner Donghyuk(Quick Change)
- Start Time : 24-05-21, 16:06 | 24-05-22, 00:31
- End Time   : 24-05-21, 16:17 | 24-05-22, 01:15
- Try : 2
*/

#include<iostream>

using namespace std;

int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int T;
    cin >> T;

    for (int i = 0; i < T; i++) {
        int C;
        cin >> C;

        int quarter = 0.25 * 100;
        int resQ = C / quarter;
        C = C % quarter; 
        int dime = 0.10 * 100;
        int resD = C / dime;
        C = C % dime;
        const int nickel = 0.05 * 100;
        int resN = C / nickel;
        C = C % nickel;
        const int penny = 0.01 * 100;
        int resP = C / penny;

        cout << resQ << " " << resD << " " << resN << " " << resP << "\n";
    }
}

// Finish