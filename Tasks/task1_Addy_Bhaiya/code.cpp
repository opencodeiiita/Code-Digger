#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n = 6;
    for(int i=0; i<10; i++){
        cout<<n<<'\n';
        n *= 2;
        n += 2;
    }
}
signed main(){
    solve();
    return 0;
}
