# include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int p=1;
	for(int i=1;i<=n;i++){
	
		for(int j=1;j<=n;j++){
			char ch='A'+p-1;
			cout<<ch;
			p++;
		}
		cout<<endl;
	}
}
