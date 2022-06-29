#include <bits/stdc++.h>
using namespace  std;
string s;
int x;
int main(){
	cin>>s;
	x=s.size();
	for(int i=0; i<x; i++){
		if(s[i]==s[i+1]) {s.erase(i,1); x--; i--;}
	}
	cout<<s;
}
