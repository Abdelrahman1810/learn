#include<bits/stdc++.h>
#include<fstream>
using namespace std;

int main() {
int t; cin>>t; 
while (t--)
{
    int n; cin>>n; int a[n+1],ans=0,mx=0;
    for (int i = 1; i <=n; i++)
    {
        cin>>a[i]; mx=max(mx,a[i]);
    }
    for (int i = 1; i <= n; i++)
    {
        if (a[i]!=0&&a[i]!=mx)
        {
            int b=a[i];
            while (i++)
            {
                
            }
            
        }
        
    }
    
}

}