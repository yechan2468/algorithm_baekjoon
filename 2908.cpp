#include "iostream"
using namespace std;

int reverse(int num) {
	int first = num / 100;
	int second = (num % 100) / 10;
	int third = num % 10;
	return third*100 + second*10 + first;
}

int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int num1, num2;
	cin >> num1 >> num2;

	num1 = reverse(num1);
	num2 = reverse(num2);

	int result = num1>num2? num1 : num2;
	cout << result;
	return 0;
}
