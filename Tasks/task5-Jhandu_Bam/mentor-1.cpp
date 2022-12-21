#include <bits/stdc++.h>
using namespace std;

int n;
bool dfs(int cur,vector<vector<int>> &adj,vector<bool> &vis){
    vis[cur]=1;
    if(cur==n) return 1;
    for(auto child:adj[cur]){
        if(!vis[child]){
            if(dfs(child,adj,vis)) return 1;
        }
    }
    return 0;
}

void solve(){
    cin>>n;

    //Create Arrray of size n+1.
    vector<int> arr(n+1);
    for(int i=1;i<=n;i++) cin>>arr[i];
    
    vector<bool> vis(n+1,0);
    vector<vector<int>> adj(n+1);

    for(int i=1;i<=n;i++){
        int next=i+arr[i];
        if(next>=1 && next<=n && next!=i){
            adj[i].push_back(next);
        }
        if(i-1>=1) adj[i].push_back(i-1);
    }
    if(dfs(1,adj,vis)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
 
int main() {
    //FOR FAST INPUT OUTPUT.
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0); 
	
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
 
	int t=1;
	cin>>t;
	for(int i=1;i<=t;i++) solve();
 
	return 0;
}

//Time -> o(n)
//Space -> O(2*n);

// 7
// 6
// 1 2 3 1 0 0 
// 4
// -3 2 3 1
// 6
// 3 4 2 1 -3 1 
// 4
// 3 0 2 1
// 4
// 3 0 2 -3
// 5
// 0 2 4 3 1
// 5
// 2 0 -2 3 1