#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n;
    string str;
    cin>>t;

    while (t--)
    {
        cin>>n;
        cin>>str;
        sort(str.begin(),str.end(),greater<int>());

        int a=(str[0]-'a')+1;


        cout<<a<<endl;
        

    }

}
