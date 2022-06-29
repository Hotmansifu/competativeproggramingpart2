#include <bits/stdc++.h>
using namespace std ;
int z,x,c,v;
int main(){
	cin>>z>>x;
    cin>>c>>v;
    if((z+x==c+v)||(z-x==c-v)||(z==c)||(x==v)) cout<<"YES";
    else cout<<"NO";
}
