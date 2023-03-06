#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define ull unsigned long long 
int main()
{
    ll n;
    cin>>n;
    set<ll>s;

    ll sum=0;
    for(ll i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
           
            sum+=i;
      //      s.insert(i);
            if(i*i!=n){
     //           s.insert(n/i);
                sum+=(n/i);
            }
            
        }
    }
    cout<<sum<<endl;
    
}