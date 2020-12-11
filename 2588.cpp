#include "iostream"
using namespace std;

int main() {
    int num1, num2;
    cin >> num1 >> num2;

    int firstDigit, secondDigit, thirdDigit;
    for (int i=0; i<3; i++) {
        firstDigit = num2/100;
        secondDigit = (num2%100)/10;
        thirdDigit = num2%10;
    }

    cout<< num1*thirdDigit << endl
        << num1*secondDigit << endl
        << num1*firstDigit << endl
        << num1*num2;

    return 0;
}
