#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define ull unsigned long long 

bool isDivisible(string N,ll x)
{
    if(x==0)return false;
    ll rem =0;
    ll l= N.size();
    for(ll i=0;i<l;i++)
    {
        rem*=10;
        rem+=(N[i]-'0');
        rem=rem%x;
    }
    return rem==0;
}

int main() {
    string N;
    ll X;
    cin >> N >> X;

    if (isDivisible(N, X)) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }

    return 0;
}
