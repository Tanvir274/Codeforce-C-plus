#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n;
    cin>>t;

    while (t--)
    {
        cin>>n;

        if(n==1)
        {
            cout<<n<<endl<<1<<" "<<2<<endl;
        }
        else
        {
            cout<<n-1<<endl;
            for(int i=1;i<=(3*n)-3;i +=3)
            {
                if(i%2!=0)
                {
                    cout<<i+1<<" "<<i+5;

                }
                else
                {
                    cout<<i<<" "<<i+3;
                }
                cout<<endl;


            }

        
            
            

        }

        
    }
    
}