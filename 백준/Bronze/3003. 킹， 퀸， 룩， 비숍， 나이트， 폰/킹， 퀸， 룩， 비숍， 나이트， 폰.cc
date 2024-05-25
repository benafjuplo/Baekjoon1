/*
- Title : 3003 - King, Queen, Rook, Bishop, Knight, Pawn(BIJELE)
- Start Time : 24-05-21, 16:18
- End Time : 24-05-21, 16:25
- Try : 1
*/

#include<iostream>

using namespace std;

int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int chess[6] = { 1, 1, 2, 2, 2, 8 };
    int input[6] = { 0 };
    int res[6] = { 0 };

    for (int i = 0; i < 6; i++) {
        cin >> input[i];
    }

    for (int i = 0; i < 6; i++) {
        cout << chess[i] - input[i] << " ";

    }
}

//Finish