// #include<bits/stdc++.h>
// using namespace std;
// int t,n;
// string s;
// int main()
// {
// 	cin>>t;
// 	while(t--)
//     {
// 		cin>>n>>s;
// 		long long x=0,y=0,p=0,q=0,a=0,b=0;
// 		for(int i=0;i<n;i++){
// 			if(s[i]=='0')	x++,a++,b=0;
// 			if(s[i]=='1')	y++,b++,a=0;
// 			p=max(p,a);
// 			q=max(q,b);
// 		}
// 		long long ans=max(p*p,max(q*q,x*y));
// 		cout<<ans<<endl;
// 	}
// 	return 0;
// }

#include <bits/stdc++.h>
using namespace std; 
#define ll      long long int
#define Faster  ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main()
{
    Faster;
    int t;                  
	cin>>t;
    while(t--)
	{
     int n;              
		cin>>n;
     string s;           
		cin>>s;
 
        ll ones=count(s.begin(),s.end(),'1');
        ll zeroes=count(s.begin(),s.end(),'0');
 
        ll ans=ones*zeroes;
 
        ll cons=0;
        for(int i=0;i<n;i++){
            cons++;
            if(i==n-1 or s[i+1]!=s[i]){
                ans=max(ans,cons*cons);
                cons=0;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}