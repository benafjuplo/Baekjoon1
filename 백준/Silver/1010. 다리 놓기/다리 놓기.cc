#include<iostream>
#include<vector>
using namespace std;

//Top-Down
//void cal(int& cnt, int N, int M, int seq, vector<int> v) {
//	if (N == 1) {
//		cnt += M;
//		return;
//	}
//	if (seq == N) {
//		cnt += M - v[seq - 2];
//		return;
//	}
//	else {
//		int i;
//		if (seq != 1)
//			i = v[seq - 2] + 1;
//		else
//			i = 1;
//		for (; i <= M - N+seq; i++) {
//			v[seq - 1] = i;
//			cal(cnt, N, M, seq+1, v); 
//		}
//	}
//}

long long factorial1(int n) {
	if (n == 1 || n == 0) {
		return 1;
	}
	else {
		return n * factorial1(n - 1);
	}
}

long long factorial2(int n, int r) {
	if (n == 1 || n == 0 || n == r) {
		return 1;
	}
	else {
		return n * factorial2(n-1, r);
	}
}

long long combination(int n, int r) {
	if (n - r > r) {
		return factorial2(n, n - r) / factorial1(r);
	}
	else
		return factorial2(n, r) / factorial1(n - r);
}


int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N, M;
	int T;
	cin >> T;

	for (int i = 0; i < T; i++) {
		cin >> N >> M;
		//C(M, N) = MPN / N!
		long long C = combination(M, N);
		cout << C << "\n";
	}
	//int cnt = 0;

	//vector<int> v(N);

	//cal(cnt, N, M, 1, v);

	//cout << cnt;
}



//Finish