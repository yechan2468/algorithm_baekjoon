#include "iostream"
using namespace std;

int main() {
    int number;
    int maxNumber = -1, maxIndex = -1;
    for (int i=0; i<9; i++) {
        cin >> number;
        if (number > maxNumber) {
            maxNumber = number;
            maxIndex = i+1;
        }
    }

    cout << maxNumber << '\n' << maxIndex;

    return 0;
}
