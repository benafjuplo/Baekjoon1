/*
- Title : 18126 - Gugu the Raccoon
- Start Time : 24-08-06, 02:32, 15:36
- End Time :   24-08-06, 02:36. 16:39
- Try : 2(1 : Adjacency List Mistake)
- Category : Adjacency List, Breath First Search(BFS), Weighted Tree
*/

#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>

using namespace std;

long long bfsReturnMaxLength(vector<vector<pair<int, int>>>& way, vector<long long>& length) {
	queue<int> q;		// Queue for BFS
	q.push(1);
	long long maxLength = 0;

	while (!q.empty()) {
		int currentPos = q.front();
		q.pop();
		maxLength = max(length[currentPos], maxLength);
		for (auto& targetPos : way[currentPos]) {
			if (length[targetPos.first] == 0) {		// If not visited
				length[targetPos.first] = length[currentPos] + targetPos.second;
				q.push(targetPos.first);
			}
			// Maybe this is not necessary for this problem because there are only N-1 routes. But this is the more common form.
			/*else {		
				length[targetPos.first] = min(length[currentPos] + targetPos.second, length[targetPos.first]);
			}*/
		}
	}
	return maxLength;
}

int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(false);

	int N;
	cin >> N;
	
	vector<vector<pair<int, int>>> way(N + 1);		// Adjacency list with weight
	vector<long long> length(N + 1, 0);				// Distance from the entrance, initialized to 0

	for (int i = 0; i < N - 1; i++) {
		int A, B, C;
		cin >> A >> B >> C;
		way[A].push_back(make_pair(B, C));
		way[B].push_back(make_pair(A, C));
	}

	cout << bfsReturnMaxLength(way, length);
}

//Finish