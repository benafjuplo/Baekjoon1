#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<chrono>
#include<iomanip>
using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	auto now = chrono::system_clock::now();
	//UTC +0  ----> UTC +9
	now += chrono::hours(9);
	auto now_c = chrono::system_clock::to_time_t(now);

	cout << put_time(localtime(&now_c), "%G-%m-%d") << endl;
}

//Finish