## Task-4 Editorial

We will simplify this problem by counting all the chars grouped together and then dividing it by 16 (as an Among us Character consists of 16 chars) giving us 
total number of Among Us characters grouped together.

To count all the chars together we will simply do dfs in all four possible directions unless we encounter a space `' '` and on reaching each char we will 
increase counter by 1 and mark that char visited by changing that char to some unique char like `#`.

```cpp
int f(vector<string> &v, int i, int j, int wt, int ht)
{
    if (i < 0 || j < 0 || i > ht || j > wt || v[i][j] == ' ' || v[i][j]== '#')
        return 0;
    v[i][j] = #;
    return 1 + f(v, i + 1, j, wt, ht) + f(v, i - 1, j, wt, ht) + f(v, i, j + 1, wt, ht) + f(v, i, j - 1, wt, ht);
}
```

We will repeat this unless all chars are visited and store the output of all in ` map<int,int> mp `

```cpp
for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            if (v[i][j] != ' ' || v[i][j]!= '#')
            {
                mp[f(v, i, j, v[i].size(), n)/16]++;
            }
        }
    }
```    
