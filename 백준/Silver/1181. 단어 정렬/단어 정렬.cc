#include<iostream>
#include<vector>
#include<iterator>
#include<algorithm>
#include<string>

using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N;
	cin >> N;

	vector<string> v[50];
	for (int i = 0; i < N; i++) {
		string str;
		cin >> str;
		if(v[str.size()-1].end() == find(v[str.size() - 1].begin(), v[str.size() - 1].end(), str))
			v[str.size() - 1].push_back(str);
	}
	
	for (int i = 0; i < 50; i++) {
		sort(v[i].begin(), v[i].end());
		for (int j = 0; j < v[i].size(); j++)
			cout << v[i][j] << "\n";
	}
}