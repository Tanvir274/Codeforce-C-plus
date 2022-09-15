#include<iostream>
using namespace std;
int main(){
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		for(int i = n - 3;i > 1; i--) 
        {
          cout<<i<<" ";
        }
		cout<<n - 2<<" "<<1<<" "<<n - 1<<" "<<n<<endl;
	}
}