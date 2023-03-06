#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define ull unsigned long long 
ll gcd(ll a, ll b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

// Function to calculate the LCM of two numbers
ll lcm(ll a, ll b) {
    return (a * b) / gcd(a, b);
}
int main()
{
    ll a,b;
    cin>>a>>b;
    if(a>b)swap(a,b);
    ll g,l;
    g=gcd(a,b);
    cout<<g<<" "<<lcm(a,b)<<endl;
}

