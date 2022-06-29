#include <iostream>
using namespace std;
int a, b, c;
int main() {
    cin >> a >> b >> c;
    while (a+b>=10) {
        if (a > b) {
            a = a / c; c++;
        }
        else {
            b = b / c;
        }
    }
    cout << a << " " << b;
}

