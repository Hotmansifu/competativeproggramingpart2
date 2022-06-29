#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n,i,j,k,num = 0;
    cin >> n;
    int arr[n+1];
    for(i = 1;i <= n;++i)cin >> arr[i];
    for(i = 1;i <= n;++i)
    {
        if(i != arr[i])
        {
            j = arr[i];
            arr[i] = 0;
            while(j != 0)
            {            
                k = arr[j];
                arr[j] = j;
                j = k;
                num++;
            }
            num--;
        }
    }
    for(i = 1;i <= n;++i)cout << arr[i] << " ";cout << endl;
    cout << num << endl;
    return 0;
}
