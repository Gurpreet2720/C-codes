# include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n-i+1;j++){
			cout<<j;
		}
		for(int j=1;j<=(2*i)-2;j++){
			cout<<"*";
		}
		for(int m=1;m<=n;m++){
			for(int q=1;q<=m-1;q++){
				cout<<"*";
			}
			for(int z=1;z<n-m+1;z++){
				cout<<z-m+1;
			}
		}
		cout<<endl;
	}
	cout<<endl;
}
