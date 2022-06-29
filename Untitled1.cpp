#include <iostream>
using namespace std;
int z, x, c, dzveli, axlandeli;
main() {
cin>>z;
for( int i=0; i<z; i++ ) {
cin>>axlandeli;
if (axlandeli==dzveli) c++; else c=1;
if (c>x) x=c;
dzveli=axlandeli;
}
cout<<x<<endl;
}
