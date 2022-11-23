// #include<bits/stdc++.h>
// using namespace std;
// int arr[8][8];
// int main()
// {
//     int t,n,m;
//     cin>>t;
//     while (t--)
//     {
//         cin>>n>>m;

//         int x,y,check=0;

//         for(int i=1;i<=m;i++)
//         {
//             cin>>x>>y;
//             for(int i=0;i<n;i++)
//             {
//                 arr[x-1][i]=1;
//                 arr[i][y-1]=1;
//             }
            
//         }

//         for(int i=0;i<n;i++)
//         {
//             for(int j=0;j<n;j++)
//             {
//                 if(arr[i][j]!=1)
//                 {
//                     check=1;
//                     break;
//                 }
//             }
//             if(check==1)
//             {
//                 break;
//             }
//         }

//         for(int i=0;i<n;i++)
//         {
//             for(int j=0;j<n;j++)
//             {
//                 arr[i][j]=0;
//             }
//         }

        
        

//         if(check==1)
//         {
//             cout<<"YES";
//         }
//         else
//         {
//             cout<<"NO";
//         }

//         cout<<endl;




        
//     }
    
// }

#include<cstdio>
using namespace std;
int T,n,m;
int main(){
	scanf("%d",&T);
	while(T--){
		scanf("%d%d",&n,&m);
		printf(n>m?"YES\n":"NO\n");
		while(m--) scanf("%*d%*d");
	}
	return 0;
}