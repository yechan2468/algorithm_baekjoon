#include "iostream"
using namespace std;

int main() {
    int hour, minute;
    cin >> hour >> minute;
    int elapsedMinutes = hour*60 + minute;
    elapsedMinutes -= 45;

    if (elapsedMinutes < 0) {
        elapsedMinutes += 1440; // 24hr * 60min
    }
    
    cout << elapsedMinutes/60 << " " << elapsedMinutes%60;

    return 0;
}
