#include <bits/stdc++.h>
using namespace std;
#define int long long

mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());

const int mod = 1e9 + 7;

int f(int x, int y){
	if(x == 0 || y == 0) return 1;
	int ans = f(x/2, y) + f(x, y/3) + f(x/2, y/3);
	ans %= mod;
	return ans;
}

int32_t main(){
	auto begin = std::chrono::high_resolution_clock::now();

	int x, y; cin>>x>>y;
	cout<<"f = "<<f(x, y)<<"\n";

	auto end = std::chrono::high_resolution_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
    cout << "Time measured: " << elapsed.count() * 1e-6 << "ms\n"; 
    return 0;
}