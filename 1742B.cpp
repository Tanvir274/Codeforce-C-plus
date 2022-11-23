#include<bits/stdc++.h>
using namespace std;
int a[101];

int main()
{
    int t,n;
    cin>>t;
    while (t--)
    {
        int n, check=0;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }

        sort(a,a+n);

        for(int i=0;i<n-1;i++)
        {
            if(a[i]==a[i+1])
            {
                check=1;
            }
        }

        if(check==0)
        {
            cout<<"YES";
        }
        else
        {
            cout<<"NO";
        }

        cout<<endl;

        
      
    }
    
}