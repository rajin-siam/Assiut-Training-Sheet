#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define ull unsigned long long 
int main()
{
    ll a,b,q;
    cin>>a>>b>>q;
    ll Q[30];
    Q[0]=a;
    Q[1]=b;
    Q[2]=a^b;
    
    if(q%3==1)cout<<Q[0];
    else if(q%3==2)cout<<Q[1];
    else cout<<Q[2];
    cout<<endl;
    
    
}