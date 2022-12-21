#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    vector<int> v;
    cout << "Number of elements: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        v.emplace_back(temp);
    }

    int x;
    cout << "Enter the element to search: ";
    cin >> x;

    sort(v.begin(), v.end());

    int s = 0;
    int e = n-1;

    while (s <= e)
    {
        int m = (s+e)/2;
        if (v[m] == x)
        {
            cout << x << " has been found!";
            return 0;
        }

        else if (v[m] > x)
        {
            e = m-1;
        }

        else
        {
            s = m+1;
        }
    }

    cout << x << " could not be found";
}