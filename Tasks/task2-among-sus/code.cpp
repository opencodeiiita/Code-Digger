#include <bits/stdc++.h>
using namespace std;
void solve(){
    string x;
    int cnt = 0;
    while(getline(cin, x)){
        int n = x.size();
        for(int i=0; i<n-1; i++){
            if(x[i]=='|' && x[i+1]=='|') cnt++;
        }
    }
    while(cnt--) cout<<"sus"<<"\n";
}
signed main(){
    solve();
    return 0;
}
