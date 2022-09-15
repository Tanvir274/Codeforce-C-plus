#include<bits/stdc++.h>
using namespace std;

int arr[22];

int main()
{
    int t;
    cin>>t;

    while (t--)
    {
        int n, maxIndex=0,maxvalue=0;
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            cin>>arr[i];

            if(arr[i]>=maxvalue)
            {
                maxvalue=arr[i];
                maxIndex=i;
            }

        }
        cout<<maxIndex<<endl;
    }
    
}

