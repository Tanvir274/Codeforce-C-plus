// #include<bits/stdc++.h>
// using namespace std;
// const int range=52;
// int arr[range];

// int main()
// {
//     int t,m,s;
//     cin>>t;

//     while (t--)
//     {
//         cin>>m>>s;
//         for(int i=0;i<m;i++)cin>>arr[i];
//         sort(arr,arr+m);





        

//         cout<<endl;
        

//     }

// }


#include<bits/stdc++.h>
using namespace std;
 
int main()
{  
    int t,m,s,az,sum,x,f,mx;
	cin>>t;
	while(t--)
    {
		
		cin>>m>>s;
        az=mx=0;
        while(m--)cin>>x,az+=x,mx=max(mx,x);
        sum=az+s;
        f=0;
        mx=max(mx,m);
		for(int i=mx;i<=2000;i++)
        {
            if(i*(i+1)/2==sum)
            {
                f=1;
                break;
            }
        }
        cout<< (f? "YES\n":"NO\n");
		
	}
	
	return 0;
}
