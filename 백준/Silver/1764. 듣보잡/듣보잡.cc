/*1764 - Unknown*/
/* another solution
1. set or unordered_set and find
*/
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<iterator>


using namespace std;

int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    //Input
    vector<string> v1;
    vector<string> v2;
    int M, N;
    cin >> M >> N;

    for (int i = 0; i < M; i++) {
        string str;
        cin >> str;
        v1.push_back(str);
    }
    for (int i = 0; i < N; i++) {
        string str;
        cin >> str;
        v2.push_back(str);
    }

    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());

    /*int size;
    if (M > N)
        size = M;
    else
        size = N;
    vector<string> v(size);*/

    //auto it = set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), v.begin());
    //v.erase(it, v.end());

    vector<string> v;
 
    set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), back_inserter(v));//back_inserter를 이용하여 복잡한 코드 단순화
    
    
    cout << v.size() << "\n";
    for (string i : v) {
        cout << i << "\n";
    }

}//main

//Finish