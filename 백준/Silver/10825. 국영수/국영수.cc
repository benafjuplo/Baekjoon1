/*
- Title : 10825 - Korean, English, and Mathematics
- Start Time : 25-08-07, 16:14
- End Time : 25-08-07, 16:24
- Try : 1
- Category : sorting
- Language : C++20
*/

/* 한국어 주석
문제의 점수는 구조체에 저장하고 sort() 함수와 람다 함수를 사용하여 정렬한다.
*/

#include<iostream>
#include<algorithm>
#include<string>
#include<vector>

using namespace std;

struct grade {
	string name;	// Student's name
	int kor;		// Korean score
	int eng;		// English score
	int math;		// Mathematics score
};

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	//cout.tie(0);

	int n;
	cin >> n;

	vector<grade> v(n);

	for (int i = 0; i < n; ++i) {
		cin >> v[i].name >> v[i].kor >> v[i].eng >> v[i].math;
	}

	sort(v.begin(), v.end(), 
		[](grade& a, grade& b) {
		// 1. korean
		if (a.kor != b.kor)
			return a.kor > b.kor;
		// 2. english
		if (a.eng != b.eng)
			return a.eng < b.eng;
		// 3. mathematics
		if (a.math != b.math)
			return a.math > b.math;
		// 4. name
		return a.name < b.name;
		}
	);


	for (int i = 0; i < n; ++i) {
		cout << v[i].name << "\n";
	}

	return 0;
}

// Finish