#include<iostream>
#include<string>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	string str;
	
	while(true)  {
		getline(cin, str);
		if (str.size() == 1 && str[0] == '#')
			break;
		int cnt = 0;
		for (int i = 0; i < str.size(); i++) {
			if (str[i] == 'a' || str[i] == 'A' || str[i] == 'e' || str[i] == 'E' || str[i] == 'i' || str[i] == 'I' || str[i] == 'o' || str[i] == 'O' || str[i] == 'u' || str[i] == 'U')
				cnt++;
		}
		cout << cnt << "\n";
	} 

}