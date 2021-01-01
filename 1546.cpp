#include "iostream"
using namespace std;

int main() {
    int numSubject;
    cin >> numSubject;

    int point;
    int sum = 0;
    int maxPoint = -1;
    for (int i=0; i<numSubject; i++) {
        cin >> point;
        sum += point;
        if (point > maxPoint) {
            maxPoint = point;
        }
    }
    float average = (float)sum / numSubject;

    float newAverage = average / maxPoint * 100;
    
    cout.precision(5);
    cout << newAverage;

    return 0;
}
