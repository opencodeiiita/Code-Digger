#include <bits/stdc++.h>
using namespace std;
#define int long long

mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());

const int mod = 1e9 + 7;

int f(int a, int b, vector<vector<int>> &dp)
{
    if (a == 0 || b == 0)
        return 1;
    if (dp[a][b] != -1)
        return dp[a][b];
    int ans = f(a - 1, b, dp) + f(a, b - 1, dp) + f(a - 1, b - 1, dp);
    return dp[a][b] = ans % mod;
}
int log_a_to_base_b(int a, int b)
{
    return (a > b - 1) ? 1 + log_a_to_base_b(a / b, b) : 0;
}
int32_t main()
{
    auto begin = std::chrono::high_resolution_clock::now();
    int x, y;
    cin >> x >> y;
    int a = log2(x);
    a++;
    int b = log_a_to_base_b(y, 3);
    b++;
    // cout << a << ' ' << b << endl;
    vector<vector<int>> dp(a + 1, vector<int>(b + 1, -1));
    cout << "f = " << f(a, b, dp) << "\n";
    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
    cout << "Time measured: " << elapsed.count() * 1e-6 << "ms\n";

    return 0;
}