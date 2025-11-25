/*
- Title : 10882 - International meeting
- Start Time : 25-11-25, 03:13
- End Time : 25-11-25, 03:29
- Try : 1
- Category : mathematics, time calculation
- Language : C++20
*/

/* 한국어 주석
주어진 기준 시간과 UTC 오프셋을 바탕으로 다른 UTC 오프셋의 현지 시간을 계산하는 문제이다.
입력 중간의 불필요한 문자들은 dummy 변수에 저장하여 무시한다.
UTC 시간 차이 계산 시, 이 문제에서는 UTC 오프셋이 항상 정수 또는 .5 단위이므로 부동소수점 오차가 발생하지 않는다.
대신에 모듈러 연산을 통해 분과 시간을 나누기 위하여 10을 곱하여 정수로 변환한다.
시간과 분 계산은 00:00 ~ 23:59 범위 내에서 이루어지도록 조정한다.
출력 시에는 두 자리 형식을 유지하기 위해 setw와 setfill을 사용한다.
*/

#include<iostream>
#include<iomanip>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	//cout.tie(0);

	int N;
	cin >> N;

	char colon;

	int baseHH, baseMM;
	cin >> baseHH >> colon >> baseMM;

	char u, t, c;		// dummy
	cin >> u >> t >> c;
	
	double baseUTC;
	cin >> baseUTC;

	for (int i = 0; i < N; ++i) {
		cin >> u >> t >> c;	// dummy
		double localUTC;
		cin >> localUTC;

		int utcDiff = (localUTC - baseUTC) * 10;
		int localMM = baseMM + (utcDiff % 10) * 6;
		int localHH = baseHH + (utcDiff / 10);

		if(localMM >= 60) {
			localMM -= 60;
			++localHH;
		} else if(localMM < 0) {
			localMM += 60;
			--localHH;
		}
		if(localHH >= 24) {
			localHH -= 24;
		} else if(localHH < 0) {
			localHH += 24;
		}

		cout << setfill('0')
			<< setw(2) << localHH
			<< ':'
			<< setw(2) << localMM
			<< '\n';
	}

	return 0;
}

// Finish