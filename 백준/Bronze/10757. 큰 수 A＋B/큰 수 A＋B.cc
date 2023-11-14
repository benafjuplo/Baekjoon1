#include<iostream>
#include<string>
using namespace std;

// Adder 방식 // SubString 방식
int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	//Adder 방식
	string A, B;
	cin >> A >> B;
	string result;
	int endA = A.size()-1;
	int endB = B.size()-1;
	int carry = 0;
	if (A.size() > B.size()) {
		for (int i = 0; i < A.size(); i++) {
			if (i < B.size()) {
				int tempA = A[endA] - '0';
				int tempB = B[endB] - '0';
				int temp = tempA + tempB + carry;
				carry = temp / 10;
				temp = temp % 10;
				result.insert(0, to_string(temp));
				endA--; endB--;
			}
			else{
				int temp = A[endA] - '0' + carry;
				carry = temp / 10;
				temp = temp % 10;
				result.insert(0, to_string(temp));
				endA--;
			}
		}
		if(carry>0)
			result.insert(0, to_string(carry));
	}
	else if (A.size() < B.size()) {
		for (int i = 0; i < B.size(); i++) {
			if (i < A.size()) {
				int tempA = A[endA] - '0';
				int tempB = B[endB] - '0';
				int temp = tempA + tempB + carry;
				carry = temp / 10;
				temp = temp % 10;
				result.insert(0, to_string(temp));
				endA--; endB--;
			}
			else {
				int temp = B[endB] - '0' + carry;
				carry = temp / 10;
				temp = temp % 10;
				result.insert(0, to_string(temp));
				endB--;
			}
		}
		if (carry > 0)
			result.insert(0, to_string(carry));
	}
	else {
		for (int i = 0; i < B.size(); i++) {
			if (i < B.size()) {
				int tempA = A[endA] - '0';
				int tempB = B[endB] - '0';
				int temp = tempA + tempB + carry;
				carry = temp / 10;
				temp = temp % 10;
				result.insert(0, to_string(temp));
				endA--; endB--;
			}
		}
		if (carry > 0)
			result.insert(0, to_string(carry));
	}
	cout << result;
}