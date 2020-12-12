#include "iostream"
#include "vector"
#include "iomanip"
using namespace std;

int main() {
    int numOfClasses, numOfStudents;
    cin >> numOfClasses;
    
    for (int i=0; i<numOfClasses; i++) {
        cin >> numOfStudents;

        float classAveragePoint = 0;
        vector<vector<int>> points;
        int point;
        for (int j=0; j<numOfStudents; j++) {
            cin >> point;
            points[i].push_back(point);
            classAveragePoint += point;
        }
        classAveragePoint /= numOfStudents;

        int numOfStudentsOverAverage;
        for (int j=0; j<numOfStudents; j++) {
            if (classAveragePoint < points[i][j]) {
                numOfStudentsOverAverage++;
            }
        }
        float percent = numOfStudentsOverAverage/numOfStudents*100;
        cout << setprecision(3) << percent << "%\n";
    }

    return 0;
}
