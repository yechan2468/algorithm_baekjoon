#include "iostream"
using namespace std;

int getNumDivided(int N) {
    int x, y;
    int numDivided = 0;

    while (N != 1) {
        if (N % 3 == 0) {
            N /= 3;
        } else {
            if (N % 2 == 0) {
                x = getNumDivided(N / 2);
                y = getNumDivided(N - 1);
                if (x > y) {
                    N /= 2;
                    numDivided += y;
                } else {
                    N -= 1;
                    numDivided += x;
                }                
            } else {
                N -= 1;
            }
        }
        numDivided++;
    }

    return numDivided;
}

int main() {
    int N;
    cin >> N;
    int numDivided = 0;

    numDivided = getNumDivided(N);

    cout << numDivided;
    return 0;
}
