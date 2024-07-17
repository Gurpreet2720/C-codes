# include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n-i+1;j++){
			cout<<j;
		}
		for(int p=1;p<=2*i-2;p++){
			cout<<"*";
		}
		for(int q=1;q<=n;q++){
			for(int j=1;j<=i-1;j++){
				cout<<"*";
			}
			for(int l=1;l<=n-i+1;l++){
				cout<<n-l+1;
			}
			cout<<endl;
		}
		cout<<endl;
		
	}
	
}
