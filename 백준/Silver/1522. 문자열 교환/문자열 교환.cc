#include<iostream>
#include<string>
#include<algorithm>

using namespace  std;

bool isContinuous(string str) {
	int start = str.find('a', 0);
	int end = str.find_last_of('a');

	if (start == string::npos)
		return true;
	
	if (start == end)
		return true;
	
	if (start != 0 || end != str.size() - 1) {
		if (str.find('b', start + 1) < end)
			return false;
	}

	if (start == 0 && end == str.size() - 1) {
		int last = str.find('b', start);
		while (last != string::npos) {
			int temp = str.find('b', last + 1);
			if (temp == string::npos)
				break;
			if (temp == last + 1)
				last = temp;
			else
				return false;
		}
	}
	return true;
}

int findmaxrange(string str, int numB) {
	int max = 0;
	int pos = str.find('b', 0);
	while (pos != string::npos) {
		int cnt = 0;

		for (int i = pos; i < pos + numB; i++) {
			if (i > str.size() - 1) {
				if (str[i - str.size()] == 'b')
					cnt++;
			}
			else {
				if (str[i] == 'b')
					cnt++;
			}
		}

		if (cnt > max)
			max = cnt;

		pos = str.find('b', pos + 1);
	}

	return max;
}

int cal(string &str) {
	int numA = 0;
	int numB = 0;
	for (int i = 0; i < str.size(); i++) {
		if (str[i] == 'b')
			numB++;
	}

	numA = str.size() - numB;

	int max = findmaxrange(str, numB);	

	int res = numB - max;

	return res;
}

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	string str;
	cin >> str;


	if (str.size() <= 2) {
		cout << 0;
		return 0;
	}

	int cnt = 0;

	if (!isContinuous(str)) {
		cnt += cal(str);
	}
	
	cout << cnt;
}

//Finish