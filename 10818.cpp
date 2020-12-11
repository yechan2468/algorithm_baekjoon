#include "iostream"
using namespace std;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int numberOfIntegers;
    cin >> numberOfIntegers;

    int candidate;

    // initialization
    int min, max;
    cin >> min;
    max = min;

    for (int i=0; i<numberOfIntegers-1; i++) {
        cin >> candidate;

        if (candidate > max) {
            max = candidate;
        } else if (candidate < min) {
            min = candidate;
        }
    }
    cout << min << " " << max;

    return 0;
}
