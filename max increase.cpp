#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int z,x,c=0;
int maksimaluri=0,v=0;
int main(){
	cin>>z;
	for(int i=0; i<z; i++){
		cin>>x;
		if(x>c){v++;}
else{v=1;}
if(maksimaluri<v){maksimaluri=v;}c=x;}
cout<<maksimaluri;
return 0;
}
