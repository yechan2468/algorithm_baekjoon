#include "iostream"
using namespace std;

int main() {
    int num1, num2, num3, num4, num5;
    cin >> num1 >> num2 >> num3 >> num4 >> num5;

    cout << (num1*num1 + num2*num2 + num3*num3 + num4*num4 + num5*num5) % 10;

    return 0;
}
