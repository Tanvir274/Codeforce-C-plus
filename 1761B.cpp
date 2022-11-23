#include<bits/stdc++.h>
using namespace std;
int arr[103];

int main()
{
    int t,n,ans;
    cin>>t;

    while (t--)
    {
        ans=1;
        cin>>n;
        for(int i=0;i<n;i++)cin>>arr[i];
        
        for(int i=1;i<n;i++)
        {
            if(arr[i]!=0)
            {
                arr[i]=arr[i-1];
                ans++;
                if(arr[i]==arr[i+1])
                {
                    i++;

                }
                
            }

        }

        cout<<ans<<endl;

    }

}
