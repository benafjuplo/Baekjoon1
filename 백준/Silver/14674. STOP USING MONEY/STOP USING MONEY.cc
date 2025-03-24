/*
- Title : 14674 - STOP USING MONEY
- Start Time : 25-03-20, 15:20
- End Time : 25-03-20, 16:22
- Try : 4(1 : miss price condition, 2 : floating point operation)
- Category : mathematics, sorting, avoiding floating point operations, tuple
- Language : C++20
*/

/* 한국어 주석
이 문제는 요구사항에 맞춰 정렬하는 문제이다.
C++에서는 sort()함수에 사용자 정의 비교 함수를 넣으면 되는데 문제는 부동소수점으로 인한 오류이다.
미리 가성비를 계산하여 정렬 시, 최악의 경우 double 자료형에서도 소수점으로 인한 오류가 발생 가능하다.
따라서 부동 소수점을 피하기 위하여 행복도1/가격1 > 행복도2/가격2 에서 행복도1*가격2 > 행복도2*가격1로 변경하여 코드를 작성한다.
대신에 비교 시 크기가 매우 커지므로 long long을 사용하여야 한다.
*/

#include<iostream>
#include<vector>
#include<algorithm>
#include<tuple>

using namespace std;

int main() {
	cin.tie(0);
	//cout.tie(0);
	ios_base::sync_with_stdio(false);

	int n, k;
	cin >> n >> k;

	vector<tuple<int, int, int>> v(n);

	for (int i = 0; i < n;++i) {
		int seq, price, value;
		cin >> seq >> price >> value;
		v[i] = { seq, price, value };
	}

	sort(v.begin(), v.end(), 
		[](tuple<int, int, int> &a, tuple<int, int, int> &b) {
			//long long left = (long long)get<2>(a) * get<1>(b);
			//long long right = (long long)get<2>(b) * get<1>(a);
			//// value per price
			//if (left > right)
			//	return true;
			//else if (left < right)
			//	return false;
			//else {
			//	// price
			//	if (get<1>(a) < get<1>(b))
			//		return true;
			//	else if (get<1>(a) > get<1>(b))
			//		return false;
			//	else {
			//		// sequence
			//		if (get<0>(a) < get<0>(b))
			//			return true;
			//		else
			//			return false;
			//	}	
			//}

			// organize
			long long left = (long long)get<2>(a) * get<1>(b);
			long long right = (long long)get<2>(b) * get<1>(a);
			if (left != right)	// Descending order for value for money
				return left > right;
			else if (get<1>(a) != get<1>(b))
				return get<1>(a) < get<1>(b);	// Ascending order for price
			else
				return get<0>(a) < get<0>(b);	// Ascending order for game number
		}
	);

	for (int i = 0; i < k;++i) {
		cout << get<0>(v[i]) << "\n";
	}

	return 0;
}

// Finish