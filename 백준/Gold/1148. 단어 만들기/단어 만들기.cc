/*
- Title : 1148 - Making Words
- Start Time : 24-10-31, 18:26
- End Time : 24-10-31, 18:52
- Try : 1
- Category : string
- Language : C++14
*/

/* 한국어 문제 요약
- 문제
3x3 퍼즐이 있다. 3x3의 표에 영문자가 하나씩 있으며, 이 영문자들을 사용해서 최대한 많은 영단어를 만드는 것이 목표이다.
예를 들면, 아래의 퍼즐판에서는 'LINT', 'TILL', 'BRILLIANT' 등을 만들 수 있다.
L, A, R
B, I, T
N, L, I

단어는 최소 4글자 이상이어야 하며, 한 글자당 최대 1번만 사용할 수 있다. 따라서 10글자 이상의 단어는 만들 수 없다.
또한, 표의 정중앙에 있는 글자는 반드시 사용해야 한다. 위 퍼즐판의 경우 'I'는 반드시 사용해야 한다.

따라서 어떤 글자가 가운데에 있느냐에 따라 퍼즐의 난이도는 천차만별일 것이다. 퍼즐판에 어떤 글자를 배치할지는 결정했으나 어떤 글자를 가운데에 놓을지까지는 정하지 못했다.
어떤 글자를 가운데에 놓아야 퍼즐이 가장 쉬워지는지(즉, 만들 수 있는 단어의 개수가 가장 많음), 또 어떤 글자를 놓아야 퍼즐이 가장 어려워지는지(즉, 만들 수 있는 단어의 개수가 가장 적음)를 구하려고 한다.

문제에서는 현실보다 훨씬 적은 수의 영단어를 사용한다. 이 단어들을 모두 담고 있는 사전과 퍼즐판에 배치할 9개의 문자가 주어졌을 때, 문제를 푸는 프로그램을 작성하시오.

- 입력
입력의 처음에는 사전을 이루는 최대 20만 개의 단어가 주어진다. 각 단어는 4~9글자의 영어 대문자로 이루어져 있으며, 한 줄에 하나씩 주어진다. 또한 사전순으로 정렬되어 있다.
사전 입력의 끝에는 한 줄에 걸쳐 '-' 한 글자가 주어진다.

그 다음부터 여러 개의 퍼즐판이 주어진다. 각 퍼즐판은 9개의 영어 대문자로 이루어져 있으며, 한 줄에 하나씩 주어진다.
입력의 맨 끝에는 한 줄에 걸쳐 '#' 한 글자가 주어진다.

- 출력
각 퍼즐판마다 정답을 예제 형식에 맞게 한 줄에 하나씩 출력한다.
각 문제마다 정답의 개수를 가장 적게 하기 위해 정중앙에 놓아야 할 문자들과 그때의 정답 개수, 정답의 개수를 가장 많게 하기 위해 정중앙에 놓아야 할 문자들과 그 때의 정답 개수를 공백으로 구분하여 출력한다.

한 개 이상의 문자가 답을 만족할 경우 문자들을 알파벳순으로 정렬하여 출력하며, 중복된 문자는 출력하지 않는다.
첫 번째 예제 출력에서 보듯이 I나 L은 여러 번 등장하지만 한 번씩만 출력하였다.

- 예제
입력 : 
APPLE
BANANA
BANE
BRILLIANT
LINT
PALE
PROBLEM
TILL
TRILL
-
LARBITNLI
LEPAPBNNA
LEPAPBNAM
#
출력 : 
AB 1 ILT 4
BN 1 AE 3
M 0 AE 3
*/

/* 한국어 주석
이 문제는 3x3으로 구성된 퍼즐판에서 선택한 중앙 문자에 따라 최대한 많은 영어 단어를 만들 수 있는지 확인하는 문제이다.	

우선 퍼즐판에서 사전에 있는 단어를 만들 수 있는지 판단하는 것을 어떻게 구현할 지에 대해서 생각해봐야 한다.
그 방법은 사전에 있는 단어에 포함된 알파벳별 개수가 퍼즐판의 알파벳별 개수보다 작거나 같은 경우 만들 수 있다고 판단하는 것이다.

이를 위해 각 문자열을 알파벳의 개수인 26개의 배열로 저장한다.
이 때 문자의 개수는 9개가 최대이므로 메모리 최적화를 위해 char형 배열로 저장한다.

퍼즐판의 중앙값에 대해서 최대 9번 함수를 호출하지 않고, 퍼즐판으로 단어가 구성 가능한 경우에 퍼즐판들의 각 문자가 중앙값인 경우를 확인(포함이 되는지 확인)하는 방법으로 구현하면 실행속도가 크게 개선된다.
*/

/* English Problem Summary
- Question
There is a 3x3 puzzle grid with one English letter in each cell. The goal is to form as many valid English words as possible using these letters.
For example, in the grid below, words such as 'LINT', 'TILL', and 'BRILLIANT' can be formed:
L, A, R
B, I, T
N, L, I
Words must be at least 4 letters long, and each letter can be used at most once in a word, meaning words over 10 letters are not possible.
Additionally, the center letter must be included in each word. For the puzzle grid above, the letter 'I' must be included.

Depending on the letter placed in the center, the puzzle difficulty varies greatly. While the letters to use in the grid are decided, the choice of center letter remains.
The task is to determine which letter as the center makes the puzzle easiest (maximizing the number of possible words) and which makes it hardest (minimizing the number of possible words).

The dictionary used here is much smaller than in reality. Given the dictionary containing all valid words and the 9 letters to use in the puzzle grid, create a program to solve the problem.

- Input
The first part of the input consists of up to 200,000 dictionary words, each between 4 to 9 uppercase English letters, presented one per line in lexicographical order.
The dictionary input ends with a single line containing a '-'.

Then, multiple puzzle grids are provided, each represented by a single line containing 9 uppercase English letters.
The input ends with a single line containing a '#'.

- Output
For each puzzle grid, print the answer in the format shown in the example, with each answer on a new line.
For each puzzle, output the letters that make the fewest possible words when placed in the center, the count of words for that arrangement,
the letters that make the most possible words, and the count of words for that arrangement, separated by spaces.

If multiple letters satisfy the answer, print these letters in alphabetical order, excluding duplicates.
As shown in the first example, letters like 'I' and 'L' appear multiple times but are only printed once.

- Example
Input :
APPLE
BANANA
BANE
BRILLIANT
LINT
PALE
PROBLEM
TILL
TRILL
-
LARBITNLI
LEPAPBNNA
LEPAPBNAM
#
Output :
AB 1 ILT 4
BN 1 AE 3
M 0 AE 3
*/

/* English Comment
This problem involves verifying whether a 3x3 puzzle grid can form a maximum number of English words from a given dictionary based on the chosen center letter.

First, to implement word formation checks against the dictionary, consider the following approach:
Words in the dictionary can be formed if the count of each letter in the word does not exceed the count of each letter in the puzzle grid.

To facilitate this, store each string (both dictionary words and puzzle grid configurations) in arrays of 26 elements (one for each letter of the alphabet),
where each element counts occurrences of the corresponding letter.
Since the maximum character count is 9, optimize memory usage by storing counts in arrays of type char.

Instead of calling functions up to nine times for each possible center letter, enhance efficiency by determining if each word can be formed based on the puzzle grid letters.
Then, for each possible center letter in the puzzle grid, verify which words can be formed with that center letter included. This approach can greatly improve execution speed.
*/

#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

const int DICTIONARYSIZE = 200'000;
const int ALPHABETSIZE = 26;

void countPossible(string& minCenter, string& maxCenter, int& minCnt, int& maxCnt, vector<vector<char>>& dictionary, string& puzzle) {
	// Create a vector puzzle based on the count of each alphabet letter
	vector<char> vectorPuzzle(ALPHABETSIZE, 0);
	for (int i = 0; i < puzzle.size(); i++) {
		vectorPuzzle[puzzle[i] - 'A']++;
	}

	vector<int> counts(ALPHABETSIZE, -1);
	for (int i = 0; i < puzzle.size(); ++i) {
		counts[puzzle[i] - 'A'] = 0;
	}

	for (int i = 0; i < dictionary.size(); ++i) {
		bool isPossible = true;
		for (int j = 0; j < ALPHABETSIZE; ++j) {
			if (dictionary[i][j] > vectorPuzzle[j]) {
				// Unable to create words with puzzles
				isPossible = false;
				break;
			}
		}
		// A case where a word can be formed with the puzzle
		if (isPossible) {
			for (int j = 0; j < puzzle.size(); ++j) {
				// Deduplication
				if (j > 0 && puzzle[j] == puzzle[j - 1])
					continue;
				// Check if the center character is used
				if (dictionary[i][puzzle[j] - 'A'] != 0) {
					counts[puzzle[j] - 'A']++;
				}
			}
		}
	}

	// Configure it in output format
	for (int i = 0; i < counts.size(); ++i) {
		if (counts[i] == -1)
			continue;
		if (minCnt > counts[i]) {
			minCenter.erase();
			minCnt = counts[i];
		}
		if (maxCnt < counts[i]) {
			maxCenter.erase();
			maxCnt = counts[i];
		}
		if (minCnt == counts[i]) {
			minCenter += 'A' + i;
		}
		if (maxCnt == counts[i]) {
			maxCenter += 'A' + i;
		}
	}

	return;
}

int main() {
	cin.tie(0);
	//cout.tie(0);
	ios_base::sync_with_stdio(false);

	vector<vector<char>> dictionary(DICTIONARYSIZE, vector<char>(ALPHABETSIZE, 0));

	int seqDictionary = 0;

	while (true) {
		string word;
		cin >> word;
		
		if (word == "-")
			break;

		for (auto c : word) {
			dictionary[seqDictionary][c - 'A']++;
		}
		seqDictionary++;
	}

	while (true) {
		string puzzle;
		cin >> puzzle;
		if (puzzle == "#")
			break;

		sort(puzzle.begin(), puzzle.end());

		string minCenter = "";
		string maxCenter = "";

		int minCnt = DICTIONARYSIZE + 1;
		int maxCnt = 0;

		countPossible(minCenter, maxCenter, minCnt, maxCnt, dictionary, puzzle);

		cout << minCenter << " " << minCnt << " " << maxCenter << " " << maxCnt << "\n";
	}

	return 0;
}

//Finish