// #include<bits/stdc++.h>
// using namespace std;

// int arr[12];

// int main()
// {
//     int t,n,c;
//     cin>>t;

//     while (t--)
//     {
//         c=0;
//         cin>>n;

//         for(int i=0;i<n;i++)
//         {
//            cin>>arr[i]; 

//         }

//         for(int i=n-3;i>1;i-=3)
//         {
//            if(arr[i]>arr[i+2])
//            {
//              arr[i] +=arr[i+1];
//            }
//            else
//            {
//              swap(arr[i+1],arr[i+2]);
//              if(arr[i]>arr[i+2])
//              {
//                  arr[i] +=arr[i+1];
//              }

//            }

//         }

//         for(int i=0;i<n-2;i++)
//         {
//             if(arr[i]<arr[i+1])
//             {
//                 continue;
//             }
//             else
//             {
//                 c=1;
//                 break;

//             }
//         }

//         if(c==1)
//         {
//             cout<<"NO";
//         }
//         else
//         {
//             cout<<"YES";
//         }
//         c=0;

//         cout<<endl;
        
//     }
    
// }

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,x;
    cin>>t;
	while(t--)
    {
		cin>>n>>x;
		if(x==1)cout<<"YES";
        else cout<<"NO";
        cout<<endl;
		for(int i=2;i<=n;i++)cin>>x;
	}
}