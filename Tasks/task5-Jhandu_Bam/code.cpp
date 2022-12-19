//     // if(a < b && k < l && a < k && b < l)
//     // cout << "YES" << endl;
//     // else if(k < l && k < a && a < b && b > l)
//     // cout << "YES" << endl;
//     // else if(k > l && b < a && l < b && a > k)
//     // cout << "YES" << endl;
//     // else if(b < l && k > a && a > b && k > l)
//     // cout << "YES" << endl;
//     // else
//     // cout << "NO" << endl;
// // #include <bits/stdc++.h>>
// // using namespace std;
// // // int cnt = 0;
// // int solve(int i, int j, int sum, int sum1, int sum2, int a[], bool z)
// // {
// //   if(j - i < 1)
// //   {return 0;}
// //   // if(i == j)
// //   // {
// //   //   return 1;
// //   //   z = false;
// //   // }
  
// //   if(sum == sum1 && sum1 == sum2)
// //   {
// //     return 1 + solve(i+1,j,sum-a[i],sum1+a[i],sum2,a,z) + solve(i,j-1,sum-a[j],sum1,sum2+a[j],a,z);
// //   }

// //   return solve(i+1,j,sum-a[i],sum1+a[i],sum2,a,z)+solve(i,j-1,sum-a[j],sum1,sum2+a[j],a,z);
// // }

// // int main() {
// //   int n;
// //   cin >> n;
// //   int a[n];
// //   int sum = 0;
// //   int cnt = 0;
// //   for(int i = 0; i < n; i++)
// //   {
// //       cin >> a[i];
// //       sum += a[i];
// //   }
// //   int sum1 = a[0];
// //   int sum2 = a[n-1];
// //   for(int i = 1; i < n-1; i++)
// //   {
// //       sum2 = sum - sum1 - a[i];
// //       if(sum1 == a[i] && a[i] == sum2)
// //       {cnt++;}
// //       sum1 += a[i];
// //   }
// //   bool z = true;
// //   if(n == 1 || n == 2)cout << 0;
// //   cout << solve(1,n-2,sum-a[0]-a[n-1],a[0],a[n-1],a,z) + cnt;
// // }


// // // #include <iostream>
// // // #include <math.h>

// // // using namespace std;

// // // int a[1000010];
// // // long long cnt[1000010];

// // // int main()
// // // {
// // //     ios::sync_with_stdio(0);
// // //     int n;
// // //     cin >> n;
// // //     long long s = 0;
// // //     for(int i = 0 ; i < n ; ++i)
// // //     {
// // //         cin >> a[i];
// // //         s += a[i];
// // //     }
// // //     if (s % 3 != 0)
// // //         cout << "0\n";
// // //     else {
// // //         s /= 3;
// // //         long long ss = 0;
// // //         for(int i = n-1; i >= 0 ; --i)
// // //         {
// // //             ss += a[i];
// // //             if (ss == s)
// // //                 cnt[i] = 1;
// // //         } 1 4 5 1 1 2
// // //         for(int i = n-2 ; i >= 0 ; --i)
// // //             cnt[i] += cnt[i+1];
        
// // //         long long ans = 0;
// // //         ss = 0;
// // //         for(int i = 0 ; i+2 < n ; ++i) {
// // //             ss += a[i];
// // //             if (ss == s)
// // //                 ans += cnt[i+2];
// // //         }
// // //         cout << ans << "\n";
// // //     }
// // //     return 0;
// // // }

// #include <bits/stdc++.h>
// using namespace std;
// #define ii pair<int, int>
// #define f first
// #define s second
// #define mp make_pair
 
// int const M =  998244353;
// int mn = INT_MAX;
 
// // int solve(int n,int sum)
// // {
// //     if(sum == 0)return 1;
// //     if(sum < 0)return INT_MAX;
    
// //     for (int i = 0; i < n; i++) {
// //         mn = min(mn,solve(n,sum-a[i]));
// //     }
// //     return mn + 1;
// // }
 
// int main(){
  
//   long long int sum = 0;
//   int sum1 = 0;

//   int t; 
//   cin >> t;
//   while(t--)
//     {
//      vector<pair<int,int>>v;
//       long long int n;
//       long long int Min = 1000000007;
//       long long int a = 0;
//       long long int k = 0;
//       long long int l = 0;
//       long long int k1 = 0;
//       long long int l1 = 0;
//       long long int cnt = 0;
//       long long int check = 0;
      
//       cin >> n;
//       long long int b[n];
//       long long int c[n];
//       for(int i = 0; i < n; i++)
//       {
//           cin >> b[i];
//       }
//     //   sort(c,c+n);
//     //   bool z = true;
//     //   for(int i = 0; i < n-1; i++)
//     //   {
//     //       if(b[i] < b[i+1])
//     //       {
//     //           break;
//     //       }
//     //       cnt++;
//     //   }
//       for(int i=1; i<n; i++) if(b[i]<b[i-1])
//       cnt = max(cnt, (b[i-1]+b[i]+1)/2);
      
//      for(int i = 0; i < n; i++)
//       {
//           b[i] = abs(b[i]-cnt);
//       }
//       bool z = true;
//      for(int i = 0; i < n; i++)
//       {
//           if(b[i] > b[i+1])
//           {
//               cout << -1 << endl;
//               z = false;
//               break;
//           }
//       }
//       if(z)
//       {
//           cout << cnt << endl;
//       }
      
      
//     //   if(z)
//     //   {
//     //       cout << a << endl;
//     //   }
//       // map<int,int>m;
//     //   cin >> n;
//       // long long int x[3],y[3];
//       // for(int i = 0; i < 3; i++)
//       // cin >> x[i] >> y[i];

//       // sort(x,x+3);
//       // sort(y,y+3);
//       // if((x[0] < x[1] && x[1] < x[2]) || (y[0] < y[1] && y[1] < y[2]))
//       // {
//       //   cout << "YES" << endl;
//       // }
//       // else
//       // {
//       //   cout << "NO" << endl;
//       // }
// //       long long int dp[n] = {0};
// //       long long int dp1[n] = {0};
// //       long long int a[n-1],b[n];
// // //       dp[0] = 1;
// // //       dp1[0] = 1;
    
// // //     string s;
// //     cin >> k;
// //       for(int i = 0; i < n-1; i++)
// //         {
// //           cin >> a[i];
// //         }
// //       sort(a,a+n-1);
// //      for(int i = 0; i < n-1; i++)
// //         {
// //           if(k < a[i])
// //           {
// //             l = a[i]-k;
// //             if(l%2 != 0)
// //             {
// //               k += l/2;
// //               k++;
// //             }
// //             else
// //             {
// //               k += l/2;
// //             }
// //           }
// //         } 
// //       cout << k << endl;
        
// // //         vector<pair<int , int>>p;
// // // for(int i =  0; i < n; i++){
// // //   int req =  (int)log2(a[i])+1;
// // //   int tmp = pow(2 , req);
// // //   p.push_back({i+1 , tmp - a[i]});
// // // // }
// // // cout<<n<<endl;
// // int ans = 0;
// // for(int i = 0; i < n; i++){
// //     ans += dp[i];
// //     ans %= M;
// // }
//         // sort(a,a+n);
//     //   sort(b,b+n);
//     //   reverse(b,b+n);
//     //  for(int i=0;i<n;i++)
//     // {
//     //     if(a[i]!=Min)
//     //       {
//     //           int c=(a[i]/Min);
//     //           c*=Min;
//     //           c+=Min-a[i];
//     //           v.push_back({i+1,c});
//     //       }
//     // }
//     // cout<<v.size()<<endl;
//     //   for(auto it:v)
//     //   {
//     //       cout<<it.first<<" "<<it.second<<endl;
//     //   }

//     //   cout << cnt << endl;
//     //   for(auto it:v)
//     //     {
//     //       cout << it.first << " " << it.second << endl;
//     //     }
//     // cout << ans%M << endl;
//     }
//   return 0;
// }

// // Sort krdo and fr current ka previous ke saath remainder nikaalo And fr add
// // 3 1 1 2 4 4 6 7 8 10
// // 4 5 6 7 8 9   
// // 3 10 4 9 5 8 6 7 7 6
// // 3 11 4 10 5 9 6 8 7 7

#include <bits/stdc++.h>
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