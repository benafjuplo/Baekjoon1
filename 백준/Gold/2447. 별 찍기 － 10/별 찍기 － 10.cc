/* 2447 - Star Printing - 10 */

#include<iostream>
#include<vector>
#include<string>
#include<cmath>
using namespace std;

void printStar(int n, int k) {
    vector<vector<string>> screen(n + 1);    // screen[0] is not used.

    string blank = " ";

    //initialize screen[1]
    screen[1].push_back("***");
    screen[1].push_back("* *");
    screen[1].push_back("***");


    for (int i = 2; i <= k; i++) {    // first loop for screen
        screen[i].assign((int)pow(3, i), "");    // assign size of screen[i]
        //push previous screen 3*3
        for (int blockrow = 0; blockrow < 3; blockrow++) {    // by row
            for (int blockcolumn = 0; blockcolumn < 3; blockcolumn++) {    //by column
                if (blockrow == 1 && blockcolumn == 1) {
                    for (int row = 0; row < screen[i - 1].size(); row++) {
                        for (int column = 0; column < screen[i - 1].size(); column++) {
                            screen[i][(blockrow * screen[i - 1].size()) + row] += blank;
                        }
                    }
                }
                else {
                    for (int row = 0; row < screen[i - 1].size(); row++) {
                        screen[i][(blockrow * screen[i - 1].size()) + row] += screen[i - 1][row];
                    }
                }
            }
        }
    }

    for (int i = 0; i < screen[k].size(); i++) {
        cout << screen[k][i] << "\n";
    }
}

int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int N; // N = 3^k (k is natural number)
    cin >> N;
    int K;
    for (int i = 1;; i++) {
        if (N == pow(3, i)) {
            K = i;
            break;
        }
    }

    printStar(N, K);
}

//Finish