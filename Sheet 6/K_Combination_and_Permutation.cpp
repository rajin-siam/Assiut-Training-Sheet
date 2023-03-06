#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define ull unsigned long long 

unsigned long long nPr(int n, int r) {
	if (r > n)
		return 0;
	unsigned long long p = 1, i = n - r + 1;
	while (i <= n){
        p *= i++;
    }
		
	return p;
}

unsigned long long nCr(int n, int r) {
	if (r > n)
		return 0;
	r = max(r, n - r); //nCr(n,r) = nCr(n,n-r)
	unsigned long long ans = 1, div = 1, i = r + 1;
	while (i <= n) {
		ans *= i;
		i++;
		ans /= div;
		div++;
	}
	return ans;
}
int main()
{
    ull n,r;
    cin>>n>>r;
    cout<<nCr(n,r)<<" "<<nPr(n,r)<<endl;
}

