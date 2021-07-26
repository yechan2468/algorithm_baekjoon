#include "iostream"
#include "string"
using namespace std;

int hexToDec(char hex) {
	return (hex>='A')? hex-'A'+10 : hex-'0';
}

int main() {
	int result = 0;
	string hex;
	cin >> hex;
	int x = 1;
	for (int i=0; i<hex.length(); i++) {
		result += x * hexToDec(hex[hex.length()-1-i]);
		x *= 16;
	}
	cout << result;
	return 0;
}
