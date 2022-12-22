#include<bits/stdc++.h>
using namespace std;


int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i=0 ; i<n ; i++){
		cin >> a[i];
	}
	sort(a , a+n);
	int k;
	cin >> k;
	int hi = n-1 , lo =0;
	while(hi - lo > 1){
		int mid = (hi + lo) / 2 ;
		if(a[mid]<k){
			lo = mid + 1;
		}
		else
			hi = mid ;
	}
	if(k == a[lo]){
		cout << lo << endl;
	}
	else if(k == a[hi]){
		cout << hi << endl;
	}
	else
		cout << "not found " << endl;

}
