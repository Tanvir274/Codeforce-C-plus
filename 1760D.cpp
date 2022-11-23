#include<bits/stdc++.h>
using namespace std;
int arr[200005];

int main()
{
    int t,n;
    cin>>t;

    while (t--)
    {
        int res= 4;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }

        

        for(int i=0;i<4;i++)
        {
            if(arr[0]<0  || arr[n-1]<0 || arr[n-1]>=n || arr[0]>=n)
            {
                res--;
                
            }
            else if(arr[0]!=arr[1])
            {
                res--;
            }
            else if()


        }

        

        cout<<endl;
        

    }

}
