#include<bits/stdc++.h>
using namespace std;

// int main()
// {
// 	int t;
// 	cin>>t;

// 	while (t--)
// 	{
// 		int a,b,c;
// 		cin>>a>>b>>c;

// 		if(a==1)
// 		{
// 			cout<<1<<endl;
// 		}
// 		else 
// 		{
// 			cout<<(b>c ? 2: 3)<<endl;
// 		}
// 	}
	
// }
int main()
{
	int t,a,b,c;
	cin>>t;
	while(t--)
	{
		cin>>a>>b>>c;
		if(c>b) b=2*c-b; 
		cout<<(a==b?3:(a>b)+1)<<endl;
	}
	return 0;
}
// int main()
// {
// 	int t;
//  	cin>>t;

// 	while (t--)
// 	{
// 		int a,b,c;
// 	    cin>>a>>b>>c;
// 		int time1=a-1,time2;

// 		if(c>b) b=2*c-b;

		
// 	}

// }