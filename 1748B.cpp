#include<bits/stdc++.h>
using namespace std;

int arr[200005];

int main()
{
    int t,n,c=0;
    long long int sum=0;
    cin>>t;

    while (t--)
    {
        cin>>n;

        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]==0)
            {
                sum -=accumulate(arr,arr+i,0);
                c++;

            }
            else
            {
                sum +=arr[i];
            }

        }

        if(sum==0)
        {
            cout<<c;
        }
        else
        {
            cout<<c++;
        }

        
        

    }

}
