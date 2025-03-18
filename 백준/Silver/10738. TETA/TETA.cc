/*
- Title : 10738 - TETA
- Start Time : 25-03-17, 11:25
- End Time : 25-03-17, 12:01
- Try : 1
- Category : brute force
- Language : C++20
*/

/* 한국어 주석
식판의 식사 메뉴에 대해서 개별 식사 가격으로 총 가격을 책정한다.
현재 있는 메뉴 중 세트 품목들의 개별 가격 합이 세트 가격보다 높으면 세트 가격으로 새로 책정하고, 
이를 세트 품목들의 개별 가격 합이 세트 가격보다 낮을 때까지 반복한다.
최종적으로 계산되는 총 가격이 구하고자 하는 최선의 가격이다.
*/

#include<iostream>
#include<vector>
#include<unordered_set>
#include<algorithm>

using namespace std;

int main() {
	cin.tie(0);
	//cout.tie(0);
	ios_base::sync_with_stdio(false);

	int k;
	cin >> k;
	vector<int> mealPrices(k+1);

	for (int i = 1; i <= k;++i) cin >> mealPrices[i];

	int setPrice;
	cin >> setPrice;
	const int SET_NUMBER = 4;
	unordered_set<int> setMenu(SET_NUMBER);
	for (int i = 0;i < SET_NUMBER;++i) {
		int menu;
		cin >> menu;
		setMenu.insert(menu);
	}

	int t;
	cin >> t;

	vector <int> trayMenus(k + 1, 0);

	int totalPrice = 0;

	for (int i = 0; i < t;++i) {
		int trayMenu;
		cin >> trayMenu;
		trayMenus[trayMenu]++;		
		totalPrice += mealPrices[trayMenu];
	}
	
	while (true) {
		int price = 0;
		for (int i = 1; i <= k;++i)
			if (trayMenus[i] > 0 && (bool)setMenu.count(i)) {
				price += mealPrices[i];
				trayMenus[i]--;
			}

		if (price > setPrice) {
			totalPrice -= price;
			totalPrice += setPrice;
		}

		else
			break;
	}

	cout << totalPrice;

	return 0;
}

// Finish