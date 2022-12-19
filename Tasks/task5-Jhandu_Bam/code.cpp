include <bits/stdc++.h>
using namespace std;

#define ii pair<int, int>
#define f first
#define s second
#define mp make_pair

void solve(int i, int n, vector<int>& a, vector<int>& vis) {
  if (i < 1 || i > n) return;
  if (vis[i]) return;

  vis[i] = 1;

  solve(i - 1, n, a, vis);
  solve(i + a[i], n, a, vis);
}

int main() {
  vector<pair<int, int>> v;
  long long int Min = 1000000007;
  long long int k = 0;
  long long int l = 0;
  long long int k1 = 0;
  long long int l1 = 0;
  long long int cnt = 0;
  long long int check = 0;

  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> vis(n + 1, 0);
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++) {
      cin >> a[i];
    }
    solve(1, n, a, vis);
    if (vis[n]) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }

  return 0;
}
