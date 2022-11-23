#include<bits/stdc++.h>
using namespace std;

long long int arr[100010];



int main()
{
    int t,n,q,a,b,odd=0,even=0;
    long long int sum=0,totalsum=0;
    cin>>t;
    while (t--)
    {
       
        cin>>n>>q;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            sum=sum+arr[i];
            if(arr[i]%2==0)
            {
                even++;
            }
            else
            {
                odd++;
            }

        }

         while (q--)
         {
           cin>>a>>b;

           if(a==0)
           {
            totalsum=sum+(b*even);
           }
           else
           {
            totalsum=sum+(b*odd);
           }

           cout<<totalsum<<endl;
           sum=totalsum;
           totalsum=0;

         }
         

        
    }
    
}