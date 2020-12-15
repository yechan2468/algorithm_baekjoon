#include "iostream"
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;

    x>0 ? (y>0 ? cout<<1 : cout<<4) : (y>0 ? cout<<2 : cout<<3);

    return 0;
}
