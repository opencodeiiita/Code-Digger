#include <bits/stdc++.h>
using namespace std;
vector<pair<int,int>>eyes;
string s[100];
int impostor=0,crewmate=0;
vector<vector<char>>crew={
        {' ','*','*','*','*'},
        {'*','*','*','|','|'},
        {'*','*','*','*','*'},
        {' ','*',' ',' ','*'}
    };
vector<vector<char>>impost={
        {'*','*','*','*',' '},
        {'|','|','*','*','*'},
        {'*','*','*','*','*'},
        {'*',' ',' ','*',' '}
    };
void check(pair<int,int>p,int wt,int ht){
    int i=1;int j=4;
    bool changed=true;
    if(j>=3){
        bool same=true;
        for(int k=0;k<4;k++){
            for(int l=0;l<5;l++){
                if(s[p.first-1+k][p.second-4+l]!=crew[k][l])same=false;
            }
        }
        if(same)crewmate++,changed=false;
    }
    if(!changed)return;
    if(j<=wt-5){
        bool same=true;
        for(int k=0;k<4;k++){
            for(int l=0;l<5;l++){
                if(s[p.first-1+k][p.second+l]!=impost[k][l])same=false;
            }
        }
        if(same)impostor++;
    }
}
int f(vector<vector<int>> &v, int i, int j, int wt, int ht)
{
    if (i < 0 || j < 0 || i > ht || j > wt || v[i][j] != 1)
        return 0;
    v[i][j] = 2;
    if(s[i][j]=='|'&&j<wt-1&&s[i][j+1]=='|')eyes.push_back({i,j});
    return 1 + f(v, i + 1, j, wt, ht) + f(v, i - 1, j, wt, ht) + f(v, i, j + 1, wt, ht) + f(v, i, j - 1, wt, ht);
}
int main()
{
    
    long long int n = 100;
    
    long long int a[n], b[n];
    for (int i = 0; i < n; i++)
    {
        s[i] = "";
        getline(cin, s[i], '\n');
    }

    vector<vector<int>> v(n+1, vector<int>(n+1, 0));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < s[i].length(); j++)
            if (s[i][j] != ' ')
                v[i][j] = 1;
    }

    map<int, int> mp;
    int ans=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < s[i].length(); j++)
        {
            if (v[i][j] == 1)
            {
                impostor=0;
                crewmate=0;
                eyes.clear();
                int bande=f(v, i, j, s[i].length(), n)/16;
                for(auto it:eyes){
                    check(it,s[i].length(),n);
                }
                ans+=max(impostor,crewmate);
            }
        }
    }
    cout<<ans<<endl;

    return 0;
}