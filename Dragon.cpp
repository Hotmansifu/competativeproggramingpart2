#include <iostream>
#include <algorithm>
int n,k,a,b,x,s;
pair <int,int> d[1005];
int main(){
	cin>>s>>n;
	for (int i=0; i<n; i++){
		cin>>d[i].first>>d[i].second;
	}
sort(d,d+n);
for(int i=0; i<n; i++){
	if(s>d[i].first) s +=d[i].second
	else {cout<<"YES"; return 0;}
}
cout<<"YES";
}
