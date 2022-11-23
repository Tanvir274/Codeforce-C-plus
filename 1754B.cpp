#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n;
    cin>>t;

    while (t--)
    {
        cin>>n;
        int f=(n/2)+1,s=1;

        while(f<=n)
        {
            cout<<f++<<" "<<s++<<" ";
            if(n==f and n%2==1)
            {
                cout<<f<<" ";
                break;
            }
        }
        cout<<endl;
        

    }

}
