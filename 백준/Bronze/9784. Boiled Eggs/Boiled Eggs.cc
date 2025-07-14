/*
- Title : 9784 - Boiled Eggs
- Start Time : 25-07-14, 09:43
- End Time : 25-07-14, 09:54
- Try : 2(1 : loopLimit)
- Category : greedy algirithm, sorting
- Language : C++20
*/

/* 한국어 주석
설명 생략.
*/

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	//cout.tie(0);

	int t;
	cin >> t;

	for (int testCase = 1; testCase <= t; ++testCase)
	{
		int n, p, q;
		cin >> n >> p >> q;

		vector<int> v(n);
		for (auto& x : v)
		{
			cin >> x;
		}
		
		sort(v.begin(), v.end());

		int result = 0;

		int gramOfPot = 0;

		int loopLimit = min(p, n);
		for (int i = 0; i < loopLimit; ++i) 
		{
			gramOfPot += v[i];
			if (gramOfPot > q)
			{
				break;
			}
			else
			{
				result++;
			}
		}
		cout << "Case " << testCase << ": " << result << "\n";
	}

	return 0;
}

// Finish