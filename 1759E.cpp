// #include<bits/stdc++.h>
// using namespace std;
// const int m=2e5+5;
// int arr[m];

// int main()
// {
//     long long int t,n,h,ans,fans=0;
//     cin>>t;
//     while(t--)
//     {
//         cin>>n>>h;
//         for(int i=0;i<n;i++)
//         {
//             cin>>arr[i];
//         }
//         sort(arr,arr+n);


//         int p[3]={2,2,3},k;
//         do
//         {
//             ans=0,k=0;
//             for(int i=0;i<n;i++)
//             {
//                 if(arr[i]<h)
//                 {
//                     ans++;
//                     h +=arr[i]/2;
//                     continue;
//                 }
//                 else if(arr[i]>=h)
//                 {
//                     if(k<3)h*=p[k];k++;
//                     if(arr[i]<h)
//                     {
//                         ans++;
//                         h +=arr[i]/2;
//                         continue;
//                     }
//                     else if(arr[i]>=h)
//                     {
//                         if(k<3)h*=p[k];k++;
//                         if(arr[i]<h)
//                         {
//                             ans++;
//                             h +=arr[i]/2;
//                             continue;
//                         } 
//                         else
//                         {
//                             break;
//                         }
//                     }
                    
//                 }

//             }
//             fans=max(fans,ans);
//         }while(next_permutation(p,p+3));

//      cout<<fans<<endl;

//     }
// }

// #include<bits/stdc++.h>
// using namespace std;
// int a[200001],n;
// int f(int p,long long h,int x,int y)
// {
// 	if(p==n+1) return 0;
// 	if(a[p]<h) return f(p+1,h+(a[p]/2),x,y)+1;
// 	return max(x?f(p,h*2,x-1,y):0,y?f(p,h*3,x,y-1):0);
// }
// int main()
// {
// 	int t,h,i;
// 	cin>>t;
// 	while(t--)
// 	{
// 		cin>>n>>h;
// 		for(i=1;i<=n;i++)
// 		cin>>a[i];
// 		sort(a+1,a+n+1);
// 		printf("%d\n",f(1,h,2,1));
// 	}
// 	return 0;
// }

#include <bits/stdc++.h>
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
using namespace std;
// typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> OS;
// typedef tree<int, null_type, less_equal<int>, rb_tree_tag,tree_order_statistics_node_update> OMS;
 
// const int   N                               = (int) 1e6+5;
// const int   M                               = (int) 1e9+5;
// const int   mod                             = (int) 1000000007;
// const int   max_prime                       = (int) 1e6+3;
// const int   BLKs                            = (int) 70000;
// const int   BLKspan                         = (int) 700;
 
#define     ll                              long long int
#define     Faster                          ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
 
 
 
 
int main(){
    Faster;
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        ll h;  cin>>h;
        vector<ll> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
 
        int ans=0;
 
        sort(a.begin(),a.end());
 
        vector<int> m = {2,2,3};
 
        do{
            int mi=0,cnt=0;
            ll tempH=h;
            for(int i=0;i<n;i++){
                if(a[i]<tempH){
                    tempH+=(a[i]/2);
                    cnt++;
                }
                else{
                    if(mi==3)break;
                    while(mi<3 and tempH<=a[i]){
                        tempH*=m[mi];
                        mi++;
                    }
                    if(tempH<=a[i]){
                        break;
                    }
                    else{
                        tempH+=(a[i]/2);
                        cnt++;
                    }
                }
            }
            ans=max(ans,cnt);
        }while(next_permutation(m.begin(),m.end()));
 
        cout<<ans<<endl;
    }
    return 0;
}