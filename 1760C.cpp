#include<bits/stdc++.h>
using namespace std;
int arr[200005];

int main()
{
    long long int ans, t,n,max,se;
    cin>>t;

    while (t--)
    {
        max=1;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]>max)
            {
                se=max;
                max=arr[i];

            }
            else if(arr[i]>se)
            {
                se=arr[i];
            }

        }
        for(int i=0;i<n;i++)
        {
            if(arr[i]==max)
            {

                cout<<max-se<<" ";
            }
            else
            {
                cout<<arr[i]-max<<" ";
            }
            
        }

        
        cout<<endl;
        

    }

}
