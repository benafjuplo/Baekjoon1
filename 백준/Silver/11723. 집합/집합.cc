/*11723 - Set*/
//bitmasking is better
#include<iostream>

using namespace std;

int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    bool arr[20] = {};

    int M;
    cin >> M;

    for (int i = 0; i < M; i++) {
        string str;
        cin >> str;

        //add
        if (str == "add") {
            int x;
            cin >> x;
            if (!arr[x - 1])
                arr[x - 1] = true;
        }

        //remove
        else if (str == "remove") {
            int x;
            cin >> x;
            if (arr[x - 1])
                arr[x - 1] = false;
        }

        //check
        else if (str == "check") {
            int x;
            cin >> x;
            cout << arr[x - 1] << "\n";
        }

        //toggle
        else if (str == "toggle") {
            int x;
            cin >> x;
            arr[x - 1] = !arr[x - 1];
        }

        //all
        else if (str == "all") {
            for (int j = 0; j < 20; j++) {
                arr[j] = true;
            }
        }

        //empty
        else if (str == "empty") {
            for (int j = 0; j < 20; j++) {
                arr[j] = false;
            }
        }

    }//for loop
}//main


//Finish