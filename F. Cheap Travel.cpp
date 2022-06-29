	#include <bits/stdc++.h>
	#include <algorithm>
	using namespace std;
	int z,x,c,v,a=0;
	int main() {
		cin>>z>>x>>c;
		cin>>v;
	 if(x*c<=v){ a=z*c;	}
	 else{a=((z/x)*v)+min((z%x)*c,v);}
		cout<<a;
	}
