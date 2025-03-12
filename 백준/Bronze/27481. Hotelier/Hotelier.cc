/*
- Title : 27481 - Hotelier
- Start Time : 25-03-10, 14:40
- End Time : 25-03-10, 14:47
- Try : 1
- Category : string, simulation
- Language : C++20
*/

/* 한국어 주석
방 들의 상태를 string으로 관리하고 <string>에 있는 find_first_of(), find_last_of() 기능을 잘 이용한다.
*/

#include<iostream>
#include<string>

using namespace std;

int main() {
	cin.tie(0);
	//cout.tie(0);
	ios_base::sync_with_stdio(false);

	string rooms = "0000000000";
	
	int n;
	cin >> n;
	
	for (int i = 0;i < n;++i) {
		char x;
		cin >> x;

		if (x == 'L') {
			size_t idx = rooms.find_first_of('0');
			rooms[idx] = '1';
		}
		else if (x == 'R') {
			size_t idx = rooms.find_last_of('0');
			rooms[idx] = '1';
		}
		else {
			rooms[x - '0'] = '0';
		}
	}

	cout << rooms;

	return 0;
}

//Finish