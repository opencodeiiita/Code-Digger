#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>edges;
bitset<100001>vis;
long long n,temp;
bool dfs(int a){
    if(a==n-1)return true;
    vis[a]=1;
    bool ans=false;
    for(auto it:edges[a])if(!vis[it])ans=ans|dfs(it);
    return ans;
}
void solve(){
    vis.reset();
    cin>>n;
    edges=vector<vector<int>>(n+1);
    for(int i=0;i<n;i++){
        cin>>temp;
        if(i+temp<=n-1&&i+temp>=0)edges[i].push_back(i+temp);
        if(i!=0)edges[i].push_back(i-1);
    }
    cout<<(dfs(0)?"YES":"NO")<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)solve();
}
