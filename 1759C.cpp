#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,l,r,a,b,x;

    cin>>t;
    while (t--)
    {
        cin>>l>>r>>x>>a>>b;

        if(a==b)
        {
            cout<<0;
        }
        else if(abs(a-b)>=x)
        {
            cout<<1;
        }
		else if(a-l>=x and b-l>=x || r-a>=x and r-b>=x)
        {
            cout<<2;
        }
		else if(a-l>=x and r-l>=x and r-b>=x || r-a>=x and r-l>=x and b-l>=x)
        {
            cout<<3;
        }
        else
        {
            cout<<-1;
        }
        
        cout<<endl;
        
    }
    
}