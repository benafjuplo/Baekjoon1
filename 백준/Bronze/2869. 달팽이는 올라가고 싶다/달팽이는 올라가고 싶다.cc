#include <iostream>
#include<cmath>
using namespace std;

int main() {
	int A, B, V;
	cin >> A >> B >> V;
	cout.precision(0);
	cout << fixed << ceil(1.0*(V - A) / (A - B)) + 1;
}