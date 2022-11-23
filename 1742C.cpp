// #include<bits/stdc++.h>
// using namespace std;
// char a[8][8];

// int main()
// {
//     int t;
//     char ch;
//     cin>>t;
//     while (t--)
//     {

//         for(int i=0;i<8;i++)
//         {
//             for(int j=0;j<8;j++)
//             {
//                 cin>>a[i][j];
//                 if(a[i][j]=='R' || a[i][j]=='B')
//                 {
//                     ch=a[i][j];
//                 }
//             }
//         }

//         for(int i=0;i<8;i++)
//         {
            
//                 if(a[7][i]=='R' || a[7][i]=='B')
//                 {
//                     ch=a[7][i];
//                 }
//         }

//         for(int i=0;i<8;i++)
//         {
            
//                 if(a[i][7]=='R' || a[i][7]=='B')
//                 {
//                     ch=a[i][7];
//                 }
//         }

//         cout<<ch<<endl;

  
      
//     }
    
// }

// #include <iostream>

// #define res {int t;cin>>t;while(t--){int f=0;for(int i=0;i<8;i++){string s;cin>>s;if(s=="RRRRRRRR")f=1;}if(f==1)cout<<"R"<<'\n';else cout<<"B"<<'\n';}}
// using namespace std;
// main()
// {
//     res;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int t;
// string s;
// int main(){
// 	int t; 
//     cin>>t;
// 	while(t--)
//     {
// 		int flg=0;
// 		for(int i=1;i<=8;i++)
// 			cin>>s,flg|=s=="RRRRRRRR";
            
// 		cout<<(flg?"R\n":"B\n");
// 	}
// }

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while (t--)
	{
		string s;
		int r=0;
		for(int i=0;i<8;i++)
		{
			cin>>s;
		   if(s=="RRRRRRRR")
		   {
			 r=1;
		   }
		}

		cout<<(r? "R":"B")<<endl;
		

	}
	
}
