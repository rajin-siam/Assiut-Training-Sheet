#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define ull unsigned long long 
int main()
{
    ll n,x1,x2;
    cin>>n;
    x1=-1+sqrt(1+(4*(2*n)));
    x2=-1+sqrt(1+(4*(2*n)));
    x1/=2;
    x2/=2;
    cout<<min(x1,x2)<<endl;
}