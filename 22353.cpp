// UCPC 2021 대회 문제 C번

#include "iostream"
using namespace std;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    double a, d, k;
    cin >> a >> d >> k;
    d *= 0.01;
    k *= 0.01;

    double result = 0.0;
    double acc = 1.0;
    int time = a;
    while (true) {
        result += time * acc*d;
        time += a;
        acc *= (1-d);
        d += d*k;
        if (d>=1) {
            result += time * acc;
            break;
        }
    }
    
    cout << fixed;
    cout.precision(7);
    cout << result;
    return 0;
}
