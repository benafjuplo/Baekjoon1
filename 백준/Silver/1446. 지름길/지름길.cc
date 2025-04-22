/*
- Title : 1446
- Start Time : 25-03-18, 15:22
- End Time : 25-03-18, 16:44
- Try : 1
- Category : dynamic programming(unordered_map, tuple, sorting)
- Language : C++20
*/

/* 한국어 주석
주어진 입력이 실제로는 지름길이 아니거나 사용 불가능한 것일 수 있기에 미리 필터링한다.
중요한 지점은 각 지름길이 시작되는 곳과 끝나는 곳이다.
지름길이 끝나는 곳을 기준으로 가장 빠른 선택지는 "최근에 판단한 빠른 길 + 고속도로"와 "지름길이 시작된 곳에서 판단한 빠른 길 + 지름길" 중 하나이다.
이때, 지름길과 시작과 끝이 고유하지 않기에 주의한다.
다이나믹 프로그래밍으로 해결 가능하다. for문을 0부터 D까지 돌릴 수도 있지만 중요한 지점만 판단하면 이 문제보다 큰 입력의 경우에 메모리와 시간 절약이 가능하다.

또한, 각 중요한 지점을 잘 정리하면 그래프 이론으로 변경하여 최단 경로(다익스트라 알고리즘)를 적용 가능하다.
*/

#include<iostream>
#include<algorithm>
#include<vector>
#include<tuple>
#include<unordered_map>

using namespace std;

int main() {
	cin.tie(0);
	//cout.tie(0);
	ios_base::sync_with_stdio(false);

	int n, d;
	cin >> n >> d;

	vector<tuple<int, int, int>> shortcuts;
	vector<int> startPoints;
	vector<int> endPoints;

	for (int i = 0; i < n;++i) {
		int start, end, length;
		cin >> start >> end >> length;
		if (end - start <= length || d < end || d < start)
			continue;
		else {
			shortcuts.push_back({ start,end,length });
			startPoints.push_back(start);
			endPoints.push_back(end);
		}
	}

	sort(startPoints.begin(), startPoints.end());
	sort(endPoints.begin(), endPoints.end());

	sort(shortcuts.begin(), shortcuts.end(),
		[](tuple<int, int, int>& a, tuple<int, int, int>& b) {
			return get<1>(a) < get<1>(b);
		}
	);

	unordered_map<int, int> records;
	pair<int, int> lastRecord = { 0,0 };

	int idxStart = 0;
	int idxEnd = 0;

	while (idxStart < startPoints.size() || idxEnd < endPoints.size()) {
		int i;
		if (idxStart < startPoints.size() && idxEnd < endPoints.size()) {
			i = min(startPoints[idxStart], endPoints[idxEnd]);
		}
		else if (idxEnd < endPoints.size())
			i = endPoints[idxEnd];
		else
			i = startPoints[idxStart];

		if (idxEnd < endPoints.size() && i == endPoints[idxEnd]) {
			int newValue = min(lastRecord.second + i - lastRecord.first, records[get<0>(shortcuts[idxEnd])] + get<2>(shortcuts[idxEnd]));
			if (records.count(i)) {
				records[i] = min(records[i], newValue);
				lastRecord = { i,records[i] };
			}
			else {
				records[i] = newValue;
				lastRecord = { i,records[i] };
			}
			idxEnd++;
			if (idxStart < startPoints.size() && i == startPoints[idxStart])
				idxStart++;
		}
		else if (idxStart < startPoints.size() && i == startPoints[idxStart]) {
			records[i] = lastRecord.second + i - lastRecord.first;
			lastRecord = { i,records[i] };
			idxStart++;
		}

		//debug
		//cout << lastRecord.first << " " << lastRecord.second <<'\n';
	}

	if (records.count(d))
		cout << records[d];
	else
		cout << lastRecord.second + d - lastRecord.first;

	return 0;
}

//Finish