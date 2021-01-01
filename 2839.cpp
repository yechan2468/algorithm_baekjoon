#include "iostream"
using namespace std;

int main() {
    int sugarWeight;
    int bagWeight, numBags;
    int bag5kg = 0;
    int bag3kg = 0;
    cin >> sugarWeight;

    for (bag5kg=sugarWeight/5; bag5kg>=0; bag5kg--) {
        for (bag3kg=0; (bag5kg*5 + bag3kg*3)<=sugarWeight; bag3kg++) {
            if ((bag5kg*5 + bag3kg*3) == sugarWeight) {
                cout << bag5kg + bag3kg;
                return 0;
            }
        }
    }
    cout << -1;

    return 0;
}

/*
 * 5의 배수 -> 무조건 5kg 봉지만
 * 
 * 먼저 5kg 봉지만 모두 넣어보고, 
 * 가능하지 않으면 5kg 봉지 숫자를 하나씩 빼고 
 * (만약 두 봉지의 무게의 합이 sugarWeight보다 커지면 5kg 봉지 숫자를 뺌)
 * 3의 배수를 3, 6, 9 등 작은 숫자부터 넣어본다.
 * 
 */