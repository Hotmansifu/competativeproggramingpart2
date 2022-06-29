#include <bits/stdc++.h>
using namespace std;
long long z, x, c, v;
main(){
	cin>>z>>x>>c>>v;
if(v+x<=z && v+c<=z) cout<<"YES";
else if(v+x<=z && c+x<=z) cout<<"YES";
else if(v+c<=z && x+c<=z) cout<<"YES";
else cout<<"NO";
		return 0;
	}
