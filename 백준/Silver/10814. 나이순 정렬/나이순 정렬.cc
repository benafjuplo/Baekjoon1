#include<iostream>
#include<queue>
#include<string>
#include<vector>
using namespace std;

struct user{
	int age;
	string name;
	int seq;
	user(int a, string n, int s) {
		age = a;
		name = n;
		seq = s;
	}
};

struct compare {
	//is a greater than b ?
	bool operator()(user a, user b) {
		if (a.age != b.age) {
			if (a.age > b.age) {
				return true;
			}
			else return false;
		}
		else {
			if (a.seq > b.seq) {
				return true;
			}
			else return false;
		}
	}
};

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;
	priority_queue<user, vector<user>, compare> p;
	for (int i = 0; i < n; i++) {
		int age;
		string name;
		cin >> age;
		cin >> name;
		p.push(user(age, name, i));
	}
	
	for (int i = 0; i < n; i++) {
		cout << p.top().age << " " << p.top().name << "\n";
		p.pop();
	}
}