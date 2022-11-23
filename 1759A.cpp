#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n;
    string str,fstr="";
    cin>>t;

    for(int i=0;i<50;i++)
    {
        fstr +="Yes";
    }

    while (t--)
    {
        bool check=false;
        cin>>str;

        if(fstr.find(str)<fstr.length())
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
