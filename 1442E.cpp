#include<bits/stdc++.h>
using namespace std;

int arrn[2000005],arrq[200005];

int main()
{
    int t,n,q;
    cin>>t;
    while (t--)
    {
        cin>>n>>q;

        int long long sum=0;

        for(int i=0;i<n;i++) cin>>arrn[i];
        for(int i=0;i<q;i++) cin>>arrq[i];

        for(int i=0;i<q;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(arrn[j]<=arrq[i])
                {
                    sum=sum+arrn[j];
                }
                else
                {
                    break;
                }
                


            }

            cout<<sum<<" ";
            sum=0;
        }

        cout<<endl;


        
    }
    

}