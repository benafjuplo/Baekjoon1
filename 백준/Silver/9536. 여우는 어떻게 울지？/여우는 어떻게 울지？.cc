/*
- Title : 9536 - What does the fox say?
- Start Time : 24-10-12, 04:58
- End Time : 24-10-12, 05:33
- Try : 3 (1 : New line for each test case, 1 : loop mistake)
- Category : stringstream, string, unordered_set
- Language : C++14
*/

/* 한국어 문제 요약
- 문제
숲에서 녹음한 음성이 주어진다. 녹음된 음성에는 여러 동물들의 울음소리가 섞여 있는데 그 중에서 여우의 울음소리를 알아내야 한다.
여우를 제외한 다른 동물들이 어떤 울음소리를 내는지 주어질 때 여우의 소리를 찾는 프로그램을 작성하라.

- 입력
첫 번째 줄에는 테스트케이스의 개수 T가 입력된다. 각 테스트케이스는 아래와 같이 구성되어 있다.

테스트케이스의 첫 줄에는 몇 개의 단어로 이루어진 녹음된 소리가 입력된다. 단어는 알파벳 소문자로만 이루어져 있으며 공백으로 구분된다.
단어의 길이는 최대 100글자이고, 단어의 개수는 최대 100개이다.

다음 줄부터는 여우를 제외한 동물들의 울음소리가 <동물> goes <소리>의 형태로 입력된다.
최소 1마리, 최대 100마리이며, 이름은 최대 100글자이고 실제로 존재하는 동물의 이름이다. 여우를 제외한 동물의 울음소리는 한 단어이고 최대 100글자이다.

마지막 줄에는 다음과 같은 질문이 주어진다. what does the fox say?

- 출력
각 테스트케이스마다 여우의 울음소리를 한 줄씩, 녹음된 순서대로 출력한다. 여우의 울음소리가 녹음되어 있음이 보장된다.

- 예제
입력 : 
1
toot woof wa ow ow ow pa blub blub pa toot pa blub pa pa ow pow toot
dog goes woof
fish goes blub
elephant goes toot
seal goes ow
what does the fox say?
출력 :
wa pa pa pa pa pa pow
*/

/* 한국어 주석
이 문제는 주어진 문자열에서 특정 문자열을 필터링하여 남은 문자열을 출력하는 문제이다.

테스트케이스 T를 입력받고 cin.ingore() 함수를 사용하여 줄바꿈을 버퍼에서 제거한다.
입력으로 주어지는 문자열들은 모두 공백을 포함하고 있기 때문에 getline()함수를 사용하여 줄 단위로 입력받아야 한다.
다음으로 문자열을 공백으로 구분하여 파싱해야 되는데 이때 <sstream> 라이브러리를 사용하면 간단하다.

녹음된 음성들이 이미 알고있는 동물들의 울음소리인지 확인하기 위하여, 이미 알려진 동물들의 울음소리를 <unordered_set>를 사용하여 정리해야 한다.

이후 파싱된 녹음 음성을 알려진 동물들의 울음소리와 비교하기 위해 unordered_set의 find()함수 혹은 cound()함수를 사용한다.
만약 알려지지 않은 음성인 경우 공백으로 구분하여 출력한다.

<sstream>은 ios_base::sync_with_stdio(false)와 함께 사용 시 메모리를 증가시키기에 ios_base::sync_with_stdio(false)는 사용하지 않는다.
*/

/* English Problem Summary
- Question
A recorded audio from a forest contains sounds of various animals, and the goal is to identify the sound made by the fox.
Given information on the sounds made by animals other than the fox, write a program to find the fox's sound.

- Input
The first line contains the number of test cases T. Each test case is structured as follows:

The first line of each test case contains the recorded sounds, composed of words separated by spaces. Each word consists only of lowercase English letters.
Each word has a maximum length of 100 characters, and there can be up to 100 words.

From the next line, each animal's sound, except for the fox, is provided in the format <animal> goes <sound>.
There is at least one and at most 100 animals, with each name being an actual animal and up to 100 characters in length. Each sound is a single word up to 100 characters.

The final line of each test case contains the question: "what does the fox say?"

- Output
For each test case, print the fox's sound on a new line in the order it appears in the recording. The presence of the fox's sound in the recording is guaranteed.

- Example
Input :
1
toot woof wa ow ow ow pa blub blub pa toot pa blub pa pa ow pow toot
dog goes woof
fish goes blub
elephant goes toot
seal goes ow
what does the fox say?
Output :
wa pa pa pa pa pa pow
*/

/* English Comment
This problem involves filtering specific strings from a given text and printing the remaining strings.

First, read the number of test cases, T, and use cin.ignore() to remove the newline character from the buffer.
Since the input strings contain spaces, each line is read with getline() for line-by-line input.
Next, parse each line by splitting the string based on spaces, which can be done easily with the <sstream> library.

To identify if a recorded sound matches a known animal sound, store known animal sounds in an <unordered_set>.

Then, compare each parsed sound from the recording with the known sounds using the find() or count() function of unordered_set.
If the sound is unknown, print it with space separation.

Since <sstream> can increase memory usage when used with ios_base::sync_with_stdio(false), avoid setting ios_base::sync_with_stdio(false).
*/

#include<iostream>
#include<string>
#include<sstream>
#include<vector>
#include<unordered_set>

using namespace std;

int main() {
	cin.tie(0);
	cout.tie(0);

	int T;
	cin >> T;

	// Consume the newline character left in the input buffer
	cin.ignore();

	while (T--) {
		// Read the recording line
		string recordLine;
		getline(cin, recordLine);

		// Split the record
		vector<string> records;

		istringstream recordstream(recordLine);
		string word;

		while (recordstream >> word) {
			records.push_back(word);
		}

		unordered_set<string> otherAnimalSounds;
		
		while (true) {
			string line;
			getline(cin, line);
			if (line == "what does the fox say?")
				break;
			istringstream ss(line);
			while (ss >> word) {
			}
			otherAnimalSounds.insert(word);
		}

		for (int i = 0; i < records.size(); i++) {
			/*if (otherAnimalSounds.find(records[i]) == otherAnimalSounds.end()) {
				cout << records[i] << " ";
			}*/
			if (otherAnimalSounds.count(records[i]) == 0) {
				cout << records[i] << " ";
			}
		}
		cout << "\n";
	}
}

//Finish