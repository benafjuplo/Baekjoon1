/* 15829 - Hashing */

#include<iostream>
#include<string>
#include<vector>
using namespace std;

unsigned long long modulo(int base, int exp, unsigned long long M) {
    if (exp == 0)
        return 1;

    unsigned long long res = base;
    for (int i = 0; i < exp - 1; i++) {
        res *= base;
        res %= M;
    }

    return res;
}

int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);


    int L;
    cin >> L;
    string str;
    cin >> str;

    vector<int> v;

    int r = 31;
    unsigned long long M = 1'234'567'891;
    unsigned long long result = 0;

    //string -> int
    for (int i = 0; i < L; i++) {
        v.push_back(str[i] - 'a' + 1);
    }

    //hashing
    for (int i = 0; i < L; i++) {
        result += v[i] * modulo(r, i, M);
    }

    cout << result % M;
}

//Finish