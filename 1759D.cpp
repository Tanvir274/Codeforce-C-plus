// #include<bits/stdc++.h>
// using namespace std;
// long long t,n,m,cur,i,j;
// main()
// {
//     cin>>t;
//     while(t--)
//     {
//         cin>>n>>m;
//         for(i=18;i>=0;--i)
//         {
//             cur=1;
//             for(j=1;j<=i;++j)cur*=10;
//             {
//                 if(cur/gcd(cur,n)<=m)
//                 {
//                     cout<<m*n/lcm(cur,n)*lcm(cur,n)<<' ';break;
//                 }
//             }

//         }
//     }
// }

#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,n,m,d,ans,i,k;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        for(d=1,i=0;i<19;i++,d*=10)
        {
          k=d/gcd(d,n);
          if(k<=m) ans=(m/k)*k*n;
        }
        cout<<ans<<endl;
    }
}