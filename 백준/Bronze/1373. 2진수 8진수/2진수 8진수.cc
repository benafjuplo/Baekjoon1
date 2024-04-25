/* 1373 - Binary to Octal */

#include<iostream>
#include<string>
using namespace std;

int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    string binary;
    cin >> binary;
     
    string octal = "";

    for (int i = 0; i < binary.size(); i += 3) {
        if (i == 0) {
            int mod = binary.size() % 3;
            if (mod == 0) {
                int digit = (binary[i] - '0') * 4 + (binary[i + 1] - '0') * 2 + (binary[i + 2] - '0');
                octal.append(to_string(digit));
            }
            else if (mod == 1) {
                int digit = (binary[i] - '0');
                octal.append(to_string(digit));
                i -= 2;
            }
            else if (mod == 2) {
                int digit = (binary[i] - '0') * 2 + (binary[i + 1] - '0');
                octal.append(to_string(digit));
                i--;
            }
        }
        else {
            int digit = (binary[i] - '0') * 4 + (binary[i + 1] - '0') * 2 + (binary[i + 2] - '0');
            octal.append(to_string(digit));
        }
    }

    cout << octal;
}

//Finish