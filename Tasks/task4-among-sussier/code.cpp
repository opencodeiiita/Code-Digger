#include <bits/stdc++.h>
using namespace std;
int f(vector<vector<int>> &v, int i, int j, int wt, int ht)
{
    if (i < 0 || j < 0 || i > ht || j > wt || v[i][j] != 1)
        return 0;
    v[i][j] = 2;
    return 1 + f(v, i + 1, j, wt, ht) + f(v, i - 1, j, wt, ht) + f(v, i, j + 1, wt, ht) + f(v, i, j - 1, wt, ht);
}
int main()
{
    long long int n = 100;
    string s[n];
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

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < s[i].length(); j++)
        {
            if (v[i][j] == 1)
            {
                mp[f(v, i, j, s[i].length(), n)/16]++;
            }
        }
    }


    for (auto &m : mp)
    {
        cout << m.first << " : " << m.second << endl;
    }

    return 0;
}
