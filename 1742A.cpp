#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,a[3];
    cin>>t;
    while (t--)
    {
        for(int i=0;i<3;i++)
        {
            cin>>a[i];
        }

        sort(a,a+3);

        a[2]=a[2]-a[0];
        a[2]=a[2]-a[1];

        if(a[2]==0)
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