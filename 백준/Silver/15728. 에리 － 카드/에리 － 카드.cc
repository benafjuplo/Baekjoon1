/*
- Title : 15728 - Eri - Card
- Start Time : 24-08-13, 20:05
- End Time : 24-08-13, 21:12
- Try : 3(1 : product of negative and positve number, 1 : Consideration 0)
- Category : mathematics, sorting
*/

#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(false);

	int N, K;
	cin >> N >> K;

	vector<int> teamCard(N);
	//vector<int> sharedCard(N);	// shared card does not need memory

	int minSharedCard = 20000;		// Initialize to a large positive number
	int maxSharedCard = -20000;		// Initialize to a large negative number

	bool isZeroInSharedCard = false;	// Check if there's a zero in shared cards
	
	// Input the shared cards and find the min and max
	for (int i = 0; i < N; i++) {
		int card;
		cin >> card;
		if (card == 0)
			isZeroInSharedCard = true;
		minSharedCard = min(card, minSharedCard);
		maxSharedCard = max(card, maxSharedCard);
	}

	// input the team cards
	for (int i = 0; i < N; i++) {
		cin >> teamCard[i];
	}

	// Sort team cards to simulate opponent blocking
	sort(teamCard.begin(), teamCard.end());

	while (K--) {
		int left = teamCard.front();	// Smallest team card
		int right = teamCard.back();	// Largest team card
		
		//Debug
		//cout << "left : " << max(left * minSharedCard, left * maxSharedCard) << "right : " << max(right * minSharedCard, right * maxSharedCard) << "\n";

		// Consider the products with min and max shared cards
		if (max(left * minSharedCard, left * maxSharedCard) > max(right * minSharedCard, right * maxSharedCard))
			teamCard.erase(teamCard.begin());
		else
			teamCard.erase(teamCard.begin() + teamCard.size() - 1);
	}

	// After blocking, calculate the maximum possible product
	int left = teamCard.front();
	int right = teamCard.back();

	int calculatedMax = max(max(left * minSharedCard, left * maxSharedCard), max(right * minSharedCard, right * maxSharedCard));

	// If zero is in shared cards, consider the product being zero
	if (isZeroInSharedCard)
		calculatedMax = max(calculatedMax, 0);

	cout << calculatedMax;
}

//Finish