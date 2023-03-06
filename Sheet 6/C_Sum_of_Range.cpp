#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define ull unsigned long long 
int main()
{
    ll s1,s2,a,n1,n2,n,d=1,s;
    ll x,y;
    ll xx,yy;
    cin>>x>>y;
    if(x>y)swap(x,y);
    a=x;
    n=(y-x+1);
    s=(2*a)+((n-1)*d);
    s*=n;
    s/=2;

    if(x%2==0&&y%2==0)n1=((y-x)/2)+1;
    else if(x%2==0&&y%2==1)n1=((y-x)/2)+1;
    else if(x%2==1&&y%2==0)n1=((y-x)/2)+1;
    else n1=((y-x)/2);
    if(x%2==1)a=x+1;
    d=2;
    s1=(2*a)+((n1-1)*d);
    s1*=n1;
    s1/=2;
    s2=s-s1;
    cout<<s<<"\n"<<s1<<endl<<s2<<endl;
}
