#include "iostream"
using namespace std;

int main() {
    int times;
    cin >> times;

    int num1, num2;
    for (int i=0; i<times; i++) {
        cin >> num1 >> num2;
        cout << num1 + num2 << '\n';
    }

    return 0;
}
