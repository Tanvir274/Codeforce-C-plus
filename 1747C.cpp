#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t,n,val;
    int long long sum;
    cin>>t;

    while (t--)
    {
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>val;
            sum +=val;
        }

        if(sum%2==0)
        {
            cout<<"Bob";
        }
        else
        {
            cout<<"Alice";
        }
        sum=0;

        cout<<endl;


        
    }
    
}