#include <bits/stdc++.h>
using namespace std;
#define int long long
#define test int t;cin>>t;while(t--)
#define mod 998244353

struct triplet{
    int x,y,gcd;
};

triplet extendedEuclid(int a, int b){
    if(b==0){
        triplet ans;
        ans.x=1;
        ans.gcd=a;
        ans.y=0;
        return ans;
    }

    triplet smallAns=extendedEuclid(b,a%b);
    triplet ans;
    ans.x=smallAns.y;
    ans.y=smallAns.x-(a/b)*smallAns.y;
    ans.gcd=smallAns.gcd;
    return ans;
}

int multiplicativeModuloInverse(int a,int m){
    triplet temp=extendedEuclid(a,m);
    return (temp.x%m+m)%m;
}

int power(int a,int n){
    int ans=1;
    while(n){
        if(n&1){
            ans=(ans*a)%mod;
        }
        a=(a*a)%mod;
        n=n>>1;
    }
    return ans;
}

int binMultiply(int a,int b){
    int ans=0;
    while(b){
        if(b&1){
            ans=(ans+a)%mod;
        }
        a=(a+a)%mod;
        b=b>>1;
    }
    return ans;
}
const int N=5e6+1;

vector<bool>isPrime(N,1);
vector<int>lp(N,0),hp(N,0);

void sieve(){
    isPrime[0]=isPrime[1]=false;
    for(int i=2;i<N;i++){
        if(isPrime[i]==true){
            lp[i]=hp[i]=i;
            for(int j=2*i;j<N;j+=i){
                isPrime[j]=false;
                hp[j]=i;
                if(lp[j]==0){
                    lp[j]=i;
                }
            }
        }
    }
}

int gcd(int a, int b){
    if(b==0){
        return a;
    }
    else{
        return gcd(b,a%b);
    }
}

long long nCr(int n, int r)
{
	long long p = 1, k = 1;
	if (n - r < r)
		r = n - r;
	if (r != 0) {
		while (r) {
			p *= n;
			k *= r;
			long long m = gcd(p, k);
			p /= m;
			k /= m;
			n--;
			r--;
		}
	}
	else
		p = 1;
	return p;
}

int totient[N];
void euler_totient_function(){
    for(int i=0;i<N;i++){
        totient[i]=i;
    }
    for(int i=2;i<N;i++){
        if(totient[i]==i){
            for(int j=2*i;j<N;j+=i){
                totient[j]*=(i-1);
                totient[j]/=i;
            }
            totient[i]=i-1;
        }
    }
}
int euler_totient_function_for_a_single_number(int n){
    int ans=n;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            ans=ans-ans/i;
        }
        while(n%i==0)n/=i;
    }
    if(n>1) ans=ans-ans/n;
    return ans;
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    // int total_Students=4;
    int total_Students=2000000;
    // int friends=2;
    int friends=10;
    // int queries=2;
    int queries=4000;
    int temp=0;

    vector<int>pre;
    int sz=(total_Students-friends);
    pre.push_back(1);
    while(sz--){
        pre.push_back(0);
    }
    int c=total_Students-friends;
    int i=1;
    while(i<=(total_Students-friends)){
        pre[i]=(pre[i-1]*c)%mod;
        pre[i]=(pre[i]*multiplicativeModuloInverse(i,mod))%mod;
        i++;
        c--;
    }

    for(int que=0;que<queries;que++){
        int no_of_recruitments,ot=0,t=1;
        cin>>no_of_recruitments;
        temp+=no_of_recruitments;
        while(t<=temp && t<=friends){
            if((temp-t)>(total_Students-friends)){
                t++;
            }
            ot=(ot+((((nCr(friends,t)*pre[temp-t])%mod)*t)%mod))%mod;
            t++;
        }
        cout<<((ot*multiplicativeModuloInverse((nCr(total_Students,temp)%mod),mod))%mod)<<endl;
    }

    return 0;
}