
#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define ull unsigned long long 

int main() {
    int n;
    cin >> n;

    double sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += log10(i);
    }
    int digits = (int)floor(sum) + 1;

    cout << "Number of digits of " << n << "! is " << digits << endl;

    return 0;
}
