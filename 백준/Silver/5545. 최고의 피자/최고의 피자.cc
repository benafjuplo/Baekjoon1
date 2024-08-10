/*
- Title : 5545 - Best Pizza
- Start Time : 24-08-10, 01:10
- End Time : 24-08-10, 01:36
- Try : 1
- Category : sorting, mathematics
*/

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(false);

	int N;
	cin >> N;

	int priceOfDough;
	int priceOfTopping;
	cin >> priceOfDough >> priceOfTopping;

	double caloriesOfDough;
	cin >> caloriesOfDough;

	int totalPrice = priceOfDough;
	double totalCalorie = caloriesOfDough;

	vector<double> caloriesOfTopping(N);

	for (int i = 0; i < N; i++) {
		cin >> caloriesOfTopping[i];
	}

	sort(caloriesOfTopping.begin(), caloriesOfTopping.end(), [](double& a, double& b) { return a > b; });

	for (int i = 0; i < N; i++) {
		if (totalCalorie / totalPrice < (totalCalorie + caloriesOfTopping[i]) / (totalPrice + priceOfTopping)) {
			totalCalorie += caloriesOfTopping[i];
			totalPrice += priceOfTopping;
		}
		else
			break;
	}

	cout << (int)totalCalorie / totalPrice;
}

//Finish