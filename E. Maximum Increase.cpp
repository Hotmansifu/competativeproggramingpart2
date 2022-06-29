#include <iostream>
using namespace std;
int z,c;
int main(){
    cin>>z;
    int x[z];
    for(int i=0; i<z; i++)
        cin>>x[i];
    for(int i=0; i<z-1; i++){
        if(x[i]>=x[i + 1]) c=0; else c++; }
    cout<<++c;
}

