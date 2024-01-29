#include<iostream>
#include<string>
#include<iterator>
#include<algorithm>
#include<vector>
#include<cmath>
using namespace std;

vector<int> box;
vector<string> v;
void select(int digit) {
	for (int i = 0; i < 10; i++) {
		if (digit == 0 && i==0) {
			continue;
		}
		if (v[digit] != "666")
			v[digit] = to_string(i);
		else
			i = 10;
		if(digit != v.size()-1)
			select(digit + 1);
		else {
			string str = "";
			for (int j = 0; j < v.size(); j++)
				str += v[j];
			box.push_back(stoi(str));
		}
	}

	return;
}

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N;
	cin >> N;

	int digit = 3;
	string str = "666";

	for (int i = 1; i < N;) {

		digit++;

		//Initialize
		v.clear();
		for (int j = 0; j <= digit-3; j++) {
			string temp = "1";
			v.push_back(temp);
		}
				
		// Select
		for (int j = 0; j <= digit-3; j++) {
			if (j > 0)
				v[j - 1] = "1";
			v[j] = "666";
			select(0);
		}

		// Sort
		sort(box.begin(), box.end());
		box.erase(unique(box.begin(), box.end()), box.end());
		while(!box.empty()){
			str = to_string(box[0]);
			box.erase(box.begin());
			i++;
			if (i >= N)
				break;
		}
		if (i >= N)
			break;
	}
	
	cout << str;
}