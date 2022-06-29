#include <bits/stdc++.h>
using namespace std;
int z,x,c,r,v=0;
main(){
    cin>>r;
    for(int i=0; i<r; i++){
        cin>>z>>x>>c;;
        if((z==1 && x==1)||(x==1 && c==1)||(z==1 && c==1)){
            v++;
        }
    }
    cout<<v;
}

