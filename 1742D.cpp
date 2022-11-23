#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		map<int,int>m;
		for(int i = 0 ; i<n ; i++){
			int y;
			cin>>y;
			m[y] = i+1;
		}
		int ans = -1;
		for(auto [k,v]:m){
			for(auto [k1,v1]:m){
				if (gcd(k,k1)==1)ans = max(ans,v+v1);
			}
		}
		cout<<ans<<endl;
	}
}