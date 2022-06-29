#include <iostream>
using namespace std;
int a, b, c, k;
int main() {
    cin >> a >> b >> c;
    while (a+b>=10){
        k++;
        if(a > b) a = a / c; 
        else b=b/c; 
}
    cout<<k;
}
