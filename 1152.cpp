#include "iostream"
using namespace std;

int main(void) {
	string input;
	getline(cin, input);
	
	int count = 0;
	if (input.front() == ' ') count--;
	if (input.back() == ' ') count--;
	string::iterator iter;
	for (iter=input.begin(); iter<input.end(); iter++) {
		if (*iter == ' ') count++;
	}
	
	if (count == -1) {
		cout << 0;
		return 0;
	}
	cout << count + 1;
}
