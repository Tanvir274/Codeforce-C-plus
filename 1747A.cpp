#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n;
    cin>>t;
    int long long ne=0,pos=0,val;

    while (t--)
    {
        cin>>n;

        for(int i=0;i<n;i++)
        {
            cin>>val;
            if(val>=0)
            {
                pos +=val;
            }
            else
            {
                ne +=val;

            }
        }

        ne=abs(ne);

        if(ne>=pos)
        {
            cout<<ne-pos;
            ne=0;
            pos=0;
        }
        else
        {
            cout<<pos-ne;
            ne=0;
            pos=0;
        }

        cout<<endl;

        


        
    }
    
}