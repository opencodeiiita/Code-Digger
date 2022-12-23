#include <bits/stdc++.h>
using namespace std;
#define int long long
const int mod = 998244353;
const int N = 2e5;

void primeFactors(int n, vector<int>&v) 
{ 
    while (n%2 == 0) 
    { 
        v.push_back(2); 
        n = n/2; 
    } 
    for (int i = 3; i <= sqrt(n); i = i+2) 
    { 
        while (n%i == 0) 
        { 
            v.push_back(i);
            n = n/i; 
        } 
    } 
    if (n > 2) 
        v.push_back(n); 
} 

int32_t main(){
    int t;
    cin >> t;
    while(t--){
    int n; cin>>n;
    vector<int> v;
    primeFactors(n,v);
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    int k = 1;
    
    k = v[0];
    cout << n/k << endl;
    }
}


