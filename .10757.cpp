#include "iostream"
using namespace std;

int main() {
    string num1, num2;
    cin >> num1 >> num2;

    int digitDifference = num1.length() - num2.length();

    if (digitDifference > 0) {
        while (digitDifference--) {
            num2 = "0" + num2;
        }
    } else {
        while (digitDifference++) {
            num1 = "0" + num1;
        }
    }

    int i = num1.length();
    int num1Digit, num2Digit;
    int carry = 0;
    string result = "";
    while (i--) {
        num1Digit = (num1.at(i)) - '0';
        num2Digit = (num2.at(i)) - '0';
        int value = num1Digit + num2Digit;

        result.push_back(carry + (value % 10) + '0');

        if (value > 9) {
            carry = 1;
            if (i == 0) {
                result.push_back('1');
            }
        } else {
            carry = 0;
        }
    }

    i = result.length();
    while (i--) {
        cout << result.at(i);
    }
    return 0;
}
