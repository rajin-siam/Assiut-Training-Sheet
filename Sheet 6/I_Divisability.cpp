#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define ull unsigned long long 
ll sum(ll n)
{
    return n*(n+1)/2;
}
int main()
{
    ll a,b,x;
    cin>>a>>b>>x;
    ll mx=max(a,b);
    ll mn=min(a,b);
    cout<<(sum(mx/x)*x)-(sum((mn-1)/x)*x)<<endl;
}