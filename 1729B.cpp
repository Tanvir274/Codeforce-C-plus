#include<bits/stdc++.h>
using namespace std;

char arr[52];
int main()
{
    int t;
    cin>>t;

    while (t--)
    {
        int n;
        cin>>n;
        for(int i=0;i<=n;i++)
        {
            cin>>arr[i];

        }
        string ans="";

        for(int i=0;i<=n;i++)
        {
            if(arr[i]=='1' || arr[i]=='2')
            {
                if(arr[i])
                if(arr[i+1]>='0'&& arr[i+1]<='9' && i<n)
                {
                    ans=
                }

            }
        }

    }
}
