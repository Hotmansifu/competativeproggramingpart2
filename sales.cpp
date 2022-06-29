#include <bits/stdc++.h>
using namespace std;
int z,x,a[100];
int s=0;
int main(){
    cin>>z>>x;
    for (int i = 0; i < z; ++i) {cin>>a[i];}
    sort(a, a + z);
    for (int i = 0; i < x; ++i){
        if (a[i]>=0){break;}
        s=s+a[i];
    }
    cout<<-s<<endl;
	return 0;}
