/*
 - Title : 18110 -  solved.ac 
 - Start Time : 240502, 22:21
 - Finish Time : 240502, 22:49
*/

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;

	if (n == 0) {
		cout << 0;
		return 0;
	}

	//Trimmed Mean (절사 평균) - 15%
	double N = (double)n * 15 / 100;

	int percentFifteen;

	if ((int)(N * 10) % 10 >= 5)
		percentFifteen = (int)N + 1;
	else
		percentFifteen = (int)N;
		
	int sum = 0;
	
	vector<int> v;

	for (int i = 0; i < n; i++) {
		int temp;
		cin >> temp;
		sum += temp;
		v.push_back(temp);
	}
	
	sort(v.begin(), v.end());

	for (int i = 0; i < percentFifteen; i++) {
		sum -= v[i];
	}

	for (int i = v.size()-1; i > v.size()-1-percentFifteen; i--) {
		sum -= v[i];
	}

	double average = (double)sum / (n - (percentFifteen * 2));

	int result;

	if ((int)(average * 10) % 10 >= 5)
		result = (int)average + 1;
	else
		result = (int)average;

	cout << result;
}

//Finish