
#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define ull unsigned long long 
int main()
{
    ll a,b,x;
    cin>>a>>b>>x;
    ll ans=1;
    for(ll i=a;i<=b;i++)
    {
        ans*=(i%x);
        ans%=x;
    }
    cout<<ans<<endl;
}