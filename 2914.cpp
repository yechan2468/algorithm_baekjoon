#include "iostream"
using namespace std;

int main() {
    int numSong, average;
    cin >> numSong >> average;

    int melody = 1;
    while (melody++) {
        if (average == melody / numSong + 1) {
            if (melody % numSong == 0) {
                melody++;
            }
            break;
        }
    }

    cout << melody;
    return 0;
}
