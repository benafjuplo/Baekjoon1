#include<iostream>
#include<string>

using namespace std;

bool check1(string temp) {
	if (temp == "c=")
		return true;
	if (temp == "c-")
		return true;
	if (temp == "d-")
		return true;
	if (temp == "lj")
		return true;
	if (temp == "nj")
		return true;
	if (temp == "s=")
		return true;
	if (temp == "z=")
		return true;
	return false;
}

bool check2(string temp) {
	if (temp == "dz=")
		return true;
	return false;
}

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	string str;
	cin >> str;
	int cnt = 0;
	for (int i = 0; i < str.size();) {
		string temp = str.substr(i, 2);
		if (check1(temp)) {
			cnt++;
			i += 2;
			continue;
		}
		temp = str.substr(i, 3);
		if (check2(temp)) {
			cnt++;
			i += 3;
			continue;
		}
		cnt++;
		i++;
	}
	
	cout << cnt;

}