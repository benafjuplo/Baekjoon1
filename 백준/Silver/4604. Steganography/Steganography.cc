/*
- Title : 4604 - Steganography
- Start Time : 25-03-20, 10:36
- End Time :
- Try : 3(1 : debug output, 1 : wrong comment set)
- Category : bitset, string, ASCII, parsing, getline, binary, decimal
- Language : C++20
*/

/* 한국어 주석
getline() 함수를 이용하여 한 줄씩 읽어 들인 후 공백(space, ' ')만을 카운트한다.
카운트가 홀수 짝수인지 확인하여 이진수를 형성하는데 이때 bitset을 사용하면 편리하다.
bitset은 거꾸로 인덱싱된다는 것에만 유의하여 구현한다.
bitset의 to_ulong() 함수를 사용하면 간단하게 십진수로 변형 가능하다.
*/

#include<iostream>
#include<string>
#include<bitset>

using namespace std;

const int BITSIZE = 5;

inline char makeChar(bitset<BITSIZE>& b) {
	unsigned long x = b.to_ulong();
	//debug
	//cout << "debug : " << x << "\n";
	//cout << "debug : " << b.to_string() << "\n";

	if (1 <= x && x<=26) {
		return x + 'A' - 1;
	}

	else if (x == 0) {
		return ' ';
	}

	else if (x == 27) {
		return '\'';
	}

	else if (x == 28) {
		return ',';
	}

	else if (x == 29) {
		return '-';
	}

	else if (x == 30) {
		return '.';
	}

	else if (x == 31) {
		return '?';
	}

	return 'f';	// fail
}

int main() {
	cin.tie(0);
	//cout.tie(0);
	ios_base::sync_with_stdio(false);
	
	string line;
	string result = "";
	
	bitset<BITSIZE> b;
	int idxBitset = 0;

	int cntSpace = 0;

	while (true) {
		getline(cin, line);
		
		if (line == "*") {
			if (idxBitset > 0)
				result += makeChar(b);
			if(result != "")
				cout << result << "\n";
			result = "";
			b = 0;
			idxBitset = 0;
		}			
		else if(line == "#")
			break;
		else {
			for (int i = 0; i < line.size();++i) {
				if(line[i] == ' ')
					cntSpace++;
				else if (cntSpace > 0) {
					if(cntSpace % 2 == 0)
						b[BITSIZE - 1 - idxBitset] = true;		// reverse
					else
						b[BITSIZE - 1 - idxBitset] = false;
					cntSpace = 0;
					idxBitset++;
					if (idxBitset >= 5) {
						result += makeChar(b);
						b = 0;
						idxBitset = 0;
					}
				}
			}
		}
	}

	return 0;
}

// Finish