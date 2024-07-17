# include<iostream>
using namespace std;
int main (){
	int n;
	cin>>n;
	int p;
	for(int i=2;i<=n;i++){
		int p=1;
		if(i==2){
			cout<<i<<endl;
		}
		for(int j=2;j<i;j++){
			if(i%j==0){
				p=2;
				break;		
			}
			else{
				p=7;
			}
		}
		if(p==7){
			cout<<i<<endl;
		}
	}
}
