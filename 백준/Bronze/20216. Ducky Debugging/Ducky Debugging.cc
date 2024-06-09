/*
- Title : 20216 - Ducky Debugging
- Start Time : 24-06-06, 21:09
- End Time : 24-06-06, 21:17
- Try : 1
*/

#include<iostream>
#include<string>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	while (true) {
		string str;
		getline(cin, str);

		if (str == "")
			continue;
		if (str == "I quacked the code!") 
			break;
		else if (str.back() == '?')
			cout << "Quack!" << endl;
		else if (str.back() == '.')
			cout << "*Nod*" << endl; 
	}
}

//Finish