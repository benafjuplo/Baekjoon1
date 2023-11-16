#include<iostream>
#include<vector>
#include<queue>
#include<stack>
using namespace std;
//oper + - * /
int cal(int a, int b, int oper) {
	int result = 0;
	switch (oper) {
	case 0:
		result = a + b;
		break;
	case 1:
		result = a - b;
		break;
	case 2:
		result = a * b;
		break;
	case 3:
		result = a / b;
		break;
	default:
		break;
	}
	return result;
}

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N;
	cin >> N;
	int arr[11] = { 0 };
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	int oper[4];
	cin >> oper[0] >> oper[1] >> oper[2] >> oper[3];

	priority_queue <int, vector<int>, less<int>> max;
	priority_queue <int, vector<int>, greater<int>> min;

	vector <int> voper;

	// 연산자를 벡터로
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < oper[i]; j++) {
			switch (i) {
			case 0:
				voper.push_back(0);
				break;
			case 1:
				voper.push_back(1);
				break;
			case 2:
				voper.push_back(2);
				break;
			case 3:
				voper.push_back(3);
				break;
			default:
				break;
			}
		}
	}
	stack<int> st;
	int used[4] = { 0 };
	int result = 0;
	for (int a = 0; a < N - 1; a++) {	////////////////
		if (used[voper[a]] == 1) {
			continue;
		}
		if (st.size() != 0) {
			while (true) {
				if (st.size() == 0) {
					break;
				}
				st.pop();
			}
		}
		result = cal(arr[0], arr[1], voper[a]);
		used[voper[a]] = 1;
		st.push(result);
		for (int b = 0; b < N - 1; b++) {		////////////////////////
			if (N - 1 < 2) {
				max.push(result);
				min.push(result);
				break;
			}
			if (st.size() != 1) {
				while (true) {
					if (st.size() == 1) {
						break;
					}
					st.pop();
				}
			}
			result = st.top();
			if (a == b) {
				continue;
			}
			result = cal(result, arr[2], voper[b]);
			st.push(result);
			for (int c = 0; c < N - 1; c++) {		///////////////////////////
				if (N - 1 < 3) {
					max.push(result);
					min.push(result);
					break;
				}
				if (st.size() != 2) {
					while (true) {
						if (st.size() == 2) {
							break;
						}
						st.pop();
					}
				}
				result = st.top();
				if (a == c || b == c) {
					continue;
				}
				result = cal(result, arr[3], voper[c]);
				st.push(result);
				for (int d = 0; d < N - 1; d++) {		///////////////////
					if (N - 1 < 4) {
						max.push(result);
						min.push(result);
						break;
					}
					if (st.size() != 3) {
						while (true) {
							if (st.size() == 3) {
								break;
							}
							st.pop();
						}
					}
					result = st.top();
					if (a == d || b == d || c == d) {
						continue;
					}
					result = cal(result, arr[4], voper[d]);
					st.push(result);
					for (int e = 0; e < N - 1; e++) {			//////////////////////
						if (N - 1 < 5) {
							max.push(result);
							min.push(result);
							break;
						}
						if (st.size() != 4) {
							while (true) {
								if (st.size() == 4) {
									break;
								}
								st.pop();
							}
						}
						result = st.top();

						if (a == e || b == e || c == e || d == e) {
							continue;
						}
						result = cal(result, arr[5], voper[e]);
						st.push(result);
						for (int f = 0; f < N - 1; f++) {							//////////////////////////////////
							if (N - 1 < 6) {
								max.push(result);
								min.push(result);
								break;
							}
							if (st.size() != 5) {
								while (true) {
									if (st.size() == 5) {
										break;
									}
									st.pop();
								}
							}
							result = st.top();
							if (a == f || b == f || c == f || d == f || e == f) {
								continue;
							}
							result = cal(result, arr[6], voper[f]);
							st.push(result);
							for (int g = 0; g < N - 1; g++) {							/////////////////////////////
								if (N - 1 < 7) {
									max.push(result);
									min.push(result);
									break;
								}
								if (st.size() != 6) {
									while (true) {
										if (st.size() == 6) {
											break;
										}
										st.pop();
									}
								}
								result = st.top();

								if (a == g || b == g || c == g || d == g || e == g || f == g) {
									continue;
								}
								result = cal(result, arr[7], voper[g]);
								st.push(result);
								for (int h = 0; h < N - 1; h++) {							////////////////////////////

									if (N - 1 < 8) {
										max.push(result);
										min.push(result);
										break;
									}
									if (st.size() != 7) {
										while (true) {
											if (st.size() == 7) {
												break;
											}
											st.pop();
										}
									}
									result = st.top();

									if (a == h || b == h || c == h || d == h || e == h || f == h || g == h) {
										continue;
									}
									result = cal(result, arr[8], voper[h]);
									st.push(result);
									for (int i = 0; i < N - 1; i++) {									/////////
										if (N - 1 < 9) {
											max.push(result);
											min.push(result);
											break;
										}
										if (st.size() != 8) {
											while (true) {
												if (st.size() == 8) {
													break;
												}
												st.pop();
											}
										}
										result = st.top();
										if (a == i || b == i || c == i || d == i || e == i || f == i || g == i || h == i) {
											continue;
										}
										result = cal(result, arr[9], voper[i]);
										st.push(result);
										for (int j = 0; j < N - 1; j++) {								///////////
											if (N - 1 < 10) {
												max.push(result);
												min.push(result);
												break;
											}
											result = st.top();
											if (a == j || b == j || c == j || d == j || e == j || f == j || g == j || h == j || i == j) {
												continue;
											}
											result = cal(result, arr[10], voper[j]);
											max.push(result);
											min.push(result);
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	cout << max.top() << "\n";
	cout << min.top() << "\n";
}