#include<bits/stdc++.h>
using namespace std;
int arr[55];
char ch[55];
int main()
{
    int t,n,check;
    string s;
    cin>>t;

    while (t--)
    {
       check=0;
       cin>>n;
       for(int i=0;i<n;i++)
       {
        cin>>arr[i];
       }

       cin>>s;

       for(int i=0;i<n;i++)
       {

        if(arr[i]!=0)
        {
            ch[i]=s[i];
            for(int j=i+1;j<n;j++)
            {
                if(arr[i]==arr[j] )
                {
                    ch[j]=s[i];
                    arr[j]=0;

                }
            }

        }
        

       }

       for(int i=0;i<n;i++)
       {
        if(ch[i]==s[i])
        {
            continue;
        }
        else
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