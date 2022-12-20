#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, prev = 1, check = 0;
        cin >> n;
        int a[n + 1];
        a[0] = 0;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        int j = 1;
        while (j < n && j > 0)
        {
            if ((j + a[j]) > n)
            {
                int k = j - 1;
                while ((k + a[k]) > n)
                {
                    k--;
                }
                if (k <= prev)
                {
                    check = 1;
                    cout << "NO" << endl;
                    break;
                }
                j = k;
            }

            else
            {
                if (a[j] == 0)
                {
                    check = 1;
                    cout << "NO" << endl;
                    break;
                }
                prev = j;
                j += a[j];
            }
        }
        if (j == n)
        {
            cout << "YES" << endl;
        }
        else if (!check)
            cout << "NO" << endl;
    }
    return 0;
}