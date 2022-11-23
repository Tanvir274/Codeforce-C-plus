#include<bits/stdc++.h>
using namespace std;
int arr[200005];

int main()
{
    int t,n;
    long long int sum=0;
    cin>>t;

    while (t--)
    {
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];

        }
        sort(arr,arr+n);

        sum=abs(arr[n-2]-arr[n-1])+ abs(arr[n-1]-arr[0]);
        cout<<sum<<endl;

        
    }
    
}