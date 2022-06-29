#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;
string arr[3] = { "Rock","Paper","Scissors" };
int main() {
    int pWin=0, cWin=0,k;
    cin >> k;
    while (true) {
        int p;
        cout << "Choose" << endl;
        for (int i = 0; i < 3; i++) {
            cout << i + 1 << "." << arr[i] << endl;
        }
        cin >> p;
        string p1 = arr[p];
        srand(time(NULL));
        int v1 = rand() % 3;
        string c = arr[v1];
        if (p1 == arr[0] && c == arr[1]) {
            cWin++;
        }
        if (p1 == arr[0] && c == arr[2]) {
            pWin++;
        }
        if (p1 == arr[1] && c == arr[0]) {
            pWin++;
        }
        if (p1 == arr[1] && c == arr[2]) {
            cWin++;
        }
        if (p1 == arr[2] && c == arr[0]) {
            cWin++;
        }
        if (p1 == arr[2] && c == arr[1]) {
            pWin++;
        }
        cout << p1 << " vs " << c;
        cout << endl;
        cout << endl;
        cout << pWin << " - " << cWin<<endl;
        if (pWin == k || cWin == k)break;
        
    }
    if (pWin > cWin)cout << "You win";
    else cout << "Computer wins";
}
