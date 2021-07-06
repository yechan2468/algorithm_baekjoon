#include "iostream"
using namespace std;

int main(void) {
	string input;
	cin >> input;
	const int NUM_ALPHABETS = 26;
	int alphabets[NUM_ALPHABETS] = {0,};
	
	const int SMALL_A_CHARCODE = 97;
	const int LARGE_A_CHARCODE = 65;
	for (int i=0; i<input.length(); i++) {
		int charCode = int(input.at(i));
		charCode = (charCode>=SMALL_A_CHARCODE)? 
			charCode-SMALL_A_CHARCODE : charCode-LARGE_A_CHARCODE;
		alphabets[charCode]++;
	}
	
	int max = -1;
	int maxIdx = -1;
	for (int i=0; i<NUM_ALPHABETS; i++) {
		if (alphabets[i] > max) {
			max = alphabets[i];
			maxIdx = i;
		} else if (alphabets[i] == max) {
			maxIdx = -1;
		}
	}
	
	if (maxIdx == -1) {
		cout << '?';
		return 0;
	}
	cout << char(maxIdx + LARGE_A_CHARCODE);
	return 0;
}
