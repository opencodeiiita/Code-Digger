#include <bits/stdc++.h>
using namespace std;



int main(){
	int n ;long long int find; cin>>n>>find;
	vector<long long int> v(n);
	for(int i = 0 ; i< n; ++i){
		cin>>v[i];
	}

	sort(v.begin() , v.end());

	int l = 0 ; int h = n-1;

	while(h-l > 1){
        int mid = (l + h )/2 ;
        if(v[mid]>find){
        	h = mid -1 ;
        }
        else {
        	l = mid ;
        }
	}

	if(v[l]==find){
		cout<<"YES"<<endl;
	}
	else if(v[h]==find){
		cout<<"YES"<<endl;
	}
	else{
		cout<<"NO"<<endl;
	}


 
}




