/* 
- Title : 17029 - Guess the Animal
- Start Time : 24-07-02, 11:34, 13:57, 15:??
- End Time :   24-07-02, 12:41, 14:14, 15:21
- Try : 2(1 : Incorrect Problem Approach)
- Category : Intersection, Set
*/

#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<set>

using namespace std;

int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(false);

	//Input Start
	int N;
	cin >> N;

	vector<set<string>> animal(N);

	for (int i = 0; i < N; i++) {
		string name;
		cin >> name;
		
		int T;
		cin >> T;

		for (int j = 0; j < T; j++) {
			string characteristics;
			cin >> characteristics;
			animal[i].insert(characteristics);
		}
	}
	//Input End

	int maximum = 0;
	
	for (int i = 0; i < N; i++) {
		for (int j = i + 1; j < N; j++) {
			set<string> intersection;
			set_intersection(animal[i].begin(), animal[i].end(), animal[j].begin(), animal[j].end(), inserter(intersection, intersection.begin()));
			if (maximum < intersection.size())
				maximum = intersection.size();
		}
	}

	cout << maximum + 1 << "\n";
}

//Finish