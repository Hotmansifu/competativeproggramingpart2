#include <bits/stdc++.h>
using namespace std;
int z,x,c,a1,a2,a3,a4;
int main(){
	cin>>z;
	for(int i=0; i<z; i++){
		cin>>x;
		if(x==1) a1++;
		if(x==2) a2++;
		if(x==3) a3++;
		if(x==4) a4++;
	}
	x=a4+a3+a2/2;
	a1=a1-a3;
	if(a1>0) x=x+a1/4;
	if(a2%2) {x++; a1=a1-2;}
	if(a1%4>0) x++;
	cout<<x;
	}
