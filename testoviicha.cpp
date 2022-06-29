#include <bits/stdc++.h>
using namespace std;
int n,raod;
int i,j;
string s,k;
char xmov,xmov1;
main() {
	cin>>n;
	
	for(i=0;i<n;i++) {
		cin>>s>>k;
			if(s[j]=='a' || s[j]=='e' || s[j]=='i' || s[j]=='o' || s[j]=='u') {
				xmov=s[j];
				break;
			}
		for(j=0;j<k.size();j++) {
			if(k[j]=='a' || k[j]=='e' || k[j]=='i' || k[j]=='o' || k[j]=='u') {
				xmov1=k[j];
				break;
			}
		}if(xmov==xmov1) raod++;
	}
		cout<<raod;
	}