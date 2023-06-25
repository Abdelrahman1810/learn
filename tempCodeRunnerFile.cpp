#include<bits/stdc++.h>
#define nn <<"\n"
#define ee <<" "<<
#define ee_ <<" "
#define ll long long
////////////////////////////
#define cins string s;cin>>s
#define cinn int n;cin>>n
#define cinarr(a,n) int a[n];foor(i,0,n)cin>>a[i];
////////////////////////////
#define vec(x) vector<x>
#define pb push_back
////////////////////////////
#define foor(i,a,n) for(int i=a;i<n;i++)
#define autoo(x,n) for (auto &&x : n)
////////////////////////////
#define Y cout<<"YES\n"
#define N cout<<"NO\n"
using namespace std;

void solve();
void tests();

int main()
{
ios_base::sync_with_stdio(0);
cin.tie(0); cout.tie(0);
    solve();
    //tests();
    return 0;
}

void solve()
{
    int n,m,sum=0,a; cin>>n>>m;
    foor(i,0,n) cin>>a,sum+=a;
    foor(i,0,m) cin>>a,sum-=a;
    sum? N:Y;
}

void tests()
{
    int t;cin>>t;
    while(t--)
        solve();
}