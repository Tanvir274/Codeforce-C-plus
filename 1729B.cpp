
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;

	while(t--)
	{
		int n;
		string s,ans="";
		cin>>n>>s;
		
		for(int i=n-1; i>=0;i--)
		{
			int a;

			if(s[i]=='0')
			{
				 a=(s[i-2]-'0')*10+(s[i-1]-'0');
				 i -=2;

			}
			else
			{
				a=s[i]-'0';
			}

			ans=char(a+'a'-1)+ans;

		}

		cout<<ans<<endl;

	}
}