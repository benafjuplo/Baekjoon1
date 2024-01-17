#include<iostream>
#include<deque>
#include<string>
#include<iterator>
#include<cmath>

using namespace std;

int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
	ios_base::sync_with_stdio(false);
    
    int M, N;
    cin >> M >> N;
    deque<int> dq;
    deque<bool> dqB;
    int limit = sqrt(N);
    for (int i = 2 ; i <= N; i++){
        dq.push_back(i);
        dqB.push_back(true);
    }
    for (int i = 0 ; i < dq.size(); i++){
        if(!dqB[i])
            continue;
        int p = dq[i];
        if(p>=M)
            cout << p <<"\n";
        if(p<=limit)
            for(int j = 0 ; j<dq.size();j++){
                if(dq[j]%p == 0){
                    dqB[j] = false;
                }    
            }
    }
}
