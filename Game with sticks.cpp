#include <bits/stdc++.h>
using namespace std;
int z, x, c;
int main() {
    cin>>z>>x;
    if (z > x) { c = x;} else {c=z;}
    if (c % 2 == 0) {cout << "Malvika";} 
	else {cout << "Akshat";}
}
