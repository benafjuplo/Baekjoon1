/*
- Title : 9170 - Single Digit Adder
- Start Time : 24-07-09, 00:25, 21:35,			  23:35
- End Time :   24-07-09, 00:35, 22:46 / 24-07-10, 00:30
- Try : 1
- Category : Stack
*/

#include<iostream>
#include<stack>
#include<string>
#include<climits>

using namespace std;

// if end with '(' return true
// else return false
bool calStack(stack<int>& st) {
	int op2 = -1;	// left
	int op = -1;	// right
	int A = INT_MIN;
	int B = INT_MIN;
	bool bParenthesis = false;
	while (st.size()!=0 && op2 == -1) {
		if (st.top() == '(') {
			st.pop();
			bParenthesis = true;
			break;
		}
		if (st.top() == '+' || st.top() == '-') {
			if (op == -1) {
				op = st.top();
				st.pop();
			}
			else {
				op2 = st.top();
				st.pop();
			}

		}
		else {
			if (B == INT_MIN) {
				B = st.top();
				st.pop();
			}
			else {
				A = st.top();
				st.pop();
			}
		}
	}

	if (op == -1) {
		st.push(B);
	}

	else if (A == INT_MIN) {
		if (op == '-') {
			st.push(-B);
		}
		else
			st.push(B);
	}

	else {
		if (op2 == '-')
			A = -A;
		if (op2 != -1)
			st.push('+');

		if (op == '-') {
			st.push(A - B);
		}
		else
			st.push(A + B);
	}

	
	return bParenthesis;
}

int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(false);

	string str;
		
	while (getline(cin, str)) {
	stack<int> st;
		for (int i = 0; i < str.size(); i++) {
			// stack push
			if (str[i] != ')') {
				if (str[i] == '+' || str[i] == '-' || str[i] == '(')
					st.push(str[i]);
				else	//Number
					st.push(str[i] - '0');
			}
			// stack pop
			else {		// when, )
				while (!calStack(st)) {
					//until calStack is true
				}
			}
		}

		// No parenthesis
		while (st.size() > 1) {
			calStack(st);
		}

		cout << st.top() << "\n";
	}
}

//Finish