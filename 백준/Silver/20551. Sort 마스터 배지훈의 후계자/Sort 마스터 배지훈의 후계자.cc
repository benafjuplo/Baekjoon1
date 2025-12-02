/*
- Title : 20551 - The Heir to Sort Master Bae Ji-hoon
- Start Time : 25-12-02, 13:55
- End Time : 25-12-02, 14:00
- Try : 1
- Category : binary search, sorting, unordered_map
- Language : C++20
*/

/* 한국어 주석
문제의 요구 사항은 C++의 lower_bound와 완벽하게 동일한 내용이므로 그대로 사용하는 것이 좋다. 맨 아래의 주석된 코드는 lower_bound 버전이다.
unordered_map도 가능하지만 메모리, 시간, 코드 복잡성 측면 모두에서 비효율적이다.
*/

#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	//cout.tie(0);

	int N, M;
	cin >> N >> M;

	vector<int> A(N);

	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}

	sort(A.begin(), A.end());

	unordered_map<int, int> umap;

	for (int i = 0; i < N; ++i) {
		if (umap.find(A[i]) == umap.end()) {
			umap[A[i]] = i;
		}		
	}

	for (int i = 0; i < M; i++) {
		int query;
		cin >> query;
		if (umap.find(query) != umap.end()) {
			cout << umap[query] << '\n';
		}
		else {
			cout << -1 << '\n';
		}
	}

	return 0;
}

// Finish

/* 
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M;
    if (!(cin >> N >> M)) return 0;

    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    sort(A.begin(), A.end());

    int target;
    for (int i = 0; i < M; ++i) {
        cin >> target;

        auto it = lower_bound(A.begin(), A.end(), target);
        
        if (it != A.end() && *it == target) {
            cout << (it - A.begin()) << "\n";
        } else {
            cout << -1 << "\n";
        }
    }

    return 0;
}
*/