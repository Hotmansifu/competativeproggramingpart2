#include <bits/stdc++.h>
using namespace std;
int a,b,k;
main(){
cin>>a>>b;
if(a>b) k=b; else k=a;
for(int i=k; a>=1; i--){
	if (a%i==0 && b%i==0) {
	cout<<i<<" "; break;}
}
}

