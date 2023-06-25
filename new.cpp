#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[4];
    for(int i=0; i<4; i++)
    {
        cin>>a[i];
        a[i]=(a[i]%100);
    }
    int ans = a[0]*a[1]*a[2]*a[3];
    ans=(ans%100);
    if (!ans)
        cout<<"00";
    else if (ans<10)
        cout<<"0"<<ans;
    else 
        cout<<ans;
    return 0;
}