#include <bits/stdc++.h>
using namespace std;
#define int long long
const int mod = 998244353;
const int N = 2e5;
int mx = 0;

void primeFactors(int n) 
{ 
    while (n%2 == 0) 
    { 
        // v.push_back(2);
        mx = 2;
        n = n/2; 
    } 
    for (int i = 3; i <= sqrt(n); i = i+2) 
    { 
        while (n%i == 0) 
        { 
            mx = max(mx,i);
            n = n/i; 
        } 
    } 
    if (n > 2) 
        mx = max(mx,n);
} 

int32_t main(){
    int t;
    cin >> t;
    while(t--){
    int n; cin>>n;
    // vector<int> v;
    primeFactors(n);
    cout << n/mx << endl;
    }
}


