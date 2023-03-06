#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define ull unsigned long long 
bool is_prime(ull n)
    {
        
        if(n==2||n==3)return true;
        if(n==1||n%2==0||n%3==0)return false;
        for(ull i=5;i*i<=n;i+=6){
            if(n%i==0||n%(i+2)==0)
            return false;
        }
        return true;
    }
int main()
{
    ull n;
    cin>>n;
    if(is_prime(n))cout<<"YES\n";
    else cout<<"NO\n";

    return 0;

}