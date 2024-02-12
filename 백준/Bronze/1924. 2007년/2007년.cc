#include<iostream>
#include<string>
using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int x, y;
	cin >> x >> y;

	int month[13] = { 0, 31, 28, 31, 30, 31 ,30 ,31 ,31 ,30 ,31 ,30 ,31 };
	int date = 0;
	for (int i = 1; i < x; i++) {
		date += month[i];
	}

	date += y-1;

	int day;

	day = date % 7;

	string name[7] = { "MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN" };
	
	cout << name[day];
}