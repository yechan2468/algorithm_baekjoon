#include "iostream"
#include "iomanip"
using namespace std;

int main() {
    int numClasses;
    cin >> numClasses;

    int numStudents;
    for (int i=0; i<numClasses; i++) {
        cin >> numStudents;

        // get average point in each class
        int point;
        int* points = new int[numStudents];
        int sum = 0;
        float averagePoint;
        for (int j=0; j<numStudents; j++) {
            cin >> point;
            points[j] = point;
            sum += point;
        }
        averagePoint = (float)sum / numStudents;

        // get percentage of students who got higher point on exam in each class
        int numStudentsAboveAverage = 0;
        for (int j=0; j<numStudents; j++) {
            if (averagePoint < points[j]) {
                numStudentsAboveAverage++;
            }
        }
        delete points;

        float percent = (float)numStudentsAboveAverage/numStudents*100;
        cout << fixed;
        cout.precision(3);
        cout << percent << "%\n";
    }

    return 0;
}
