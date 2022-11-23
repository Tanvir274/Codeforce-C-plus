// #include<bits/stdc++.h>
// using namespace std;

// int arr[100];
// int main()
// {
//     int t;
//     cin>>t;

//     while (t--)
//     {
//         int n,k,c=0;
//         cin>>n>>k;
//         long long int sum=0;
        
//         for(int i= 0; i<n; i++) 
//         {
//             cin>>arr[i];
//             if(arr[i] % k !=0)
//             {
//                 c++;

//             }
//         }

        
//             if(c>1)
//             {
//                 for(int i= 0; i<n; i++) 
//                 {
//                     if(arr[i] % k !=0)
//                     {
//                         sum=sum+arr[i];

//                     }
//                 }

//             }
//             else
//             {
//                 for(int i= 0; i<n; i++) 
//                 {
                   
//                     sum=sum+arr[i];

//                 }

//             }

//         cout<<sum<<endl;
        
//     }
    
// }

#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
	int t, n, k, a;
    cin>>t;
    while (t--) 
    {
        cin>>n>>k;
        vector<int> v(k);
        for (int i=0;i<n;++i) cin>>a, v[i%k]=max(v[i%k], a);
        long long sum=0;
        for (auto x: v) sum+=x;
        cout<<sum<<endl;
    } 
	
} 